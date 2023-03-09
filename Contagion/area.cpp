#include "area.h"

Area::Area()
{
	closeness = -1.0;
	adjacencyDegree = -1;
	population = -1;
	areaVaccineCount = -1;
}

Area::Area(float c, int ad, int p, int avc, std::vector<int> aaa, std::vector<Agent> a)
{
	closeness = c;
	adjacencyDegree = ad;
	population = p;
	areaVaccineCount = avc;
	areaAdjacentAreas = aaa;
	agents = a;
}

void Area::setCloseness(float c)
{
	closeness = c;
}

float Area::getCloseness()
{
	return closeness;
}

void Area::setAdjacencyDegree(int ad)
{
	adjacencyDegree = ad;
}

int Area::getAdjacencyDegree()
{
	return adjacencyDegree;
}

void Area::setPopulation(int p)
{
	population = p;
}

int Area::getPopulation()
{
	return population;
}

void Area::setAreaVaccineCount(int avc)
{
	areaVaccineCount = avc;
}

int Area::getAreaVaccineCount()
{
	return areaVaccineCount;
}

std::vector<int> Area::getAreaAdjacentAreas()
{
	return areaAdjacentAreas;
}

std::vector<Agent> Area::getAgents()
{
	return agents;
}