#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include "qlabel.h"
#include "qlabel.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#define SIZE 2

class Documento
{
    private:

            //datos del Documento en si
            char* nombre;
            char* fechaNac;
            char* nacionalidad;
            char* estadoCivil;
            char* motivoViaje;
            char* tipo;       //tipo de persona(1:aldeano,4:revolucionario, etc)
            int duracionEstadia;
            char* paisResidencia;
            bool acompanantes;
            bool admisible;

            //cantidad de datos
            const int cantDatos = SIZE;//deberia ir entre los corchetes pero nose porque me tira error

            //Generadores de documentacion correcta
             char* nombresC[SIZE];
             char* fechasNacC[SIZE];
             char* nacionalidadesC[SIZE];
             char* estadosCivilC[SIZE];
             char* tiposVisitaC[3];
             char* motivosViajeC[SIZE];
                   int duracionEstadiaC[5];
             const char* paisesResidenciaC[SIZE];
            //Generadores de documentacion Incorrecta
              char* nombresI[SIZE];
              char* fechasNacI[SIZE];
              char* nacionalidadesI[SIZE];
              char* estadosCivilI[SIZE];
              char* tiposVisitaI;
              char* motivosViajeI[SIZE];
                  int duracionEstadiaI[5];
            const char* paisesResidenciaI[SIZE];
    public:
            Documento();
            char *getNombre() const;
            void setNombre(char *newNombre);
            char *getFechaNac() const;
            void setFechaNac(char *newFechaNac);
            char *getNacionalidad() const;
            void setNacionalidad(char *newNacionalidad);
            char *getEstadoCivil() const;
            void setEstadoCivil(char *newEstadoCivil);
            char *getMotivoViaje() const;
            void setMotivoViaje(char *newMotivoViaje);
            int getDuracionEstadia() const;
            void setDuracionEstadia(int newDuracionEstadia);
            char *getPaisResidencia() const;
            void setPaisResidencia(char *newPaisResidencia);

            friend std::ostream& operator<<(std::ostream& os, const Documento& documento);
            //Generador de datos correctos nivel 1
            void setNacionalidadesC();
            void setFechasNacC();
            void setTipoVisitaC();
            void setDuracionEstadiaC();
            void setEstadoCivilC();
            char * getNacionalidadesC(int indice);
            char * getFechasNacC(int indice);
            char * getTipoVisitaC(int indice);
            int  getDuracionEstadiaC(int indice);
            char * getEstadoCivilC(int indice);
            //Generador de datos Incorrectos nivel 1
            void setNacionalidadesI();
            void setFechasNacI();
            void setTipoVisitaI();
            void setDuracionEstadiaI();
            void setEstadoCivilI();
            char * getNacionalidadesI();
            char * getFechasNacI();
            char * getTipoVisitaI();
            int    getDuracionEstadiaI();
            char * getEstadoCivilI();

            void setDatos();

            void gnerarDocumento(int nivel);





            void GenerarPersona(QLabel* label);
            bool getAcompanantes() const;
            void setAcompanantes(bool newAcompanantes);
            char *getTipo() const;
            void setTipo(char *newTipo);
            int getCantDatos() const;
};

#endif // DOCUMENTO_H
