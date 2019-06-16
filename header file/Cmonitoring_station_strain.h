#pragma once
#include "Cmonitoring_station.h"
#include "Cstrain_sensor.h"
class Cmonitoring_station_strain :
	public Cmonitoring_station
{
private:
	std::deque<Cmoitordata> monitor_results;

	Cstrain_sensor sensor;

public:
	Cmonitoring_station_strain(int list, int x, int y);

};
