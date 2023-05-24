/// \file Rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///
#include "rhombus.h"

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param w DiagH of the Rhombus
/// @param h DiagV of the Rhombus
Rhombus::Rhombus(float dH, float dV) {

	Init();

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0.)
		cout << "WARNING: Rhombus - constructor: DiagH should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0.)
		cout << "WARNING: Rhombus - constructor: DiagV should be > 0" << endl;
	else
		diagV = dV;



}

/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus& r) {

	cout << "Rhombus - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same DiagH and the same DiagV  
bool Rhombus::operator==(const Rhombus& r) {

	if (r.diagH == diagH && r.diagV == diagV)
		return true;

	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {
	Reset();
	diagH = 0.;
	diagV = 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus& r) {
	Reset();
	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief total reset of the object  
void Rhombus::Reset() {
	diagH = 0.;
	diagV = 0.;
}


/// @brief set DiagH of the object
/// @param dH DiagH 
void Rhombus::SetDiagH(float dH ){

	if (dH < 0.) {
		cout << "WARNING: Rhombus - SetDiagH: DiagH should be > 0" << endl;
		return;
	}

	diagH = dH;

}

/// @brief sets DiagV of the object
/// @param dV Vertical diagonal 
void Rhombus::SetDiagV(float dV){

	if (dV < 0.) {
		cout << "WARNING: Rhombus - SetDiagV: DiagV should be > 0" << endl;
		return;
	}

	diagV = dV;

}

/// @brief set DiagH and DiagV of the object
/// @param dH Horizontal diagonal
/// @param dv Vertical diagonal
void Rhombus::SetDim(float dH, float dV ){
	SetDiagH(dH);
	SetDiagV(dV);
}


/// @brief get DiagH of the object
/// @return DiagH 
float Rhombus::GetDiagH() {

	return diagH;

}

/// @brief get DiagV of the object
/// @return DiagV
float Rhombus::GetDiagV() {

	return diagV;
}

/// @brief get DiagH and DiagV of the object
/// @param dH Horizontal Diagonal 
/// @param dV Vertical Diagonal
void Rhombus::GetDiagonals(float& dH, float& dV) {

	dH = diagH;
	dV = diagV;

	return;
}

/// @brief get the area of the object
/// @return area of the Rhombus
float Rhombus::GetArea() {

	return diagH * diagV;

}

/// @brief get the perimeter of the object
/// @return perimeter of the Rhombus
float Rhombus::GetPerimeter() {

	return 2 * (diagH + diagV);

}
/// @brief Sets the value for the area of the rhombus polygon
/// @return Area of the Rhombus
float Rhombus::Area() {
	area = diagH * diagV;
		return area;
};
/// @brief Sets the value for the perimeter of the rhombus polygon
/// @return perimeter of the Rhombus
float Rhombus::Perimeter() {
	perimeter = 4*(float)(sqrt(pow(diagH/2,2) + pow(diagV/2,2)));
	return perimeter;
};

/// @brief write an error message 
/// @param string message to be printed


void Rhombus::Draw() {
	cout << "Area--> " << Area() << endl;
	cout << "Perimeter--> " << Perimeter() << endl;
}

/// @brief for debugging: all about the object
void Rhombus::Dump() {
	cout << endl;
	cout << "---Rhombus---" << endl;
	cout << endl;

	cout << "DiagH = " << diagH << endl;
	cout << "DiagV = " << diagV << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}

