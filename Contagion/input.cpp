#include "input.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ifstream;
using std::stringstream;
using std::string;
using std::vector;

void inputAreas(string fileName, Region& region)
{
	ifstream populationFilePath;
	populationFilePath.open("input/" + fileName);

	string inputLine;

	if (!populationFilePath.is_open())
	{
		cerr << "Population file error" << endl;
		return;
	}

	while (!populationFilePath.eof())
	{
		getline(populationFilePath, inputLine);
		
		if (inputLine != "")
		{
			int population = stoi(inputLine.substr(inputLine.find(':') + 1));
			region.addArea(population);
		}
	}

	populationFilePath.close();

	return;
}

void inputAreaAdjacencies(string fileName, Region& region)
{
	ifstream regionFilePath;
	regionFilePath.open("input/" + fileName);

	vector<int> regionRow;
	string inputLine;
	string adjacencyValue;

	if (!regionFilePath.is_open())
	{
		cerr << "Region file error" << endl;
		return;
	}

	getline(regionFilePath, inputLine);
	while (!regionFilePath.eof())
	{
		getline(regionFilePath, inputLine);
		regionRow.clear();
		stringstream ss(inputLine);
		getline(ss, adjacencyValue, ',');
		while (getline(ss, adjacencyValue, ','))
		{
			if (adjacencyValue == "")
			{ 
				regionRow.push_back(0);
			}
			else
			{
				regionRow.push_back(stoi(adjacencyValue));
			}
		}
		
		for (int i = 0; i < regionRow.size(); i++)
		{
			cout << regionRow[i] << " ";
		}
		cout << endl;

		region.setRegionAdjacentAreas(regionRow);
	}
}

void configureRegion(Region& region)
{
	ifstream configurationFilePath;
	configurationFilePath.open("input/config1.txt");

	string populationFile;
	string regionFile;
	int infectedArea = -1;
	int infectiousPeriod = -1;
	int contactRate = -1;
	int vaccineCount = -1;

	string inputLine;

	if (!configurationFilePath.is_open())
	{
		cerr << "Configuration file error" << endl;
		return;
	}
	
	while (!configurationFilePath.eof())
	{
		getline(configurationFilePath, inputLine);

		// store input parameter values following ':' line-by-line
		string inputParameter = inputLine.substr(0, inputLine.find(':'));
		if (inputParameter == "Population")
		{
			populationFile = inputLine.substr(inputLine.find(':') + 1);
			continue;
		}
		if (inputParameter == "Region")
		{
			regionFile = inputLine.substr(inputLine.find(':') + 1);
			continue;
		}
		if (inputParameter == "Infected Area")
		{
			infectedArea = stoi(inputLine.substr(inputLine.find(':') + 1));
			region.setInfectedArea(infectedArea);
			continue;
		}
		if (inputParameter == "Infectious Period")
		{
			infectiousPeriod = stoi(inputLine.substr(inputLine.find(':') + 1));
			region.setInfectiousPeriod(infectiousPeriod);
			continue;
		}
		if (inputParameter == "Contact Rate")
		{
			contactRate = stoi(inputLine.substr(inputLine.find(':') + 1));
			region.setContactRate(contactRate);
			continue;
		}
		if (inputParameter == "Number of Vaccines")
		{
			vaccineCount = stoi(inputLine.substr(inputLine.find(':') + 1));
			region.setRegionVaccineCount(vaccineCount);
			continue;
		}
	}

	inputAreas(populationFile, region);
	inputAreaAdjacencies(regionFile, region);

	configurationFilePath.close();

	return;

}