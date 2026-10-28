#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[]={1,2,3,4,5,6,7};
    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << "[ ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    return 0;
}