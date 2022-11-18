#include <iostream>
#include <sstream>

using namespace std;
#include "Profesor.h"
#include "Estudiante.h"

int main() {
    Paciente* aux = new Profesor("Pedro Ramon","U Latina","204440666",true,"Bibliotecologia",5,100);
    cout << aux->toString() << endl;
    return 0;
}
