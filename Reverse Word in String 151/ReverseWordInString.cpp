// leetcode question number 151

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string str)
{
    string ans;

    int n = str.length();

    reverse(str.begin(), str.end());

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && str[i] != ' ')
        {
            word += str[i];
            i++;
        }

        if (word.length() > 0)
        {
            reverse(word.begin(), word.end());
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main()
{
    string s = "the sky is blue";
    cout << reverseString(s);
}