#pragma once
#include "area.h"
#include <vector>

class Region
{
private:
	int infectedArea;
	int infectiousPeriod;
	int contactRate;
	int regionVaccineCount;
	std::vector<Area> areas;
	std::vector<std::vector<int>> regionAdjacentAreas;
public:
	Region();
	Region(int infectedArea, int infectiousPeriod, int contactRate, int regionVaccineCount, std::vector<Area> areas, std::vector<std::vector<int>> regionAdjacentAreas);
	int getInfectedArea();
	int getInfectiousPeriod();
	int getContactRate();
	int getRegionVaccineCount();
	std::vector<Area> getAreas();
	std::vector<std::vector<int>> getRegionAdjacentAreas();
	//print function
};