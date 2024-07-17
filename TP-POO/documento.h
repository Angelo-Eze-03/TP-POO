#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <ostream>



class Documento
{
    private:
            char* nombre;
            char* fechaNac;
            char* nacionalidad;
            char* estadoCivil;
            char* motivoViaje;
            int tipo;       //tipo de persona(1:aldeano,4:revolucionario, etc)
            int duracionEstadia;
            char* paisResidencia;
            int acompañantes;

            char** nombres;
            //Llenadores Buenos o Correctos
            char** FechasNacB;
            char** nacionalidadesB;
            char** estadosCivilB;
            char** motivosViajeB;
            int cantidadDiaB;
            char** paisesResidenciaB;
            //Llenadores Malos o Incorrectos
            char** FechasNacM;
            char** nacionalidadesM;
            char** estadosCivilM;
            char** motivosViajeM;
            int cantidadDiaM;
            char** paisesResidenciaM;
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
            int getTipo() const;
            void setTipo(int newTipo);
            int getDuracionEstadia() const;
            void setDuracionEstadia(int newDuracionEstadia);
            char *getPaisResidencia() const;
            void setPaisResidencia(char *newPaisResidencia);
            int getAcompañantes() const;
            void setAcompañantes(int newAcompañantes);

            friend std::ostream& operator<<(std::ostream& os, const Documento& documento);

            void LlenarNombre();

};

#endif // DOCUMENTO_H
