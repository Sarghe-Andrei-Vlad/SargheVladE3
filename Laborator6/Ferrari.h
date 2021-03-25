#pragma once
#include "Car.h"
class Ferrari :public Car
{
public:
	Ferrari();
	~Ferrari();
	void SetFuelCap(float);
	void SetFuelCons(float);
	void SetAvgSpeed(float);
	float GetFuelCap();
	float GetFuelCons();
	float GetAvgSpeed();
	char* GetName();
};