#include <iostream>
#include <string>
using namespace std;
#include "Builder.h"
#include "House.h"
#include "HouseManual.h"
#include "BuilderHouse.h"
#include "BuilderHouseManual.h"
#include "Director.h"

int main()
{
	setlocale(0, "ru");
	Director director;
	BuilderHouse build;
	BuilderHouseManual manual;
	director.setBuilder(&build);
	director.BuildHouse();
	director.BuildVilla();
	director.setBuilder(&manual);
	director.ManualHouse();
	director.ManualVilla();
}