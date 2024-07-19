#ifndef NIVEL_H
#define NIVEL_H
#include "documento.h"

class Nivel
{
private:
    //Nivel pricipal
    int valorNivel=1;
    //cantidad de datos
    const int cantDatos = 2;//deberia ir entre los corchetes pero nose porque me tira error
    //Datos validos para verificar nivel 1
    const char* nacionalidad[2];
    const char* fechaNac[2];
    const char* tipoVisita[3];
    int duracionEstadia[5];

public:
    Nivel();

    int getValorNivel() const;
    void setValorNivel(int newValorNivel);
    int getCantDatos() const;


    //llenara datos correctos
    void setNacionalidad();
    void setFechaNac();
    void setTipoVisita();
    void setDuracionEstadia();
    //devolver datos correctos
    const char*getNacionalidad(int indice);
    const char*getFechaNac(int indice);
    const char*getTipoVisita(int indice);
    int getDuracionEstadia(int nivel);
    //Verificacion para nivel 2
    bool verificacionNivel1(Documento documento);


};

#endif // NIVEL_H
