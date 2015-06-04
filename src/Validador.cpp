#include "Validador.h"
#include <iostream>
#include <sstream>
using namespace std;
Validador::Validador()
{
    _pila = new Pila();
}

Validador::~Validador()
{

}

bool Validador::validar(std::string sentencia)
{
    for(unsigned int i = 0 ; i < sentencia.size() ; i++)
    {
        if(sentencia[i] == '(' || sentencia[i] == '[')
        {
            stringstream flujo;
            flujo << sentencia[i];
            _pila->agregar(new Elemento(flujo.str()));
        }else if(sentencia[i] == ')' || sentencia[i] == ']')
        {
            Elemento* elemento = _pila -> extraer();
            if(!elemento)
            {
                return false;
            }
            if( (sentencia[i] == ']'&& elemento->getNombre() != "[") ||
               (sentencia[i] == ')'&& elemento->getNombre() != "("))
            {
                return false;
            }
        }

    }
    return _pila -> estaVacia();
}
