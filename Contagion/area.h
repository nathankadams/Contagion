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
	
	// getters
	float getCloseness();
	int getAdjacencyDegree();
	int getPopulation();
	int getAreaVaccineCount();
	std::vector<Agent> getAgents();
	std::vector<int> getAreaAdjacentAreas();
	
	// setters
	void setCloseness(float closeness);
	void setAdjacencyDegree(int adjacencyDegree);
	void setPopulation(int population);
	void setAreaVaccineCount(int areaVaccineCount);
	void setAgents();
	void setAdjacentAreas();
	 
	//print function
	void print();
};