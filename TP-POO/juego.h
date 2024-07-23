#ifndef JUEGO_H
#define JUEGO_H
#include "persona.h"

class Juego
{
    Persona persona;
    int puntos;
public:
    Juego();
    ~Juego();

    int getPuntos() ;
    void setPuntos(int newPuntos);
    const Persona &getPersona() const;
    void setPersona(const Persona &newPersona);

    void sumarPuntos();
    void restarPuntos();
    void sumarMulta();
    void restarMulta();

};

#endif // JUEGO_H
