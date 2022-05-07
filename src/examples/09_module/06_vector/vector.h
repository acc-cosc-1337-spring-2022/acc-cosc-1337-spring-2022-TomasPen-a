//
#include<cstddef>

#ifndef LIST_ABSTRACT_H
#define LIST_ABSTRACT_H

class List_abstract
{
public:
    virtual std::size_t Size() const = 0;
};
#endif

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector : public List_abstract
{
public:
    Vector(std::size_t s);
    Vector(const Vector& v);//rule 1 of 3 of c++ rule of 3
    std::size_t Size() const {return size;}
    int& operator[](std::size_t i) const{return elements[i];}//read cout<<v[0];
    int& operator[](std::size_t i) {return elements[i];}//write v[0] = 5;

private:
    std::size_t size;
    int* elements;//list of ints, 

};
#endif