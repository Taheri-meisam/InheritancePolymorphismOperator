#pragma once
#include <vector>
#include <iostream>

class FVector
{
public:
	FVector();
	FVector(float x, float y, float z);
	FVector(float xyz);
	std::vector<float> vec1;
	FVector operator* (float scale) const;
	FVector operator* (FVector SecondVec) const;

	float RetX() {
		return X;
	}
	float RetY() {
		return Y;
	}
	float RetZ() {
		return Z;
	}

private:
	float X;
	float Y;
	float Z;
};

