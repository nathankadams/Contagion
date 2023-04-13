#include "input.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

void inputArea()
{

}

void configureRegion(Region& r)
{
	std::ifstream regionFile;
	regionFile.open("input/config1.txt");

	string populationTxt;
	string regionTxt;
	int infectedArea = -1;
	int infectiousPeriod = -1;
	int contactRate = -1;
	int vaccineCount = -1;

	string inputLine;

	if (!regionFile.is_open())
	{
		cerr << "File error";
	}
	
	while (!regionFile.eof())
	{
		getline(regionFile, inputLine);

		// store input parameter values following ':'
		string inputParameter = inputLine.substr(0, inputLine.find(':'));
		if (inputParameter == "Population")
		{
			populationTxt = inputLine.substr(inputLine.find(':') + 1);
			continue;
		}
		if (inputParameter == "Region")
		{
			regionTxt = inputLine.substr(inputLine.find(':') + 1);
			continue;
		}
		if (inputParameter == "Infected Area")
		{
			infectedArea = stoi(inputLine.substr(inputLine.find(':') + 1));
			r.setInfectedArea(infectedArea);
			continue;
		}
		if (inputParameter == "Infectious Period")
		{
			infectiousPeriod = stoi(inputLine.substr(inputLine.find(':') + 1));
			r.setInfectiousPeriod(infectiousPeriod);
			continue;
		}
		if (inputParameter == "Contact Rate")
		{
			contactRate = stoi(inputLine.substr(inputLine.find(':') + 1));
			r.setContactRate(contactRate);
			continue;
		}
		if (inputParameter == "Number of Vaccines")
		{
			vaccineCount = stoi(inputLine.substr(inputLine.find(':') + 1));
			r.setRegionVaccineCount(vaccineCount);
			continue;
		}
	}

	regionFile.close();

	return;

}