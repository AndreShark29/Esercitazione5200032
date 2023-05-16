/*! \file RightTriangle.h
	\brief Declaration of the general class RightTriangle

	Details.
*/


#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include<iostream>

using namespace std;

/// @class RightTriangle
/// @brief an abstract base class for RightTriangles
class RightTriangle {
protected:
	float top;
	float bottom;
	float height;
	float side;

	virtual float Area() = 0;
	virtual float Perimeter() = 0;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	RightTriangle();
	RightTriangle(const RightTriangle& p);
	virtual ~RightTriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	RightTriangle& operator=(const RightTriangle& p);
	bool operator==(const RightTriangle& p);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const RightTriangle& r);
	void Reset();
	/// @}


	/// @name GETTERS
	/// @{
	float GetSide();
	/// @}


	/// @name DUMP
	/// @{
	void Dump();
	/// @}

};

#endif

