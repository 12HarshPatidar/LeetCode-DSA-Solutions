#include <iostream>
using namespace std;
int main(){
    char a[5];
    char b[5];
    int c = 0;
    cout << "Enter the string : " << endl;
    cin >> a;
    for(int i = sizeof(a); i >= 0 ; i++){
        b[c] = b[c] + a[i];
        c++;
    }
    if(a[0] == b[0] ){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}