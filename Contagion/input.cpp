#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void inputRegion()
{
	std::ifstream regionFile;
	regionFile.open("input/config1.txt");

	string inputLine;
	if (regionFile.is_open())
	{
		while (!regionFile.eof())
		{
			getline(regionFile, inputLine);
			if (inputLine != "")
			{
				cout << inputLine << endl;
			}
		}
		regionFile.close();
	}
	else
	{
		cout << "File error" << endl;
	}
}