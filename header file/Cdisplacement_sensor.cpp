#include "Cdisplacement_sensor.h"

void Cdisplacement_sensor::monitor()
{
	std::ifstream inf;
	inf.open("displacement_sensor_data.txt");
	while (inf.eof)
	{
		for (int i = 1; i <= 2; i++)//Todo:个数
		{
			if (this->list = i)
			{
				Cmoitordata data_;
				inf >> data_.date;
				inf >> data_.time;
				int num;
				inf >> num;
				inf >> data_.data;
				std::string dustbin;
				inf >> dustbin;
				this->data.push_back(data_);
			}
			else
			{
				std::string dustbin;
				getline(inf, dustbin);
			}
		}
	}
}

Cdisplacement_sensor::Cdisplacement_sensor(int list, double expansionvalue) :Csensor(list)
{
	this->expansionvalue = expansionvalue;
}
