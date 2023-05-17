#include "IsoTriangle.h"
#include <math.h>

/////////////////////////////-CONSTRUCTORS-///////////////////////////////////////

/// @brief default constructor 
IsoTriangle::IsoTriangle() {

	cout << "IsoTriangle - constructor - default" << endl;
	Init();
}

/// @brief costructor with attributes set
/// @param b stands for "base". Uses float 
/// @param h stands fot "height. Uses float
IsoTriangle::IsoTriangle(float b, float h) {
	Init();
	cout << "IsoTriangle - constructor" << endl;
	
		if (b <= 0. || h <= 0.) {
			cout << "WARNING: Rectangle-constructor: base and height should be > 0" << endl;

		}
		else {
			base = b;
			height = h;
		}

		Area();
		Perimeter();

}

/// @brief copy constructor 
/// @param p reference to the IsoTriangle object that should be copied 
IsoTriangle::IsoTriangle(const IsoTriangle& p) {

	cout << "IsoTriangle - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
IsoTriangle::~IsoTriangle() {

	cout << "IsoTriangle - destructor" << endl;
	Reset();

}

////////////////////////////////-OPERATOR-////////////////////////////////////////////////////////////

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
IsoTriangle& IsoTriangle::operator=(const IsoTriangle& p) {
	cout << "IsoTriangle - operator =" << endl;
	Init(p);
	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool IsoTriangle::operator==(const IsoTriangle& r) {
	if (r.height == height && r.base == base)
		return true;

	return false;
}

//////////////////////////////-INIT & RESET-///////////////////////////////////////////////////////////////////7

/// @brief default initialization of the object
void IsoTriangle::Init() {
	Reset();
	base = 0.;
	height = 0.;

	Area();
	Perimeter();
}


/// @brief initialization of the object as a copy of an object 
/// @param it reference to the object that should be copied 
void IsoTriangle::Init(const IsoTriangle& it) {
	Reset();
	base = it.base;
	height = it.height;

	Area();
	Perimeter();
}

/// @brief total reset of the object  
void IsoTriangle::Reset() {
	base = 0.;
	height = 0.;

	Area();
	Perimeter();
}

////////////////////////////////-SETTERS//////////////////////////////////////////////
/// @brief SetHeight sets the height value. base is a protected variable 
/// @param h is the give value used to set the base
void IsoTriangle::SetBase(float b) { 
	if (b < 0) {
		cout << "WARNING - IsoTriangle - SetBase: Cannot set the base with an invalid value";
		return;
	}
	base = b;
	Area();
	Perimeter();
};
/// @brief SetHeight sets the height value. Height is a protected variable 
/// @param h is the give value used to set the height
void IsoTriangle::SetHeight(float h) { 
	if (h < 0) {
		cout << "WARNING - IsoTriangle - SetBase: Cannot set the height with an invalid value";
		return;
	}
	height = h;
	Area();
	Perimeter();
};
/////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////-GETTERS&FUNCTIONS-///////////////////////////////////

/// @brief Area sets the Area of the IsoTriangle with the current base and height
/// @return a float area valure
float IsoTriangle::Area() {
	area = (base * height / 2);
	return area;
}

/// @brief Perimeter sets the perimeter of the IsoTriangle with the current base and height
/// @return a float perimeter valure
float IsoTriangle::Perimeter() {
	perimeter = (base + 2 * height);
	return perimeter;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////-DUMP-/////////////////////////////////////////////////////////
/// @brief for debugging: all about the object
void IsoTriangle::Dump() {

	cout << endl;
	cout << "---IsoTriangle---" << endl;
	cout << endl;

	cout << "Base = " << base << endl;
	cout << "height = " << height << endl;
	cout << "side = " << GetSide() << endl;
	cout << endl;
}


