#include "area.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

Area::Area()
{
	closeness = -1.0;
	adjacencyDegree = -1;
	population = -1;
	areaVaccineCount = -1;
}

Area::Area(float c, int ad, int p, int avc, vector<int> aaa, vector<Agent> a)
{
	closeness = c;
	adjacencyDegree = ad;
	population = p;
	areaVaccineCount = avc;
	areaAdjacentAreas = aaa;
	agents = a;
}

float Area::getCloseness()
{
	return closeness;
}

int Area::getAdjacencyDegree()
{
	return adjacencyDegree;
}

int Area::getPopulation()
{
	return population;
}

int Area::getAreaVaccineCount()
{
	return areaVaccineCount;
}

vector<Agent> Area::getAgents()
{
	return agents;
}

vector<int> Area::getAreaAdjacentAreas()
{
	return areaAdjacentAreas;
}

void Area::setCloseness(float c)
{
	closeness = c;
}

void Area::setAdjacencyDegree(int ad)
{
	adjacencyDegree = ad;
}

void Area::setPopulation(int p)
{
	population = p;
}

void Area::setAreaVaccineCount(int avc)
{
	areaVaccineCount = avc;
}

void Area::setAgents()
{
	// TODO
}

void Area::setAdjacentAreas()
{
	// TODO
}


// Area print
void Area::print()
{
	cout << "**** AREA STATS ****" << endl;
	cout << "Closeness: " << closeness << endl;
	cout << "Adjacency Degree: " << adjacencyDegree << endl;
	cout << "Population: " << population << endl;
	cout << "Area Vaccine Count: " << areaVaccineCount << endl;
	cout << endl;
}