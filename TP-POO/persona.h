#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "documento.h"
class Persona
{
private:
        Documento documento;

public:

        Persona();
        ~Persona();
        const Documento &getDocumento() const;
};

#endif // PERSONA_H
