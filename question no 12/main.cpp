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
    const float PI=3.1416;
    float radius,height,volume;
     cout<<"enter radius of cylinder ";
    cin>>radius;
    cout<<"enter height of cylinder ";
    cin>>height;
    volume=PI*radius*radius*height;
    cout<<"the volume of cylinder is "<<volume<<endl;
    return 0;
}