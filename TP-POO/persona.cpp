#include "persona.h"
#include <cstdlib>
#include <ctime>
#include <string.h>


void Persona::crearDocumento()
{
    //getDocumento().gnerarDocumento();//pueden agragarle el nombre si quieren libertad de ustedes
}

void Persona::subirNivel()
{
    getNivel().verificacionNivel1(getDocumento());
}

Persona::Persona()
{

}

Persona::~Persona()
{

}

 Documento Persona::getDocumento()
{
    return documento;
}
 Nivel Persona::getNivel()
{
    return nivel;
}



