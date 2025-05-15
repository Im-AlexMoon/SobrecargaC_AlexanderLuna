#include <iostream>
using namespace std;

class Complejo {
public:
    double re, im;

    Complejo(double r = 0.0, double i = 0.0) : re(r), im(i) {}

    // Sobrecarga del operador +
    Complejo operator+(const Complejo& otro) const {
        return Complejo(re + otro.re, im + otro.im);
    }
};

int main() {
    Complejo a(1.0, 2.0), b(3.0, -1.0);
    Complejo c = a + b;
    cout << "(" << c.re << ", " << c.im << ")" << endl;   // (4.0, 1.0)
    return 0;
}
