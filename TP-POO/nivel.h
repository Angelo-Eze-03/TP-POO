#ifndef NIVEL_H
#define NIVEL_H
#include "persona.h"

class Nivel
{
private:
    Persona** Personas;
    int puntos=0;
    int multas=0;
    int nivelActual;
public:
    Nivel();
    void setNivelActual(int newNivelActual);

    int getNivelActual() ;
    int getPuntos() const;
    int getMultas() const;

    void calcularPuntos(Persona& persona, bool resultadoCorrecto);
    void sumarMultas();
    bool verificarDoc(Documento& Documento);
};

#endif // NIVEL_H
