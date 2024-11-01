//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83
#include "Transformers.h"
#ifndef PREDACON_H
#define PREDACON_H
#include <iostream>
#include <string>
class Predacon: public Basetransformer{
    private:
    std::string beastForm;
    std::string peaceful;
    
    
    public:
    std::string getBeastForm() const;
    void setDinosaurForm(std::string newBeastForm);

    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    
 };

 #endif