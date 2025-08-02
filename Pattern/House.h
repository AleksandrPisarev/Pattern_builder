#pragma once
#include <iostream>

class House
{
	friend class BuilderHouse;
	std::string HouseArea;
	std::string Floors;
	std::string Pool = "нет";
	std::string Garden = "нет";
};

