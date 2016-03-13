#include <iostream>
using namespace std;

class Base {
public:
    virtual void output(){
        cout << "Base output" << endl;
    }
    Base(){}
    virtual ~Base(){
        cout << "Base destruct" << endl;
    }
};

class Derive : public Base {
public:
    void output() {
        cout << "derive output" << endl;
    }
    Derive(){};
    ~Derive(){
        cout << "Derive destruct " << endl;
    }
};

int main(){
    Base *p = new Derive();
    p->output();
    delete p;

}
