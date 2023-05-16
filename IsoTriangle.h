/*! \file IsoTriangle.h
	\brief Declaration of the general class IsoTriangle

	Details.
*/


#ifndef ISOTRIANGLE_H
#define ISOTRIANGLE_H

#include<iostream>

using namespace std;

/// @class IsoTriangle
/// @brief an abstract base class for IsoTriangles
class IsoTriangle {
protected:
	float top;
	float bottom;
	float height;
	float side;


public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	IsoTriangle();
	IsoTriangle(const IsoTriangle& p);
	virtual ~IsoTriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	IsoTriangle& operator=(const IsoTriangle& p);
	bool operator==(const IsoTriangle& p);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const IsoTriangle& r);
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
