#include<iostream>
using namespace std;

class tester{
    public:
  tester(){
    cout << "Constructor Called" << endl;
  }
  ~tester(){
    cout << "Destructor Called" << endl;
  }
};

int main(){
    tester test;
    cout << "Main function" << endl;
    
    cout << "Exiting Main function" << endl;
    return 0;
}