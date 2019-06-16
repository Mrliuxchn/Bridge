#pragma once
#include "Cmonitoring_station.h"
#include "Cdeflection_sensor.h"
class Cmonitoring_station_deflection :
	public Cmonitoring_station
{
private:
	std::deque <Cmoitordata> monitor_results;//监测结果

	Cdeflection_sensor sensor = Cdeflection_sensor(this->list); //传感器
public:

	Cmonitoring_station_deflection(int list, int x, int y);

};
