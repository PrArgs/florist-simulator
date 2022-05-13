#pragma once
#include "Person.h"
#include "Gardner.h"
#include "FlowersBouquet.h"
using namespace std;
class Grower : public Person
{
private:
	Gardner* gardner;
public:
	std :: string getName();
	Grower(std::string, Gardner* gardner);
	FlowersBouquet prepareOrder(std::vector <std::string>);
	


};

