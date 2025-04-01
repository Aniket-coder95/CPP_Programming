#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw() = 0;
};

class circle : public shape{
public:
    void draw() override{
        cout << "Im circle class" << endl;
    }
};

class Oval : public shape{
    public:
        void draw() override{
            cout << "Im Oval class" << endl;
        }
    };


int main(){
    circle c;
    c.draw();
    // shape* c = new circle();
    // shape* o = new Oval();

    // c->draw();
    // o->draw();
    return 0;
}