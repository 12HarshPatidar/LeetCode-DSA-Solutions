#include <iostream>
using namespace std;

class Demo {
public:
    Demo(const string &name) {
        this->name = name;
        cout << "Constructor called for " << name << endl;
    }
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }

private:
    string name;
};

// Global object
Demo globalObj("Global Object");

int main() {
    cout << "Inside main()" << endl;

    // Local object
    Demo localObj("Local Object");

    // Static object
    static Demo staticObj("Static Object");

    cout << "End of main()" << endl;

    return 0;
}
