//
// Created by Johan on 18/11/2022.
//

#include "ListaCita.h"
ListaCita::ListaCita() {
    primero = NULL;
    actual = NULL;
}
void ListaCita::insertarCita(Cita* cita)
{
    actual = new NodoCita(cita, NULL);
    if (primero == NULL)
    {
        primero = actual;
    }
    else
    {
        actual->setSig(primero);
        primero = actual;
    }
}
//
bool ListaCita::cancelarCita(string cod) {
    NodoCita* cita=NULL;
    if (listaVacia()) {
        return false;
    }
    if (primero->getCita()->getCodigo() == cod) {
        actual = actual->getSig();
        delete(primero);
        primero = actual;
        return true;
    }
    while (actual != NULL && actual->getCita()->getCodigo() != cod) {
        cita = actual;
        actual = actual->getSig();
    }
    if (actual == NULL) { return false; }
    else {
        cita->setSig(actual->getSig());
        delete actual;
        return true;
    }
    return false;
}
//
int ListaCita::cuentaNodos() {
    int can = 0;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            can++;
            actual = actual->getSig();
        }
    }
    else {
        can = 0;
    }
    return can;
}
bool ListaCita::existeCita(string cod) {
    bool x = false;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getCita()->getCodigo() == cod) {
                x = true;
            }
            actual = actual->getSig();
        }
    }
    return x;
}
bool ListaCita::eliminar() {
    if (primero == nullptr)
    {
        return false;
    }
    else
    {
        actual = primero;
        primero = primero->getSig();
        delete actual;
        return true;
    }
}
string ListaCita::toString()
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    return s.str();
}
string ListaCita::toStringCitas(string cod)
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        if ((actual->getCita()->getCodigo()) == cod) {
            s << actual->toStringNodo() << endl;
        }
        actual = actual->getSig();
    }
    return s.str();
}
bool ListaCita::listaVacia() {
    return  (primero == NULL) ? true : false;
}

Cita* ListaCita::getCita(string cod)
{
    Cita* x = NULL;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getCita()->getCodigo() == cod) {
                x = actual->getCita();
            }
            actual = actual->getSig();
        }
    }
    return x;
}

ListaCita::~ListaCita() {
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSig();
        delete actual;
    }
}