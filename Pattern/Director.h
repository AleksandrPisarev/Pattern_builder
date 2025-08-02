#pragma once
#include <iostream>
#include "Builder.h"

class Director
{
	Builder* builder;
public:
	Director() {};
	void setBuilder(Builder* builder);
	void BuildHouse();
	void BuildVilla();
	void ManualHouse();
	void ManualVilla();
};

