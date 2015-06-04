#include "Elemento.h"

Elemento::Elemento(std::string nombre) :  _nombre(nombre), _siguiente(NULL)
{
    //ctor
}

Elemento::~Elemento()
{
    //dtor
}

std::string Elemento::getNombre()
{
    return _nombre;
}
