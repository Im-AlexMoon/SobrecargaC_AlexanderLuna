#include <iostream>
#include <string>
using namespace std;

class Empleado{
    string nombre;
    int id;
public:
    Empleado(string n,int i): nombre(move(n)), id(i) {}
    // corrección devolver ostream&
    friend ostream& operator<<(ostream& os,const Empleado& e){
        os << "ID=" << e.id << ", Nombre=" << e.nombre;
        return os;
    }
};

int main(){
    Empleado e("Edgar",303);
    cout << e << endl;
}
