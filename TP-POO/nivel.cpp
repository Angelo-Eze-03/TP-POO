#include "nivel.h"

int Nivel::getValorNivel() const
{
    return valorNivel;
}

void Nivel::setValorNivel(int newValorNivel)
{
    valorNivel = newValorNivel;
}

void Nivel::setNacionalidad()
{
    const char *newNcacionalidad[2]={"Arngentino/a","Ingles/a"};//esto luego se convertira en datos de un archivo
    for (int i=0; i<getCantDatos(); i++)
    {
        this->nacionalidad[i]=newNcacionalidad[i];
    }
}

void Nivel::setFechaNac()
{
    const char *newFechaNac[2]={"03/03/90","03/03/01"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->fechaNac[i]=newFechaNac[i];
    }
}

void Nivel::setTipoVisita()
{
    const char *newTipoVisita[3]={"Aldeano","Refugiado Politico", "Diplomatico"};
    for (int i=0; i<getCantDatos(); i++)
    {
        this->tipoVisita[i]=newTipoVisita[i];
    }
}

void Nivel::setDuracionEstadia()
{
    if (getValorNivel()==1)
    {
        this->duracionEstadia[0]=3;
    }
    else if(getValorNivel()==2)
    {
        this->duracionEstadia[1]=6;
    }
    else if(getValorNivel()==3)
    {
        this->duracionEstadia[2]=12;
    }
    else if(getValorNivel()==4)
    {
        this->duracionEstadia[3]=24;
    }
    else if(getValorNivel()==5)
    {
        this->duracionEstadia[4]=48;
    }
}

const char *Nivel::getNacionalidad(int indice)
{
    return this->nacionalidad[indice];
}

const char *Nivel::getFechaNac(int indice)
{
    return this->fechaNac[indice];
}

const char *Nivel::getTipoVisita(int indice)
{
    return this->tipoVisita[indice];
}

int Nivel::getDuracionEstadia(int nivel)
{
    return this->duracionEstadia[nivel];
}


bool Nivel::verificacionNivel1(Documento documento)
{
    for(int i=0; i<getCantDatos(); i++)
    {
        if(documento.getNacionalidad()==getNacionalidad(i) && documento.getFechaNac()==getFechaNac(i) && documento.getDuracionEstadia()<=getDuracionEstadia(getValorNivel())) //-> nose porque me tira error
        {
            for(int p=0; p<=3; p++)
            {
                if(documento.getTipo()==getTipoVisita(p))//aldeano - refugiado politico - Diplomatico
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return false;
}
int Nivel::getCantDatos() const
{
    return cantDatos;
}

Nivel::Nivel()
{

}

