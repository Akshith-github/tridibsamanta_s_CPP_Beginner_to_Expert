/**
 * Author:    Tridib Samanta
 * Created:   17.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    string text = "Hello"; // H e l l o \0 in string

    char ch = text[0]; // H as char

    char characters[]="Hello World"; // H e l l o W o r l d \0 in char array

    cout<<characters<<endl; // Prints the String

    cout<<characters[0]<<endl;// Prints the first character of the string
    cout<<*(characters)<<endl;// Prints the first character of the string
    cout<<characters[1]<<endl;// Prints the second character of the string
    cout<<*(characters+1)<<endl;// Prints the second character of the string

    cout<<endl<<endl;

    char *p = characters;// char pointer pointing to the first character of the string

    cout<<p[0]<<endl;// Prints the first character of the string
    cout<<*p<<endl;// Prints the first character of the string

    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;

    cout<<endl<<endl;

    string text1="Hey"; // string is a class in C++ and it is a sequence of characters
    /* inline const char *std::string::c_str() const
        Return const pointer to null-terminated contents. 
            This is a handle to internal data. 
                Do not modify or dire things may happen. 
    */
    const char * text2 = text1.c_str(); 
    string texxxxt = "new text";
    text2 = texxxxt.c_str(); // text2 is now pointing to the new text
    cout<<" ----- "<<text2<<endl;

    char array[]="Sample Text";
    string test = array;
    cout<<test<<endl;

    const char * a = "Test";
    cout<<a<<endl;

    cout << "----------------------------------------------------" << endl;
    char * const dynamic_array = new char[50];
    dynamic_array[0]='k';
    dynamic_array[1]='\0';
    cout<<dynamic_array<<endl;
    delete [] dynamic_array;

    cout<<endl<<endl;

    string array_of_strings[5]={"qwerty"};

    cout<<array_of_strings[0]<<endl;
    cout<<array_of_strings[1]<<endl;
    cout<<array_of_strings[2]<<endl;

    array_of_strings[0]="abc";
    array_of_strings[1]="def";

    cout<<array_of_strings[0]<<endl;
    cout<<array_of_strings[1]<<endl;
    cout<<array_of_strings[2]<<endl;
    //...

    return 0;
}
