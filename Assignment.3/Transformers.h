//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83

#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H
#include <iostream>
#include <string>
//using std::string;
#include <fstream>

class Weapon{ // вынесит класс в отдельный файл
    private:
    std::string name;
    int size;

    public:
    std::string getName() const{
    return name;
}
void setName( const std::string& newName){
    name = newName;
}
int getSize() const{
    return size;
}
void setSize( int newSize){
    size = newSize;
}
};

class Basetransformer{ // комментарий, относящийся ко всему классу: добавьте отступы согласно код стайлу
private: 
std::string name; // назвать поля согласно google code style
std::string brand;
std::string colour;
std::string shape;
int height;
// нужно объявить два поля-объекта. Одна композиция и одна ассоциация, как написано в презентации

public:
//constructor
Basetransformer(){} // определить конструктор в Transformers.cpp
//destructor
~Basetransformer(){}; // определить деструктор в Transformers.cpp
Weapon weapon; // перенести к остальным полям класса
//information about the transformer
void aboutRobot(){ // перенести определение метода в Transformers.cpp
   std::cout<<"Information about "<<name<<"\n";
   std::cout<<"Brand : "<<brand<<"\n";
   std::cout<<"Colour : "<<colour<<"\n";
   std::cout<<"Shape : "<<shape<<"\n";
   std::cout<<"Height :"<<height<<"\n";
   std::cout<<"Weapon name:"<<weapon.getName()<<"\n";
   std::cout<<"Weapon size:"<<weapon.getSize()<<"\n";

}
//get method set method and validation
std::string getName() const;
void setName( const std::string& newName);
bool isValidName() const;
//brand
std::string getBrand();
void setBrand(std::string newBrand);
bool isValidBrand() const;
//colour
std:: string getColour();
void setColour(std::string newColour);
bool isValidColour() const;
//shape
std::string getShape();
void setShape(std::string newShape);
bool isValidShape() const;
//height
int getHeight();
void setHeight(int newHeight);
bool isValidHeight() const;

};

#endif



