#pragma once
#include <iostream>
#include <sstream>
#include "Paciente.h"

using namespace std;

class Estudiante : public Paciente {
private:
    string codCarrera, telefono, nacionalidad, condicion;
    int nivelCursado;
    bool nacional, estado;
public:

    Estudiante(const string &nombre, const string &nombreU, const string &id, const string &codCarrera, const string &telefono, const string &nacionalidad, const string &condicion, int nivelCursado, bool nacional);

    Estudiante(const string &nombre, const string &nombreU, const string &id, const string &codCarrera, const string &telefono, int nivelCursado, bool nacional, bool estado);

    const string &getCodCarrera() const;

    void setCodCarrera(const string &codCarrera);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    const string &getNacionalidad() const;

    void setNacionalidad(const string &nacionalidad);

    const string &getCondicion() const;

    void setCondicion(const string &condicion);

    int getNivelCursado() const;

    void setNivelCursado(int nivelCursado);

    bool isNacional() const;

    void setNacional(bool nacional);

    bool isEstado() const;

    void setEstado(bool estado);

    string toString();
};

