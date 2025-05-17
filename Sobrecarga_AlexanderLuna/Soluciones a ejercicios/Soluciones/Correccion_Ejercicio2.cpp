#include <iostream>
using namespace std;

class Punto{
public:
    int x,y;
    Punto(int _x,int _y): x(_x), y(_y) {}
    bool operator==(const Punto& p) const {            // const &
        return x == p.x && y == p.y;                   // comparación correcta
    }
};

int main(){
    Punto a(1,2), b(1,2);
    cout << boolalpha << (a==b) << endl;
}
