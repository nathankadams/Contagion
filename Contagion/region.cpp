#include "region.h"

Region::Region()
{
	infectedArea = -1;
	infectiousPeriod = -1;
	contactRate = -1;
	regionVaccineCount = -1;
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