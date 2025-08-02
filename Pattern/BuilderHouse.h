#pragma once
#include <iostream>
#include "Builder.h"
#include "House.h"

class BuilderHouse : public Builder
{
	House* house;
public:
	BuilderHouse();
	~BuilderHouse();
	void setHouseArea(std::string area);
	void setFloors(std::string floors);
	void setPool(std::string pool);
	void setGarden(std::string garden);
	void show();
};

