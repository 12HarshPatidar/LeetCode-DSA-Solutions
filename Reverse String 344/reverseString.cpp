// leetcode question number 344
#include <iostream>
#include <vector>
using namespace std;

void ReverseString(vector<char> &str)
{
    int i = 0;
    int j = str.size() - 1;

    while(i < j){
        swap(str[i++],str[j--]);
    }
}

int main()
{
    vector<char> str = {'a', 'b', 'c', 'd', 'e'};
    ReverseString(str);
    for(char ch : str){
        cout << ch;
    }
}
