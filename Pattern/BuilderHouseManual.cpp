#include "BuilderHouseManual.h"

BuilderHouseManual::BuilderHouseManual()
{
	manual = new HouseManual;
}

BuilderHouseManual::~BuilderHouseManual()
{
	delete manual;
}

void BuilderHouseManual::setHouseArea(std::string area)
{
	manual->area = "������� : " + area + " | ";
}

void BuilderHouseManual::setFloors(std::string floors)
{
	manual->floors = "������ : " + floors + " | ";
}

void BuilderHouseManual::setPool(std::string pool)
{
	manual->pool = "������� : " + pool + " | ";
}

void BuilderHouseManual::setGarden(std::string garden)
{
	manual->garden = "��� : " + garden + " | ";
}

void BuilderHouseManual::show()
{
	std::cout << manual->area << manual->floors << manual->pool << manual->garden << std::endl;
}