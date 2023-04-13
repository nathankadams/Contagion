#include "input.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	cout << "Infection Time" << endl;

	Region infectedRegion;
	configureRegion(infectedRegion);
	infectedRegion.print();

	return 0;
}