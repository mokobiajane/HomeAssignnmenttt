//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83
#include "weapon.h"

std::string Weapon :: getName() const
{
    return _name;
}

void  Weapon :: setName( const std::string& newName)
{
    _name = newName;
}

int Weapon :: getSize() const
{
    return _size;
}

void Weapon :: setSize( int newSize)
{
    _size = newSize;
}
 