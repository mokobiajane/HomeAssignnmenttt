//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>


class Weapon
{
    private:
    std::string _name;
    int _size;

    public:
    std::string getName() const;

    void setName( const std::string& newName);
    int getSize() const;
    void setSize( int newSize);

};
#endif