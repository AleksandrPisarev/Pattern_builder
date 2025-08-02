#pragma once
#include <iostream>
#include "House.h"
class Builder
{
public:
	void virtual setHouseArea(std::string area) = 0;
	void virtual setFloors(std::string floors) = 0;
	void virtual setPool(std::string pool) = 0;
	void virtual setGarden(std::string garden) = 0;
	void virtual show() = 0;
};

