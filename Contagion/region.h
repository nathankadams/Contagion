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
	Region(int infectedArea, int infectiousPeriod, int contactRate, int regionVaccineCount);
	Region(int infectedArea, int infectiousPeriod, int contactRate, int regionVaccineCount, std::vector<Area> areas, std::vector<std::vector<int>> regionAdjacentAreas);
	
	// getters
	int getInfectedArea();
	int getInfectiousPeriod();
	int getContactRate();
	int getRegionVaccineCount();
	std::vector<std::vector<int>> getRegionAdjacentAreas();
	std::vector<Area> getAreas();
	
	// setters
	void setInfectedArea(int infectedArea);
	void setInfectiousPeriod(int infectiousPeriod);
	void setContactRate(int contactRate);
	void setRegionVaccineCount(int regionVaccineCount);
	void setAreas();
	void setRegionAdjacentAreas();
	
	// print function
	void print();
};