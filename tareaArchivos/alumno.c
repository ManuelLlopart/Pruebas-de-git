#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>

void muestraAlumno(stAlumno a)
{
    printf("\n Legajo N: %d", a.legajo);

    printf("\n Nombre : %s", a.nombre);

    printf("\n Apellido : %s", a.apellido);

    printf("\n Edad : %d", a.edad);

    printf("\n Anio de cursada : %d", a.anioCursada);
    printf("\n\n ====================================================================\n\n");

}

stAlumno cargaAlumno()
{
    stAlumno a;

    printf("\n Ingrese numero de legajo: ");
    scanf("%d", &a.legajo);
    printf("\n Ingrese Nombre: ");
    fflush(stdin);
    gets(a.nombre);
    printf("\n Ingrese Apellido: ");
    fflush(stdin);
    gets(a.apellido);
    printf("\n Ingrese año de cursada: ");
    scanf("%d", &a.anioCursada);
    printf("\n Ingrese edad: ");
    scanf("%d", &a.edad);
    return a;
}
