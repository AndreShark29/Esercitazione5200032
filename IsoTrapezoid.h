/*! \file IsoTrapezoid.h
	\brief Declaration of the general class IsoTrapezoid

	Details.
*/


#ifndef ISOTRAP_H
#define ISOTRAP_H

#include<iostream>
#include "polygon.h"

/// @class IsoTrapezoid
/// @brief an abstract base class for IsoTrapezoids
class IsoTrapezoid : public Polygon {
protected:
	float top;
	float bottom;
	float height;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	IsoTrapezoid();
	IsoTrapezoid(float top, float bottom,float height);
	IsoTrapezoid(const IsoTrapezoid& it);
	virtual ~IsoTrapezoid();
	/// @}

	/// @name OPERATORS
	/// @{
	IsoTrapezoid& operator=(const IsoTrapezoid& it);
	bool operator==(const IsoTrapezoid& it);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const IsoTrapezoid& it);
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
