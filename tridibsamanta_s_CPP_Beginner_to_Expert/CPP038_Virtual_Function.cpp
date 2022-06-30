/**
 * Author:    Tridib Samanta
 * Created:   09.02.2020
 **/

#include <iostream>
using namespace std;

class A
{
 public:
 virtual void display()
 {
  cout << "Base class is invoked"<<endl;
 }
};
class B:public A
{
 public:
 void display()
 {
  cout << "Derived Class is invoked (base was overrided)"<<endl;
 }
};


int main()
{
 A* a;    //pointer of base class
 cout<<"1"<<endl;
 B b;     //object of derived class
 cout<<"2"<<endl;
 a = &b;
 cout<<"3"<<endl;
 a->display();   //Late Binding occurs
}
