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
    float realnum,fractionalpart;
    int integralpart;
    realnum=15.58971;
    integralpart=(int)realnum;
    fractionalpart=realnum-integralpart;
    cout<<"the real number is "<<realnum<<endl;
    cout<<"the integralpart is "<<integralpart<<endl;
    cout<<"the fractional part is "<<fractionalpart<<endl;
     return 0;
}