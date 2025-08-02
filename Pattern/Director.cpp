#include "Director.h"

void Director::setBuilder(Builder* builder)
{
	this->builder = builder;
}

void Director::BuildHouse()
{
	builder->setHouseArea("100");
	builder->setFloors("1");
	builder->show();
}

void Director::BuildVilla()
{
	builder->setHouseArea("500");
	builder->setFloors("3");
	builder->setPool("да");
	builder->setGarden("да");
	builder->show();
}

void Director::ManualHouse()
{
	builder->setHouseArea("100");
	builder->setFloors("1");
	builder->setPool("нет");
	builder->setGarden("нет");
	std::cout << "Инструкция для дома : ";
	builder->show();
}

void Director::ManualVilla()
{
	builder->setHouseArea("500");
	builder->setFloors("3");
	builder->setPool("да");
	builder->setGarden("да");
	std::cout << "Инструкция для виллы : ";
	builder->show();
}