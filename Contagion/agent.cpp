#include "agent.h"

// STATES: Susceptible = 1, Infectious = 2, Recovered = 3, Vaccinated = 4
Agent::Agent()
{
	currentState = -1;
}

Agent::Agent(int cs)
{
	currentState = cs;
}

void Agent::setInfectionState(int cs)
{
	currentState = cs;
}

int Agent::getInfectionState()
{
	return currentState;
}