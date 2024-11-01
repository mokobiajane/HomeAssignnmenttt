//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83
#include "Transformers.h" // внес в область видимости include guard'а
#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
class Autobot : public Basetransformer{
    private: // изменить названия переменных согласно google code style
    std::string moralAlignment;
    std::string groundVehicle;
    
    public:
    //+1 when an object is created
    static int  autobotCounter;
    //constructor
    Autobot(){ // определить конструктор в autobot.cpp; добавить конструктор, заполняющий поля класса
        autobotCounter++;
    }
    // добавить методы класса, как написано в условии задания
    std::string getMoralAlignemt() const;
    void setMoralAlignmet(std::string newMoralAlignment);

    std::string getGroundVehicle() const;
    void setGroundVehicle(std::string newGroundVehicle);
    
 };
#endif
