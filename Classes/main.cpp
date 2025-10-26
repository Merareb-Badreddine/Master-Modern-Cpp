#include<iostream>
#include "Class_Data.hpp"
using namespace std;




int main()
{
    const  Data object{};
  //  object.SetVariableX(10);
  //  object.SetVariableY(20);
    cout<<"First Element Equal "<<object.getVariableX()<<endl;
    cout<<"Second Element Equal "<<object.getVariableY()<<endl;

}
