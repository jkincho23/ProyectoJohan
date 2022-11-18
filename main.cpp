#include <iostream>
#include <sstream>

using namespace std;
#include "Profesor.h"
#include "Estudiante.h"

int main() {
    Paciente* aux = new Profesor("Pedro Ramon","U Latina","204440666",true,"Bibliotecologia",5,100);
    cout << aux->toString() << endl<<endl;
    Paciente* aux1 = new Estudiante("Pedro Ramon","U Latina","204440666","655","58","Americano","Huyendo de la paca",7,0);
    Paciente* aux2 = new Estudiante("Pedro Ramon","U Latina","204440666","655","45",5,1,1);
    cout << aux1->toString() << endl;
    cout << aux2->toString() << endl;
    return 0;
}
