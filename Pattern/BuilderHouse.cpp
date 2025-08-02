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
	std::cout << "������� ���� : " << house->HouseArea << std::endl;
	std::cout << "������ : " << house->Floors << std::endl;
	if (house->Pool == "��") std::cout << "������� : ��" << std::endl;
	else std::cout << "������� : ���" << std::endl;
	if (house->Garden == "��") std::cout << "��� : ��" << std::endl;
	else std::cout << "���� : ���" << std::endl;
	std::cout << "-----------------------" << std::endl;
}