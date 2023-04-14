#pragma once

// STATES: Susceptible = 1, Infectious = 2, Recovered = 3, Vaccinated = 4
class Agent
{
private:
	int currentState;

public:
	Agent();
	Agent(int currentState);
	void setInfectionState(int currentState);
	int getInfectionState();
	//print function
};