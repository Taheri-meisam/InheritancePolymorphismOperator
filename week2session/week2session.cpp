
#include <iostream>
#include "IneheritPoly.h"
#include "FVector.h"

void PolyInhertanceFunc() {
	UObject* u1 = new UObject;
	AActor* a1 = new AActor;
	/*APawn P1;
	APawn* p1 = &P1;*/
	APawn* p1 = new APawn;
	u1->setHealth(90);
	a1->setHealth(80);
	p1->setHealth(50);
	u1->tick();
	a1->tick();
	p1->tick();
	std::cout << " -----------------------" << std::endl;
	UObject* u2 = new UObject;
	UObject* a2 = new AActor;
	UObject* p2 = new APawn;
	std::cout << " -----------------------" << std::endl;
	u2->setHealth(90);
	a2->setHealth(80);
	p2->setHealth(50);
	u2->tick();
	a2->tick();
	p2->tick();

}

void Operators() {
	FVector ResultVec, ResultVec2;
	FVector V1(10.f, 20.f, 30.f);
	ResultVec = V1 * 2;
	std::cout << ResultVec.RetX() << ", " << ResultVec.RetY() << ", " << ResultVec.RetZ() << std::endl;

	FVector V2(5.f, 5.f, 5.f);
	ResultVec2 = V1 * V2;
	std::cout << ResultVec2.RetX() << ", " << ResultVec2.RetY() << ", " << ResultVec2.RetZ();
}

int main()
{
	//PolyInhertanceFunc();
	Operators();
}

