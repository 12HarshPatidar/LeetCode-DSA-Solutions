/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    
    // top part
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < (n-i-1); j ++){
            cout<<" ";
        }
        
        cout<<"*";
        
        if(i!=0){
            for(int k = 0 ; k < (2*i-1); k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    //bottom part 
    
    for(int i = n-2 ; i >= 0 ; i--){
        //spaces
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<"*";
        
        if(i != 0){
            //scound spaces
            for(int j = 0 ; j < 2*i-1;j++){
            cout<<" ";
            }
        cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}