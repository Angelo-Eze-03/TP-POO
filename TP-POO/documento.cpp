#include "documento.h"


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



void Documento::setDuracionEstadia(int newDuracionEstadia)
{
    duracionEstadia = newDuracionEstadia;
}
int Documento::getDuracionEstadia() const
{
    return duracionEstadia;
}
char *Documento::getPaisResidencia() const
{
    return paisResidencia;
}

void Documento::setPaisResidencia(char *newPaisResidencia)
{
    paisResidencia = newPaisResidencia;
}



bool Documento::getAcompanantes() const
{
    return acompanantes;
}

void Documento::setAcompanantes(bool newAcompanantes)
{
    acompanantes = newAcompanantes;
}

char *Documento::getTipo() const
{
    return tipo;
}

void Documento::setTipo(char *newTipo)
{
    tipo = newTipo;
}

//Generadores Correctos para el nivel 1




void Documento::setTipoVisitaC()
{
    char *newTiposVisitaC[3]={"Aldeano","Refugiado Politico", "Diplomatico"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->tiposVisitaC[i]=newTiposVisitaC[i];
    }
}
void Documento::setNacionalidadesC()
{
    char *newnacionalidadesC[SIZE]={"Arngentina","Inglaterra"};//esto luego se convertira en datos de un archivo
    for (int i=0; i<getCantDatos(); i++)
    {
        this->nacionalidadesC[i]=newnacionalidadesC[i];
    }
}

void Documento::setFechasNacC()
{
    char *newFechaNac[SIZE]={"03/03/90","03/03/01"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->fechasNacC[i]=newFechaNac[i];
    }
}

void Documento::setDuracionEstadiaC()
{
   this->duracionEstadiaC[0]=3;//Maximo
    this->duracionEstadiaC[1]=6;//Maximo
    this->duracionEstadiaC[2]=12;//Maximo
    this->duracionEstadiaC[3]=24;//Maximo
    this->duracionEstadiaC[4]=48;//Maximo
}

void Documento::setEstadoCivilC()
{
    char *newEstadosCivilC[SIZE]={"Soltero/a","Casado/a"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->estadosCivilC[i]=newEstadosCivilC[i];
    }
}

char *Documento::getNacionalidadesC(int indice)
{
    char * Nac=this->nacionalidadesC[indice];
    return Nac;
}

char *Documento::getFechasNacC(int indice)
{
    return  this->fechasNacC[indice];
}

char *Documento::getTipoVisitaC(int indice)
{
    return this->tiposVisitaC[indice];
}

int Documento::getDuracionEstadiaC(int indice)
{
    return this->duracionEstadiaC[indice];
}

char *Documento::getEstadoCivilC(int indice)
{
    return this->estadosCivilC[indice];
}


//Generadores Incorrectos para el nivel 1
void Documento::setNacionalidadesI()
{
     char *newNacionalidadesI[SIZE]={"Palestina","Rusia"};//esto luego se convertira en datos de un archivo
    for (int i=0; i<getCantDatos(); i++)
    {
        this->nacionalidadesI[i]=newNacionalidadesI[i];
    }
}

void Documento::setFechasNacI()
{
    char *newFechasNacI[SIZE]={"03/03/55","03/03/53"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->fechasNacI[i]=newFechasNacI[i];
    }
}

void Documento::setTipoVisitaI()
{
    this->tiposVisitaI="Revolucionario";//no puede entrar
}

void Documento::setDuracionEstadiaI()
{
    this->duracionEstadiaI[0]=0;//menos de un dia
    this->duracionEstadiaI[1]=49;//mas de 48 dias
}

void Documento::setEstadoCivilI()
{

}

void Documento::setDatos()//completar datos
{
    //nivel 1
    setDuracionEstadiaC();
    setDuracionEstadiaI();
    setFechasNacC();
    setFechasNacI();
    setNacionalidadesC();
    setNacionalidadesI();
    setTipoVisitaC();
    setTipoVisitaI();
    setEstadoCivilC();
    setEstadoCivilI();
}

void Documento::gnerarDocumentoNivel1(int nivel)
{
    setDatos();
    //en este metodo es donde surge la magia, porque podes variar en varias posibilidades
    std::srand(std::time(nullptr));
    if(rand()%2==0)
        {
            setNacionalidad(getNacionalidadesC(rand()%getCantDatos()));
            setFechaNac(getFechasNacC(rand()%getCantDatos()));
            setTipo(getTipoVisitaC(rand()%3));
            setDuracionEstadia((rand()%getDuracionEstadiaC(nivel-1))+1);
            setEstadoCivil(getEstadoCivilC(rand()%getCantDatos()));
        }
        else
        {
            //hacer exactamente el mismo procedimiento que el de arriba pero con Incorrecto
        }

}



int Documento::getCantDatos() const
{
    return this->cantDatos;
}

Documento::Documento()
{

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
       << "Acompanantes: " << documento.acompanantes << "\n";
    return os;

}



void Documento::GenerarPersona(QLabel* label)
{
    // Definición de los valores posibles para cada vector
    const char* fechasNac[] = {"01/01/1980", "05/03/1990", "12/12/1975", "23/07/1985", "10/10/1992"};
    const char* nacionalidades[] = {"Argentina", "Brasil", "Chile", "Uruguay", "Paraguay"};
    const char* estadosCivil[] = {"Soltero", "Casado", "Divorciado", "Viudo"};
    const char* motivosViaje[] = {"Turismo", "Negocios", "Estudios", "Trabajo", "Visita Familiar"};
    const char* paisesResidencia[] = {"Argentina", "Brasil", "Chile", "Uruguay", "Paraguay"};
    const char* tipos[] = {"Aldeano","Refugiado politico", "Diplomatico","Revolucionario"};
    bool admisible;
    const int NUM_VALUES = 5;  // Número de valores en los vectores


    // Semilla para generar números aleatorios
    std::srand(std::time(nullptr));
    QString datosPersona;


    // Generar 10 personas aleatoriamente
     for (int i = 0; i < 10; ++i) {
        //USAR DESPUES PARA MOSTRAR LOS DATOS POR PERSONA
         const char* fechaNac = fechasNac[std::rand() % NUM_VALUES];
         const char* nacionalidad = nacionalidades[std::rand() % NUM_VALUES];
         const char* estadoCivil = estadosCivil[std::rand() % (sizeof(estadosCivil) / sizeof(estadosCivil[0]))];
         const char* motivoViaje = motivosViaje[std::rand() % NUM_VALUES];
         const char* paisResidencia = paisesResidencia[std::rand() % NUM_VALUES];
         const char* tipo = tipos[std::rand() % 4];

         datosPersona += QString("Persona %1:\n").arg(i + 1);
         datosPersona += QString("Fecha de Nacimiento: %1\n").arg(fechaNac);
         datosPersona += QString("Nacionalidad: %1\n").arg(nacionalidad);
         datosPersona += QString("Estado Civil: %1\n").arg(estadoCivil);
         datosPersona += QString("Motivo del Viaje: %1\n").arg(motivoViaje);
         datosPersona += QString("País de Residencia: %1\n\n").arg(paisResidencia);
    }
    //label->setText(datosPersona);
}


