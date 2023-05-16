#include "RightTrapezoid.h"

/// @brief default constructor 
RightTrapezoid::RightTrapezoid() {

	cout << "RightTrapezoid - constructor - default" << endl;

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
RightTrapezoid::RightTrapezoid(const RightTrapezoid& p) {

	cout << "RightTrapezoid - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
RightTrapezoid::~RightTrapezoid() {

	cout << "RightTrapezoid - destructor" << endl;
	Reset();

}

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
RightTrapezoid& RightTrapezoid::operator=(const RightTrapezoid& p) {

	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool RightTrapezoid::operator==(const RightTrapezoid& r) {
	return false;
}


/// @brief default initialization of the object
void RightTrapezoid::Init() {
	Reset();
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void RightTrapezoid::Init(const RightTrapezoid& p) {
	Reset();

}

/// @brief total reset of the object  
void RightTrapezoid::Reset() {

}





/// @brief for debugging: all about the object
void RightTrapezoid::Dump() {

	cout << endl;

}

