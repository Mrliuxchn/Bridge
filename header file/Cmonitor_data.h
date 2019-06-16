#pragma once
#include<iostream>
#include <deque>
class Cmoitordata
{
public:
	std::string date;//日期
	std::string time;//时间
	double data;//数据

	Cmoitordata(){}

	Cmoitordata(std::string date, std::string time, double data)
	{
		this->data = data;
		this->time = time;
		this->date = date;
		serial = 0;
	}

	void set_serial(int serial);

	int show_serial();

private:
	int serial;//编号
};