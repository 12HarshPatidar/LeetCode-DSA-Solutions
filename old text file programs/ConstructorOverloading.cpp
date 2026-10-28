#include<iostream>
using namespace std;

class ConstructorOverloading{
    public:
        ConstructorOverloading(){
            cout << "No Name!" <<  endl;
        }

        ConstructorOverloading(string name){
            cout << "Hello, "<< name << endl;
        }

        ConstructorOverloading(string name,int Bdate){
            cout << "Hello, "<< name << endl <<"Your Birthday Date is " << Bdate << endl;
        }
};

int main(){
    ConstructorOverloading c1;
    ConstructorOverloading c2("Harsh");
    ConstructorOverloading c3("Harsh",12);
    return 0;
}
