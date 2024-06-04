#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct {
     int legajo;
     char nombre [30];
     char apellido [30];
     int edad;
     int anioCursada;

}stAlumno;

void muestraAlumno(stAlumno a);
stAlumno cargaAlumno();

#endif // ALUMNO_H_INCLUDED
