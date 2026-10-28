// leetcode question number 125
#include <iostream>
#include <string>
using namespace std;

bool isAlphanumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool ValidPalindrome(string s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {
        if (!isAlphanumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlphanumeric(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    cout << ValidPalindrome(str);
}