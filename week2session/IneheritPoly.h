#pragma once
#include <iostream>
#include <vector>
#include <string>

class IneheritPoly
{


};

class UObject {
public:
	UObject();
	virtual void tick();
	void setHealth(int h) { health = h;}
	
	bool dead;
protected:
	int health;
};

class AActor : public UObject {
public:
	AActor();
	bool actor;
	virtual void tick() override;
};

class APawn : public AActor {
public:
	APawn();
	virtual void tick() override;

};