/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    int var = 5;
    cout<<"&var ="<<&var<<endl; //Prints the address
    cout<<"*&var ="<<*&var<<endl; //Prints the value

    int *p; //*p - This indicates that p is a pointer type variable that points to address of another variable
    p=&var;

    cout<<"p ="<<p<<endl; //Prints the address of var
    cout<<"*p ="<<*p<<endl; //Prints the value stored at the indicated address in the memory

    int a=20;
    cout<<"a : "<<a<<endl;
    int *p1=&a;
    *p1=60;
    cout<<"a : "<<a<<endl;
    cout<<"*p1 : "<<*p1<<endl;

    int * const p_const = &a; //Cannot change the ADDRESS afterwards
    cout<<"p_const : "<<p_const<<endl;
    cout<<"*p_const : "<<*p_const<<endl;
    *p_const = 70;
    cout<<"*p_const : "<<*p_const<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"----------------------------------------------------"<<endl;
    const int *p2 = &a; //Cannot change the VALUE
    cout<<"p2 : "<<p2<<endl;
    cout<<"*p2 : "<<*p2<<endl;
    //*p2 = 80; //Error
    int b=10;
    p2 = &b; // address of b is stored in p2 and p2 is a pointer variable that points to address of b
    a = 90;
    cout<<"====>*p2 : "<<*p2<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"----------------------------------------------------"<<endl;
    const int * const p3 = &a; //Cannot change the VALUE as well as ADDRESS

    int my_var=10;
    int *my_p=&my_var;

    cout<<endl<<endl;
    cout<<"my_var : "<<my_var<<endl; //Integer value
    cout<<"my_p : "<<my_p<<endl; //Address
    cout<<"*my_p : "<<*my_p<<endl; //Integer value from pointed variable (my_var)
    cout<<"&my_p : "<<&my_p<<endl; //Address of pointer itself

    int **pp=&my_p; //Pointer pointing to address of another pointer
    cout<<"pp : "<<pp<<endl;
    cout<<"&pp : "<<&pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<**pp<<endl;

    return 0;
}
