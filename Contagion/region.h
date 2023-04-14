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
	Area getArea(int areaID);
	std::vector<Area> getAreas();
	std::vector<std::vector<int>> getRegionAdjacentAreas();
	
	// setters
	void setInfectedArea(int infectedArea);
	void setInfectiousPeriod(int infectiousPeriod);
	void setContactRate(int contactRate);
	void setRegionVaccineCount(int regionVaccineCount);
	void addArea(int population);
	void setRegionAdjacentAreas();
	
	// number of areas in the region
	int size();

	// print function
	void print();
};