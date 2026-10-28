#include <iostream>
using namespace std;

// 8,4,2,1

// int dtb(int decimal){
//     // decimal = 15;
//     int divisor = 8;
//     int binary = 0;
//     while(decimal != 0){
//         if(decimal >= divisor){
//             divisor = decimal % divisor;
//             divisor/2;
//         }else{
//             divisor/2;
//         }
//     }
// }

int dtb(int decimal)
{
    int binary = 0;
    int idx = 1;
    while (decimal > 0)
    {
        binary = binary + idx * (decimal % 2);
        decimal = decimal / 2;
        idx = idx * 10;
    }
    return binary;
}

int main()
{
    cout << dtb(14);
}