#include<iostream>
include "Class_Data.hpp"

using namespace std;


void Data::SetVariableX(int VariableX)
{
    x = VariableX;
}
void Data::SetVariableY(int VariableY)
{
    y = VariableY;
}
int Data::getVariableX() const
{
    return x;
}
int Data::getVariableY() const
{
    return y;
}
