#include <iostream>
#include <string>
using namespace std;

class Empleado{
public:
    string nombre;
    int id;
    Empleado(string n,int i): nombre(move(n)), id(i) {}

    //completado
    friend ostream& operator<<(ostream& os,const Empleado& e){
        return os << "Empleado[" << e.id << "]: " << e.nombre;
    }
};

int main(){
    Empleado e("Ana",101);
    cout << e << endl;
}
