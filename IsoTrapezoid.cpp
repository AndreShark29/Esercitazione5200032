#include "IsoTrapezoid.h"

/// @brief default constructor 
IsoTrapezoid::IsoTrapezoid() {

	cout << "IsoTrapezoid - constructor - default" << endl;
	
}

IsoTrapezoid::IsoTrapezoid(float top, float bottom, float height) {
	
	cout << "IsoTrapezoid - constructor" << endl;

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

	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool IsoTrapezoid::operator==(const IsoTrapezoid& r) {
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





/// @brief for debugging: all about the object
void IsoTrapezoid::Dump() {

	cout << endl;

}

