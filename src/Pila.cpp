#include "Pila.h"

Pila::Pila():_primero(NULL), _ultimo(NULL), _tamano(0)
{
    //ctor
}

Pila::~Pila()
{
    //dtor
}

Elemento* Pila::getPrimero()
{
    return _primero;

}

void Pila::agregar(Elemento* elemento)
{
    _tamano++;
    if(!_ultimo)
    {
        _primero = _ultimo = elemento;
        return;
    }

    elemento -> _siguiente = _ultimo;
    _ultimo = elemento;
}

Elemento* Pila::extraer()
{
    if(!_ultimo)
    {
        return NULL;
    }
    Elemento* retorno = _ultimo;
    _ultimo = _ultimo -> _siguiente;
    _tamano--;
    return retorno;
}

bool Pila::estaVacia()
{
    return _tamano == 0;
}
