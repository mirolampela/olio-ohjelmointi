#include "engine.h"

Engine::Engine() {}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int newHp)
{
    horsepower = newHp;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}
