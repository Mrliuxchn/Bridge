#pragma once
class Cdate
{
private:
	int day;
	int month;
	int year;
public:
	Cdate(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	Cdate()
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}

	void set_date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	//todo output_date;
};