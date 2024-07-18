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

void Nivel::calcularPuntos(Persona& persona, bool resultadoCorrecto)
{
    int puntosGanados = 0;
    int puntosPerdidos = 0;
    int multasGanadas = 0;


    if (persona.getDocumento().getTipo()<4) {
        if (persona.getDocumento().getTipo()==1) {

        }
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

/*bool Nivel::verificarDoc(Documento &Documento)
{
    if(Documento.getTipo()==4){
        return false;
    }

}*/



Nivel::Nivel() {}
