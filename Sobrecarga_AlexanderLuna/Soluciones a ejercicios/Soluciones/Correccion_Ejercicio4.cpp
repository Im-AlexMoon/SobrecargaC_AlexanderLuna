#include <iostream>
using namespace std;

class Contador{
    int valor;
public:
    Contador(int v): valor(v) {}
    Contador operator++(int){        // corregido
        Contador temp = *this;      
        ++valor;                     
        return temp;                
    }
    int get() const { return valor; }
};

int main(){
    Contador c(3);
    Contador old = c++;
    cout << "Old: " << old.get() << ", New: " << c.get() << endl;
}
