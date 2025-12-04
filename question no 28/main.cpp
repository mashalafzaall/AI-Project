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
   int a,b,c,disc;
   cout<<"enter the value of a ";
   cin>>a;
   cout<<"enter the value of b ";
   cin>>b;
   cout<<"enter the value of c ";
   cin>>c;
   disc=b*b-(4*a*c);
   cout<<"the value of disc is "<<disc<<endl;
   return 0;
}