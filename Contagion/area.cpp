#include "area.h"
#include <iostream>

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

std::vector<Agent> Area::getAgents()
{
	return agents;
}

std::vector<int> Area::getAreaAdjacentAreas()
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
	std::cout << "**** AREA STATS ****" << std::endl;
	std::cout << "Closeness: " << closeness << std::endl;
	std::cout << "Adjacency Degree: " << adjacencyDegree << std::endl;
	std::cout << "Population: " << population << std::endl;
	std::cout << "Area Vaccine Count: " << areaVaccineCount << std::endl;
	std::cout << std::endl;
}