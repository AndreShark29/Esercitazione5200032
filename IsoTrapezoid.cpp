#include "IsoTrapezoid.h"

/// @brief default constructor 
IsoTrapezoid::IsoTrapezoid() {

	cout << "IsoTrapezoid - constructor - default" << endl;
	Init();
}

IsoTrapezoid::IsoTrapezoid(float t, float b, float h) {
	Init();
	cout << "IsoTrapezoid - constructor" << endl;
	if (t > b) {
		cout << "WARNING: Rectangle - constructor: the top should be shorter then the bottom" << endl;
	}
	else {
		if (t <= 0. || b<= 0. || h<=0.) {
		cout << "WARNING: Rectangle-constructor: each side should be > 0" << endl;
	
	}
	else {
		top = t;
		bottom = b;
		height = h;
	}
	
}
	
}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
IsoTrapezoid::IsoTrapezoid(const IsoTrapezoid& p) {

	cout << "IsoTrapezoid - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
IsoTrapezoid::~IsoTrapezoid() {

	cout << "IsoTrapezoid - destructor" << endl;
	Reset();

}

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
IsoTrapezoid& IsoTrapezoid::operator=(const IsoTrapezoid& p) {
	cout << "IsoTrapezoid - operator =" << endl;
	Init(p);
	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool IsoTrapezoid::operator==(const IsoTrapezoid& r) {
	if (r.bottom== bottom && r.top == top && r.height==height)
		return true;
	
	return false;
}


/// @brief default initialization of the object
void IsoTrapezoid::Init() {
	Reset();
	bottom = 0.;
	top = 0.;
	height =0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void IsoTrapezoid::Init(const IsoTrapezoid& it) {
	Reset();
	bottom =it.bottom;
	top = it.top;
	height = it.height;
}

/// @brief total reset of the object  
void IsoTrapezoid::Reset() {
	bottom = 0.;
	top = 0.;
	height = 0.;
}


float GetSide() {


};


/// @brief for debugging: all about the object
void IsoTrapezoid::Dump() {

	cout << endl;
	cout << "---IsoTrapezoid---" << endl;
	cout << endl;

	cout << "Bottom side = " << bottom << endl;
	cout << "top side = " << top << endl;
	cout << "height = " << height << endl;
	cout << "side = " << GetSide() << endl;
	cout << endl;
}



