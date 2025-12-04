/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string name,gender;
    int age;
    float height;
    cout<<"enter the name of student ";
    cin>>name;
    cout<<"enter age of student ";
    cin>>age;
    cout<<"enter height of student ";
    cin>>height;
    cout<<"enter gender of student ";
    cin>>gender;
    cout<<"the data of student is as follow: "<<endl;
    cout<<"the name of student is "<<name<<endl;
    cout<<"the age of student is "<<age<<endl;
    cout<<"the height of student is "<<height<<endl;
    cout<<"the gender of student is "<<gender<<endl;
    return 0;
}