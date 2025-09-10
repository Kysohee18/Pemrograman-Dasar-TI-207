#include <iostream>
using namespace std;

class baseClass final{
    public:
        virtual void perkernalan() {
            cout << "hallo saya function dari base class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan(){
            cout << "hallo saya fuction dari derived class";
        }
};
int main () {
    derivedClass a;

    a.perkenalan();
    return 0;
}