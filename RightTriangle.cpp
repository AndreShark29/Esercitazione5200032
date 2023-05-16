#include "RightTriangle.h"

/// @brief default constructor 
RightTriangle::RightTriangle() {

	cout << "RightTriangle - constructor - default" << endl;

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
RightTriangle::RightTriangle(const RightTriangle& p) {

	cout << "RightTriangle - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
RightTriangle::~RightTriangle() {

	cout << "RightTriangle - destructor" << endl;
	Reset();

}

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
RightTriangle& RightTriangle::operator=(const RightTriangle& p) {

	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool RightTriangle::operator==(const RightTriangle& r) {
	return false;
}


/// @brief default initialization of the object
void RightTriangle::Init() {
	Reset();
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void RightTriangle::Init(const RightTriangle& p) {
	Reset();

}

/// @brief total reset of the object  
void RightTriangle::Reset() {

}





/// @brief for debugging: all about the object
void RightTriangle::Dump() {

	cout << endl;

}

