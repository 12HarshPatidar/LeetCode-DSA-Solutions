#include<iostream>
#include <map>
using namespace std;

    int test(string s) {
        int n = s.length();
        
        map<char,int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['l'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int sum = roman[s[n-1]];

        for(int i = (n - 2); i >= 0; i--){
            if(roman[s[i]] < roman[s[i+1]]){
                sum -= roman[s[i]];
                // cout << "helo";
            }else{ 
                sum += roman[s[i]];
            }
            cout << sum << endl;
        }
        return 0;
    }


int main(){
    cout<< test("LVIII") << endl;
}






