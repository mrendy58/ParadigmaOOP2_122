#include <iostream>
using namespace std;

class baseclass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya function dari base class";
    }
};
class derivedClass : public baseclass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived Class";
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
