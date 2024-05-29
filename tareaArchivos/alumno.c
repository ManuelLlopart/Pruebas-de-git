#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>

void muestraAlumno(stAlumno a)
{
    printf("\n Legajo Nº %d", a.legajo);

    printf("\n Nombre : %s", a.nombre);

    printf("\n Apellido : %s", a.apellido);

    printf("\n Edad : %d", a.edad);

    printf("\n Anio de cursada : %d", a.anioCursada);

}
