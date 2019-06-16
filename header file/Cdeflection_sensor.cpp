#include "Cdeflection_sensor.h"

Cdeflection_sensor::Cdeflection_sensor(int list) :Csensor(list) {}

void Cdeflection_sensor::monitor()
{
	std::ifstream inf;
	inf.open("deflection_sensor_data.txt");
	int line = 1;
	while (!inf.eof())
	{
		if ((line - list) % 14)//改为传感器个数
		{
			Cmoitordata adata;
			inf >> adata.date;
			inf >> adata.time;
			int n;
			inf >> n;
			adata.set_serial(n);
			inf >> adata.data;
			this->data.push_back(adata);
			line++;
		}
		else
		{
			std::string text;
			getline(inf, text);
			line++;
		}
	}
	inf.close();
}
