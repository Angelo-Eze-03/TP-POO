
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "documento.h"
#include "nivel.h"
class Persona
{
private:
        Documento documento;
        Nivel nivel;
public:
        void crearDocumento();
        void subirNivel();

        Persona();
        ~Persona();
         Documento getDocumento() ;
         Nivel getNivel() ;
};

#endif // PERSONA_H
