#pragma once
#include "Csensor.h"
#include "Cmonitor_data.h"
class Cstrain_sensor :
	public Csensor
{
private:
	double central_wavelength;//出场中心波长

public:
	Cstrain_sensor(int list);//应变传感器构造函数

	std::deque <Cmoitordata> data;//监测数据

	double show_wavelength();

	void monitor();//监测
};
