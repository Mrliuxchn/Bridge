#pragma once
class Cmonitoring_station
{
private:
	int coordinate_x;
	int coordinate_y;
public:
	int list;

	Cmonitoring_station(int list, int x, int y)
	{
		this->list = list;
		this->coordinate_x = x;
		this->coordinate_y = y;
	}
};
