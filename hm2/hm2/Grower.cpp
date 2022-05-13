#include "Grower.h"

std::string Grower::getName()
{
	return "Grower " + Person::getName();
}

Grower::Grower(std::string name, Gardner* gardner): Person(name),gardner(gardner)
{	
}

FlowersBouquet Grower::prepareOrder(std::vector<std::string> vec)
{
	std::cout << this->getName() << " forwards the request to  " << this->gardner->getName() << std::endl;
	FlowersBouquet flb = FlowersBouquet(vec);
	this->gardner->prepareOrder(vec);
	std::cout << this->gardner->getName() << " returns flowers to " << this->getName() << std::endl;
	return flb;
	
}

