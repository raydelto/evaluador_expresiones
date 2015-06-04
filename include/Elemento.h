#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>

class Elemento
{
    public:
        Elemento(std::string nombre);
        virtual ~Elemento();
        std::string getNombre();

    private:
        std::string _nombre;
        Elemento* _siguiente;
        friend class Pila;
};

#endif // ELEMENTO_H
