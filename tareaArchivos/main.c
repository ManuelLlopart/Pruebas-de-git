#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>
#include "mock.h"

#define AR_ALUMNOS "alumnos.dat"

int main()
{
    stAlumno a[10];
    int vAlumn=0;
    stAlumno b;
    int i=0;
    for(i=0; i<2; i++)
    {
        a[i]=cargaAlumno();
        vAlumn++;

    }
    FILE* archi = fopen(AR_ALUMNOS, "ab");
    if(archi)
    {
        fwrite(&a[1], sizeof(stAlumno), 1, archi);

        fclose(archi);
    }
    FILE* archivo = fopen(AR_ALUMNOS, "rb");
    if(archi)
    {

        while(fread(&b, sizeof(stAlumno), 1, archivo)>0);
        {
            muestraAlumno(b);

        }
        fclose(archi);
    }
//    for(i = 0; i<2; i++)
//    {
//        muestraAlumno(a[i]);
//    }



    return 0;
}
