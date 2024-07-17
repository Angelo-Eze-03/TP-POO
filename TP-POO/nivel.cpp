#include "nivel.h"
#include "persona.h"
#include "documento.h"

int Nivel::getNivelActual()
{
    return nivelActual;
}

void Nivel::setNivelActual(int newNivelActual)
{
    nivelActual = newNivelActual;
}



int Nivel::getPuntos() const
{
    return puntos;
}

int Nivel::getMultas() const
{
    return multas;
}

void Nivel::calcularPuntos(Documento& Documento, bool resultadoCorrecto)
{
    int puntosGanados = 0;
    int puntosPerdidos = 0;
    int multasGanadas = 0;

    switch(Documento.getTipo())
    {
        case 1: puntosGanados=10; //aldeano
            puntosPerdidos=15;
            break;
        case 2: puntosGanados=15; //RefugiadoPolitico
            puntosPerdidos=25;
            break;
        case 3: puntosGanados=25; //Diplomatico
            puntosPerdidos=25;
            multasGanadas=1;
            break;
        case 4: puntosPerdidos=25; //revolucionario
            multasGanadas=1;
            break;
    }

    if(resultadoCorrecto)
    {
        puntos += puntosGanados;
    }
    else
    {
        puntos -= puntosPerdidos;
        multas += multasGanadas;
    }

}

bool Nivel::verificarDoc(Documento &Documento)
{
    if(Documento.getTipo()==4){
        return false;
    }
}



Nivel::Nivel() {}
