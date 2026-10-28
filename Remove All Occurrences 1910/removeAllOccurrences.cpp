// leetcode question number 1910

#include <iostream>
#include <string>
using namespace std;

string RemoveAllOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc", part = "abc";
    cout << RemoveAllOccurrences(s, part) << endl;
}