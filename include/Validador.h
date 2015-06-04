#ifndef VALIDADOR_H
#define VALIDADOR_H
#include <string>
#include "Pila.h"
class Validador
{
    public:
        Validador();
        virtual ~Validador();
        bool validar(std::string sentencia);
    protected:
    private:
        Pila* _pila;
};

#endif // VALIDADOR_H
