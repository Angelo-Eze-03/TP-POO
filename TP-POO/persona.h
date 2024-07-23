
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
        //friend std::ostream& operator=(std::ostream& os, const Documento& documento);
        void crearDocumento();
        void subirNivel();
        void actualizarDocumento();
        Persona();
        ~Persona();
         Documento getDocumento() ;
         Nivel getNivel() ;
};

#endif // PERSONA_H
