#pragma once
#include "Cmonitoring_station.h"
#include "Cdisplacement_sensor.h"
class Cmonitoring_station_displacment :
	public Cmonitoring_station
{
private:
	std::deque<Cmoitordata> monitor_results;

public:
	Cmonitoring_station_displacment(int list, int x, int y);
};
