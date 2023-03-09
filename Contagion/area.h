#pragma once
#include "agent.h"
#include <vector>

class Area
{
private:
	float closeness;
	int adjacencyDegree;
	int population;
	int areaVaccineCount;
	std::vector<int> areaAdjacentAreas;
	std::vector<Agent> agents;
public:
	Area();
	Area(float closeness, int adjacencyDegree, int population, int areaVaccineCount, std::vector<int> areaAdjacentAreas, std::vector<Agent> agents);
	void setCloseness(float closeness);
	float getCloseness();
	void setAdjacencyDegree(int adjacencyDegree);
	int getAdjacencyDegree();
	void setPopulation(int population);
	int getPopulation();
	void setAreaVaccineCount(int areaVaccineCount);
	int getAreaVaccineCount();
	std::vector<int> getAreaAdjacentAreas();
	std::vector<Agent> getAgents();
	//print function
};