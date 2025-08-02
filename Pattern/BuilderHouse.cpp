#include "BuilderHouse.h"

BuilderHouse::BuilderHouse()
{
	house = new House;
}

BuilderHouse::~BuilderHouse()
{
	delete house;
}

void BuilderHouse::setHouseArea( std::string area)
{
	house->HouseArea = area;
}

void BuilderHouse::setFloors( std::string floors)
{
	house->Floors = floors;
}

void BuilderHouse::setPool(std::string pool)
{
	house->Pool = pool;
}

void BuilderHouse::setGarden(std::string garden)
{
	house->Garden = garden;
}

void BuilderHouse::show()
{
	std::cout << "-----------------------" << std::endl;
	std::cout << "Площадь дома : " << house->HouseArea << std::endl;
	std::cout << "Этажей : " << house->Floors << std::endl;
	if (house->Pool == "да") std::cout << "Бассейн : да" << std::endl;
	else std::cout << "Бассейн : нет" << std::endl;
	if (house->Garden == "да") std::cout << "Сад : да" << std::endl;
	else std::cout << "Сада : нет" << std::endl;
	std::cout << "-----------------------" << std::endl;
}