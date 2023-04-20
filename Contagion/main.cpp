#include "input.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	
	cout << "Infection Time" << endl;

	Region infectedRegion;
	configureRegion(infectedRegion);
	
	infectedRegion.print();

	for (int i = 1; i < infectedRegion.size() + 1; i++)
	{
		infectedRegion.getArea(i).print();
	}

	return 0;
}