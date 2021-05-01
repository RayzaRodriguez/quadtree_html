#include "node.h"


node::node(point *topLeftPoint, point *botRightPoint)
{
	this->topLeftPoint = topLeftPoint;
	this->botRightPoint = botRightPoint;

	this->regions[0] = nullptr;
	this->regions[1] = nullptr;
	this->regions[2] = nullptr;
	this->regions[3] = nullptr;
}


node::~node()
{
}
