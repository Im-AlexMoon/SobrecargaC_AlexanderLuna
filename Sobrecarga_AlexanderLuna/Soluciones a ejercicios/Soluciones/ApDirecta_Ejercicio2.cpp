#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;
    Punto(int _x=0,int _y=0): x(_x), y(_y) {}
    bool operator==(const Punto& otro) const {
        return x == otro.x && y == otro.y;
    }
};

int main() {
    Punto p1(5,5), p2(5,5), p3(5,6);
    cout << boolalpha;
    cout << (p1==p2) << endl;   // true
    cout << (p1==p3) << endl;   // false
}
