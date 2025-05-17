#include <iostream>
using namespace std;

class Complejo {
public:
    double re, im;
    Complejo(double r, double i) : re(r), im(i) {}

    // Firma correcta: const & y método const
    Complejo operator+(const Complejo& otro) const {
        // Sumamos componente a componente
        return Complejo(re + otro.re, im + otro.im);
    }
};

int main() {
    Complejo a(2, 3), b(-1, 4);
    Complejo c = a + b;         
    cout << "(" << c.re << ", " << c.im << ")" << endl;
}
