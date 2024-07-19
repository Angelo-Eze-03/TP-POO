#include "juego.h"


Juego::Juego()
{

}

Juego::~Juego()
{

}


int Juego::getPuntos()
{
    return puntos;
}

void Juego::setPuntos(int newPuntos)
{
    puntos = newPuntos;
}

const Persona &Juego::getPersona() const
{
    return persona;
}

void Juego::setPersona(const Persona &newPersona)
{
    //persona = newPersona; //necesita un operador = en persona
}

