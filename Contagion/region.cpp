#include "region.h"
#include <iostream>
#include <vector>

Region::Region()
{
	infectedArea = -1;
	infectiousPeriod = -1;
	contactRate = -1;
	regionVaccineCount = -1;
}

Region::Region(int ia, int ip, int cr, int rvc)
{
	infectedArea = ia;
	infectiousPeriod = ip;
	contactRate = cr;
	regionVaccineCount = rvc;
}

Region::Region(int ia, int ip, int cr, int rvc, std::vector<Area> a, std::vector<std::vector<int>> raa)
{
	infectedArea = ia;
	infectiousPeriod = ip;
	contactRate = cr;
	regionVaccineCount = rvc;
	areas = a;
	regionAdjacentAreas = raa;
}

// Region getters
int Region::getInfectedArea()
{
	return infectedArea;
}

int Region::getInfectiousPeriod()
{
	return infectiousPeriod;
}

int Region::getContactRate()
{
	return contactRate;
}

int Region::getRegionVaccineCount()
{
	return regionVaccineCount;
}

std::vector<Area> Region::getAreas()
{
	return areas;
}

std::vector<std::vector<int>> Region::getRegionAdjacentAreas()
{
	return regionAdjacentAreas;
}

// Region setters
void Region::setInfectedArea(int ia)
{
	infectedArea = ia;
}

void Region::setInfectiousPeriod(int ip)
{
	infectiousPeriod = ip;
}

void Region::setContactRate(int cr)
{
	contactRate = cr;
}

void Region::setRegionVaccineCount(int rvc)
{
	regionVaccineCount = rvc;
}

void Region::setAreas()
{

}

void Region::setRegionAdjacentAreas()
{

}

// Region print
void Region::print()
{
	std::cout << "**** REGION STATS ****" << std::endl;
	std::cout << "Infected Area: " << infectedArea << std::endl;
	std::cout << "Infectious Period: " << infectiousPeriod << std::endl;
	std::cout << "Contact Rate: " << contactRate << std::endl;
	std::cout << "Region Vaccine Count: " << regionVaccineCount << std::endl;
}