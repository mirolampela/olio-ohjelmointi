#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
public:
    Engine();
    int getHorsepower();
    void setHorsepower(int);
    double getDisplacement();
    void setDisplacement(double);
private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
