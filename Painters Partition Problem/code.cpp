#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &Boards, int m, int maxPossibleTime)
{
    int painters = 1;
    int time = 0;

    for (int i = 0; i < Boards.size(); i++)
    {
        if (maxPossibleTime < Boards[i])
            return false;

        if ((time + Boards[i]) <= maxPossibleTime)
        {
            time += Boards[i];
        }
        else // painter badege kyoki time or arr ka time add hone pe mid se jada ho rahe hai
        {
            painters++;
            time = Boards[i]; // Jaha else aya vaha se time new painter ko mile ga
        }
    }

    return painters > m ? false : true;
}

int PainterAssiend(vector<int> &Boards, int m)
{
    int ans;
    int sum = 0;
    int maximum = INT_MIN;

    for (int i = 0; i < Boards.size(); i++)
    {
        sum += Boards[i];
        maximum = max(maximum, Boards[i]);
    }

    int st = maximum, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(Boards, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int m = 2;
    cout << "Answer : " << PainterAssiend(arr, m);
}