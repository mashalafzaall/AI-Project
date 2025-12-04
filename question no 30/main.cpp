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
    int x;
    cout<<"enter a number ";
    cin>>x;
    if (x%2==0) {
    cout<<"the number entered is even";
    }
    if (x%2!=0) {
    cout<<"the numbered entered is odd";
    }
    return 0;
}