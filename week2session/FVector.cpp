#include "FVector.h"

FVector::FVector()
{
	X = 0;
	Y = 0;
	Z = 0;

}

FVector::FVector(float x, float y, float z)
{
	X = x;
	Y = y;
	Z = z;
	
}

FVector::FVector(float xyz)
{
	X = xyz;
	Y = xyz;
	Z = xyz;
}

FVector FVector::operator*(float scale) const
{
	FVector Fv2;
	Fv2.X = this->X * scale;
	Fv2.Y = this->Y * scale;
	Fv2.Z = this->Z * scale;

	return Fv2;
}

FVector FVector::operator*(FVector secondVec) const
{
	FVector tempVect;
	tempVect.X = this->X * secondVec.X;
	tempVect.Y = this->Y * secondVec.Y;
	tempVect.Z = this->Z * secondVec.Z;
	return tempVect;
}
