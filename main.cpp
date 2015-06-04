#include <iostream>
#include "Validador.h"
#include <iomanip>
using namespace std;

int main()
{
    Validador* v = new Validador();
    cout << boolalpha;
    cout << v->validar("[[(2+2) + (4+2)] / 4]");
    return 0;
}
