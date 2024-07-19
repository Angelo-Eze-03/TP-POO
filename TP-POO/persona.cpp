#include "persona.h"
#include <cstdlib>
#include <ctime>
#include <string.h>


void Persona::crearDocumento()
{
    //getDocumento().gnerarDocumentoNivel1();//pueden agragarle el nombre si quieren libertad de ustedes
}

void Persona::subirNivel()
{

   //evaluar con un for hasta que nivel esta
  //if(getNivel().verificacionNivel1(getDocumento()) && getNivel().getValorNivel()<=5)
  //{
  // getNivel().setValorNivel(getNivel().getValorNivel()+1);
  //}
}

void Persona::actualizarDocumento()
{
    switch (getNivel().getValorNivel()) {
    case 1:
        //getDocumento().gnerarDocumentoNivel1();//pueden agragarle el nombre si quieren libertad de ustedes
        break;
    }
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



