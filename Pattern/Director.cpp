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
	builder->setPool("��");
	builder->setGarden("��");
	builder->show();
}

void Director::ManualHouse()
{
	builder->setHouseArea("100");
	builder->setFloors("1");
	builder->setPool("���");
	builder->setGarden("���");
	std::cout << "���������� ��� ���� : ";
	builder->show();
}

void Director::ManualVilla()
{
	builder->setHouseArea("500");
	builder->setFloors("3");
	builder->setPool("��");
	builder->setGarden("��");
	std::cout << "���������� ��� ����� : ";
	builder->show();
}