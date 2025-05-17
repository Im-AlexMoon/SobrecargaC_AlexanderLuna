#include <iostream>
#include <cstring>
using namespace std;

class Buffer{
    char* datos;
    size_t n;
public:
    Buffer(const char* s){
        n = strlen(s);
        datos = new char[n+1];
        strcpy(datos,s);
    }
    ~Buffer(){ delete[] datos; }

    Buffer(const Buffer& otro){           
        n = otro.n;
        datos = new char[n+1];
        strcpy(datos,otro.datos);
    }

    Buffer& operator=(const Buffer& otro){   // completado
        if(this != &otro){                  
            delete[] datos;                 
            n = otro.n;
            datos = new char[n+1];
            strcpy(datos,otro.datos);   
        }
        return *this;
    }

    void print() const { cout << datos << endl; }
};

int main(){
    Buffer a("Uno"), b("Dos");
    a = b;
    a.print();            
}
