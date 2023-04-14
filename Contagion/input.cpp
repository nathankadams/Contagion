#include "input.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

void inputAreas(string fileName, Region& region)
{
	std::ifstream populationFilePath;
	populationFilePath.open("input/" + fileName);

	string inputLine;

	if (!populationFilePath.is_open())
	{
		cerr << "Population file error";
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

	for (int i = 1; i < region.size() + 1; i++)
	{
		region.getArea(i).print();
	}

	populationFilePath.close();

	return;
}

void configureRegion(Region& region)
{
	std::ifstream configurationFilePath;
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
		cerr << "Configuration file error";
		return;
	}
	
	while (!configurationFilePath.eof())
	{
		getline(configurationFilePath, inputLine);

		// store input parameter values following ':'
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

	configurationFilePath.close();

	return;

}