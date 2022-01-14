#include "IneheritPoly.h"

UObject::UObject()
{
	health = 100;
}
APawn::APawn()
{
}

AActor::AActor()
{
}



void UObject::tick()
{
	health = 100;
	std::cout << "This is UObject function and health is :" << health <<std::endl;
}


void AActor::tick()
{
	health--;
	std::cout << "This is AActor function and health is :" << health << std::endl;
}


void APawn::tick()
{
	health += 50;
	std::cout << "This is APawn function and health is :" << health<< std::endl;
}
