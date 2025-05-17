#include <iostream>
#include <string>
using namespace std;

class Empleado{
public:
    string nombre;
    int id;
    Empleado(string n,int i): nombre(move(n)), id(i) {}
};

ostream& operator<<(ostream& os,const Empleado& e){
    return os << "Empleado[" << e.id << "]: " << e.nombre;
}

int main(){
    Empleado e1("Ana",101), e2("Luis",202);
    cout << e1 << endl;
    cout << e2 << endl;
}
