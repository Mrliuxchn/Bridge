#pragma once
#include "Csensor.h"
#include "Cmonitor_data.h"
class Cdisplacement_sensor :
	public Csensor
{
public:
	void monitor();

	Cdisplacement_sensor(int list, double expansionvalue);

private:
	int	number;//位移传感器编号

	std::deque<Cmoitordata> data;//保存监测数据

	double expansionvalue//伸缩缝初始值
};
