#include<iostream>
#include "vector.h"

using std::cout;

Vector::Vector(std::size_t s)
: size(s), elements{new int[s]}//Create dynamic memory for elements of size s
{
    cout<<"Constructor(s)-Creating Memory "<<elements<<"\n";//display address of elements

}

Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor "<<elements<<"/n";

    for (std::size_t i = 0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}