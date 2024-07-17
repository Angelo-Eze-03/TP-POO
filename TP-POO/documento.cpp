#include "documento.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

char *Documento::getNombre() const
{
    return nombre;
}

void Documento::setNombre(char *newNombre)
{
    nombre = newNombre;
}

char *Documento::getFechaNac() const
{
    return fechaNac;
}

void Documento::setFechaNac(char *newFechaNac)
{
    fechaNac = newFechaNac;
}

char *Documento::getNacionalidad() const
{
    return nacionalidad;
}

void Documento::setNacionalidad(char *newNacionalidad)
{
    nacionalidad = newNacionalidad;
}

char *Documento::getEstadoCivil() const
{
    return estadoCivil;
}

void Documento::setEstadoCivil(char *newEstadoCivil)
{
    estadoCivil = newEstadoCivil;
}

char *Documento::getMotivoViaje() const
{
    return motivoViaje;
}

void Documento::setMotivoViaje(char *newMotivoViaje)
{
    motivoViaje = newMotivoViaje;
}

int Documento::getTipo() const
{
    return tipo;
}

void Documento::setTipo(int newTipo)
{
    tipo = newTipo;
}

int Documento::getDuracionEstadia() const
{
    return duracionEstadia;
}

void Documento::setDuracionEstadia(int newDuracionEstadia)
{
    duracionEstadia = newDuracionEstadia;
}

char *Documento::getPaisResidencia() const
{
    return paisResidencia;
}

void Documento::setPaisResidencia(char *newPaisResidencia)
{
    paisResidencia = newPaisResidencia;
}

int Documento::getAcompañantes() const
{
    return acompañantes;
}

void Documento::setAcompañantes(int newAcompañantes)
{
    acompañantes = newAcompañantes;
}

std::ostream& operator<<(std::ostream& os, const Documento& documento) {
    os << "Nombre: " << documento.nombre << "\n"
       << "Fecha de Nacimiento: " << documento.fechaNac << "\n"
       << "Nacionalidad: " << documento.nacionalidad << "\n"
       << "Estado Civil: " << documento.estadoCivil << "\n"
       << "Motivo de Viaje: " << documento.motivoViaje << "\n"
       << "Tipo: " << documento.tipo << "\n"
       << "Duracion de Estadia: " << documento.duracionEstadia << "\n"
       << "Pais de Residencia: " << documento.paisResidencia << "\n"
       << "Acompanantes: " << documento.acompañantes << "\n";
    return os;

}

void Documento::LlenarNombre()
{

    // Definición de los valores posibles para cada vector
    const char* fechasNac[] = {"01/01/1980", "05/03/1990", "12/12/1975", "23/07/1985", "10/10/1992"};
    const char* nacionalidades[] = {"Argentina", "Brasil", "Chile", "Uruguay", "Paraguay"};
    const char* estadosCivil[] = {"Soltero", "Casado", "Divorciado", "Viudo"};
    const char* motivosViaje[] = {"Turismo", "Negocios", "Estudios", "Trabajo", "Visita Familiar"};
    const char* paisesResidencia[] = {"Argentina", "Brasil", "Chile", "Uruguay", "Paraguay"};
    const int NUM_VALUES = 5;  // Número de valores en los vectores


    // Semilla para generar números aleatorios
    std::srand(std::time(nullptr));

    // Generar 10 personas aleatoriamente
      for (int i = 0; i < 10; ++i) {
        //USAR DESPUES PARA MOSTRAR LOS DATOS POR PERSONA
         const char* fechaNac = fechasNac[std::rand() % NUM_VALUES];
         const char* nacionalidad = nacionalidades[std::rand() % NUM_VALUES];
         const char* estadoCivil = estadosCivil[std::rand() % (sizeof(estadosCivil) / sizeof(estadosCivil[0]))];
         const char* motivoViaje = motivosViaje[std::rand() % NUM_VALUES];
         const char* paisResidencia = paisesResidencia[std::rand() % NUM_VALUES];
        }
}

Documento::Documento()
{

}
