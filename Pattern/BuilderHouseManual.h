#pragma once
#include <iostream>
#include "Builder.h"
#include "HouseManual.h"

class BuilderHouseManual : public Builder
{
	HouseManual* manual;
public:
	BuilderHouseManual();
	~BuilderHouseManual();
	void setHouseArea(std::string area);
	void setFloors(std::string floors);
	void setPool(std::string pool);
	void setGarden(std::string garden);
	void show();
};

