#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>
#include "mock.h"
#include <time.h>

#define DIM 30
#define AR_ALUMNOS "alumnos.dat"

void leerArchivoAlumnos(char nombreArchivo[]);
void arregloAlum2archivo(stAlumno a[],int v, char nombreArchivo[]);
int cantidadArchivo(char nombreArchivo[]);



int main()
{




    stAlumno alumnos[DIM];
    int vAlumnos = 0;
    int i;
    for(i=0; i<10; i++)
    {
        alumnos[i].legajo=getFileNumber();
        alumnos[i].anioCursada=getAnioCursada();
        getLastName(alumnos[i].apellido);
        getName(alumnos[i].nombre);
        alumnos[i].edad=getEdad();
        vAlumnos++;
    }
    i=0;
    while(i<vAlumnos)
    {
        muestraAlumno(alumnos[i]);
        i++;
    }
    arregloAlum2archivo(alumnos, vAlumnos, AR_ALUMNOS);
    printf("\n Momento clave\n");
    leerArchivoAlumnos(AR_ALUMNOS);
    printf("\n Hay %d alumnos cargados", cantidadArchivo(AR_ALUMNOS));

    return 0;
}

void arregloAlum2archivo(stAlumno a[],int v, char nombreArchivo[])
{
    FILE* archi=fopen(nombreArchivo, "wb");

    int i;
    if(archi)
    {
        for(i=0;i<v;i++)
        {
            fwrite(&a[i], sizeof(stAlumno), 1, archi);
        }
        fclose(archi);
    }
}

void leerArchivoAlumnos(char nombreArchivo[])
{
    stAlumno a;
    FILE* archi=fopen(nombreArchivo, "rb");
    if(archi)
    {
       while(fread(&a, sizeof(stAlumno), 1, archi)>0)
       {
        muestraAlumno(a);
       }
        fclose(archi);
    }
}

int cantidadArchivo(char nombreArchivo[])
{
    int cantidad=0;
    FILE* archi=fopen(nombreArchivo, "rb");
    if(archi)
    {
        fseek(archi, 0, SEEK_END);
        cantidad= ftell(archi)/sizeof(stAlumno);
    }
    return cantidad;
}
