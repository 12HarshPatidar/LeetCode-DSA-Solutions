// leetcode question number 443

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int StringComparisions(vector<char> &chararray)
{
    int n = chararray.size();
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = chararray[i];
        int count = 0;

        while (i < n && chararray[i] == ch)
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            chararray[idx++] = ch;
        }
        else
        {
            chararray[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chararray[idx++] = dig;
            }
        }
        i--;
    }

    chararray.resize(idx);
    // return idx;
    return chararray.size();
}

int main()
{
    vector<char> chararray = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'd'};
    cout << StringComparisions(chararray) << endl;

    for(char alpha : chararray){
        cout << alpha << " ";
    }
}