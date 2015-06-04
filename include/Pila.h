#ifndef PILA_H
#define PILA_H
#include "Elemento.h"

class Pila
{
    public:
        Pila();
        virtual ~Pila();
        Elemento* getPrimero();
        void agregar(Elemento* elemento);
        Elemento* extraer();
        bool estaVacia();
    private:
        Elemento* _primero;
        Elemento* _ultimo;
        int _tamano;
};

#endif // PILA_H
