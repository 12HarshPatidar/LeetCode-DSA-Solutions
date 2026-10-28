/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[]={10,2,30,40,50};
    int mini=INT_MAX;
    int larg=INT_MIN;
    int m,l;
    
    for(int i = 0; i < 5; i++){
        if(arr[i] > larg){
            larg = arr[i];
            l = i;
        }
        if(arr[i] < mini){
            mini = arr[i];
            m = i;
        }
        
    }
    cout << "minimum = " << mini << " at index = " << m << endl;
    cout << "largest = " << larg <<" at index = " << l << endl;

    return 0;
}