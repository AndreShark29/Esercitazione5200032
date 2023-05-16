#include "IsoTriangle.h"

/// @brief default constructor 
IsoTriangle::IsoTriangle() {

	cout << "IsoTriangle - constructor - default" << endl;

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
IsoTriangle::IsoTriangle(const IsoTriangle& p) {

	cout << "IsoTriangle - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
IsoTriangle::~IsoTriangle() {

	cout << "IsoTriangle - destructor" << endl;
	Reset();

}

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
IsoTriangle& IsoTriangle::operator=(const IsoTriangle& p) {

	
}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool IsoTriangle::operator==(const IsoTriangle& r) {
	return false;
}


/// @brief default initialization of the object
void IsoTriangle::Init() {
	Reset();
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void IsoTriangle::Init(const IsoTriangle& p) {
	Reset();

}

/// @brief total reset of the object  
void IsoTriangle::Reset() {

}





/// @brief for debugging: all about the object
void IsoTriangle::Dump() {

	cout << endl;

}
