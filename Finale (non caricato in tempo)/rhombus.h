/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <iostream>
#include "polygon.h"
#include<math.h>

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus: public Polygon
{
private:
	float diagH;
	float diagV;
	
	float Side();
	virtual float Area();
	virtual float Perimeter();
public:
	/// @name CONSTRUCTORS(default,set and copy)/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	
	~Rhombus();
	/// @}

	/// @name OPERATORS,INIT&RESET
	/// @{
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);

	void Init();
	void Init(const Rhombus& r);
	void Reset();
	/// @}

	/// @name SETTERS
	/// @{
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);
	/// @}

	/// @name GETTERS
	/// @{
	void GetDiagonals(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide() { return (float)sqrt(pow(diagH / 2, 2) + pow(diagV / 2, 2)); };
	
	
	float GetArea();
	float GetPerimeter();
	/// @}
	

	/// @name UTILITIES
	/// @{
	void Dump();
	void Draw();
	/// @}
};

#endif