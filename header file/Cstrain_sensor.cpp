#include "Cstrain_sensor.h"

Cstrain_sensor::Cstrain_sensor(int list) :Csensor(list)//应变传感器构造函数
{
	std::ifstream inf;
	inf.open("strain_sensor_central_wavelength.txt");
	for (int i = 1; i < list; i++)
	{
		inf >> central_wavelength;
	}
	inf >> central_wavelength;
	inf.close();
}

double Cstrain_sensor::show_wavelength()
{
	return central_wavelength;
}

void Cstrain_sensor::monitor()//监测
{
	std::ifstream inf;
	inf.open("strain_sensor_data.txt");
	while (!inf.eof())
	{
		Cmoitordata data_;
		inf >> data_.date;
		inf >> data_.time;
		for (int i = 1; i < this->list; i++)
		{
			inf >> data_.data;
		}
		inf >> data_.data;
		this->data.push_back(data_);
		std::string text_s;
		if (this->list != 10)//修改为数量
		{
			getline(inf, text_s);
		}
	}
	inf.close();
}
