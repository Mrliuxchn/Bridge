#include "Cmonitoring_station_strain.h"

Cmonitoring_station_strain::Cmonitoring_station_strain(int list, int x, int y) :Cmonitoring_station(list, x, y)
{
	Cmoitordata adata;
	std::deque <Cmoitordata> data_ = sensor.data;
	while (!data_.empty())
	{
		adata.date = data_.front().date;
		adata.time = data_.front().time;
		adata.data = 1000 * (data_.front().data - this->sensor.show_wavelength()) + 4;
		data_.pop_front();
		this->monitor_results.push_back(adata);
	}
}
