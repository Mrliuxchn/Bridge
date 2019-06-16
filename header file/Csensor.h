#pragma once
#include<iostream>
#include<string>
#include<fstream>
constexpr auto Strain_sensor = 92;//应变传感器
//指主梁在外力和非均匀温度场等因素作用下物体局部的相对变形

constexpr auto Deflection_sensor = 63;//挠度传感器（偏转传感器）
//指主梁竖向方向y轴的,就是构件的竖向变形

constexpr auto Displacement_sensor = 99;//位移传感器
//指梁端伸缩缝的变化情况。

//规格
#define stantard_small -1;
#define stantard_middle 0;
#define stantard_large 1;
//每种类型的传感器都有基本属性，包含传感器名称、规格、型号、生产厂家、生产日期等

class Csensor
{
public:
	int list;//传感器次序
	Csensor(int list);

	void set_name(std::string name);

	void set_stantard(int stantard);

	void set_type(int type);

	void set_manufacturer(std::string manufacturer);

	void set_date(int day, int month, int year);
private:
	std::string sensor_name;//传感器名称
	int sensor_stantard;//传感器规格
	int sensor_type = 0;//传感器型号
	std::string sensor_manufacturer;//生产厂家
	int sensor_date;//生产日期
};
