#include "region.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

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

Region::Region(int ia, int ip, int cr, int rvc, vector<Area> a, vector<vector<int>> raa)
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

Area Region::getArea(int ai)
{
	// off-by-one error accounting (ex: Area 1 at areas[0])
	return areas[ai - 1];
}

vector<Area> Region::getAreas()
{
	return areas;
}

vector<std::vector<int>> Region::getRegionAdjacentAreas()
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

void Region::addArea(int p)
{
	Area newArea;
	newArea.setPopulation(p);
	areas.push_back(newArea);
}

void Region::setRegionAdjacentAreas(vector<int> rr)
{
	regionAdjacentAreas.push_back(rr);
}

int Region::size()
{
	return areas.size();
}

// Region print
void Region::print()
{
	cout << "**** REGION STATS ****" << endl;
	cout << "Infected Area: " << infectedArea << endl;
	cout << "Infectious Period: " << infectiousPeriod << endl;
	cout << "Contact Rate: " << contactRate << endl;
	cout << "Region Vaccine Count: " << regionVaccineCount << endl;
	cout << "\n**** Adjacency Matrix ****" << endl;
	for (int i = 0; i < regionAdjacentAreas.size(); i++)
	{
		for (int j = 0; j < regionAdjacentAreas[i].size(); j++)
		{
			cout << regionAdjacentAreas[i][j] << " ";
		}
		cout << endl;
	}
}