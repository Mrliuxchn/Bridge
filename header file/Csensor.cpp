#include "Csensor.h"

Csensor::Csensor(int list)
{
	sensor_name = "unnamed_sensor";
	sensor_stantard = -2;
	sensor_type = 0;
	sensor_manufacturer = "unkown_manufacturer";
	this->list = list;
}

void Csensor::set_name(std::string name)
{
	sensor_name = name;
}

void Csensor::set_stantard(int stantard)
{
	this->sensor_stantard = stantard;
}

void Csensor::set_type(int type)
{
	this->sensor_type = type;
}

void Csensor::set_manufacturer(std::string manufacturer)
{
	this->sensor_manufacturer = manufacturer;
}

void Csensor::set_date(int day, int month, int year)
{
	this->sensor_date = day + month * 100 + year * 10000;
}
