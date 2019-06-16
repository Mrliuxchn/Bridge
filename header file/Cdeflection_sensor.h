#pragma once
#include "Csensor.h"
#include "Cmonitor_data.h"
class Cdeflection_sensor :
	public Csensor
{
private:


public:
	std::deque <Cmoitordata> data;

	Cdeflection_sensor(int list);

	void monitor();
};
