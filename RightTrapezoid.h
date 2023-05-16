/*! \file RightTrapezoid.h
	\brief Declaration of the general class RightTrapezoid

	Details.
*/


#ifndef RIGHTTRAP_H
#define RIGHTTRAP_H

#include<iostream>

using namespace std;

/// @class RightTrapezoid
/// @brief an abstract base class for RightTrapezoids
class RightTrapezoid {
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
	RightTrapezoid();
	RightTrapezoid(const RightTrapezoid& p);
	virtual ~RightTrapezoid();
	/// @}

	/// @name OPERATORS
	/// @{
	RightTrapezoid& operator=(const RightTrapezoid& p);
	bool operator==(const RightTrapezoid& p);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const RightTrapezoid& r);
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

