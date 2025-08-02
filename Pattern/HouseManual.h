#pragma once
#include <iostream>

class HouseManual
{
	friend class BuilderHouseManual;
	std::string area = "";
	std::string floors = "";
	std::string pool = "";
	std::string garden = "";
};

