#include <iostream>
#include <string>
#include <vector>

using namespace std;
#include "Alumnos.h"

class Escuela {

private:
    vector <Alumnos*> listaAlumnos;
public:
    // Ya se creo una lista de alumnos en un vector vacio
    Escuela(){
    // Ya se creo una lista de alumnos en un vector vacio
    }

    //Getters
    vector<Alumnos*> getAlumnos(){
    return listaAlumnos;}

    // Agregar un alumno
    void agregarAlumno (Alumnos* alumno){
    listaAlumnos.push_back(alumno);
    }

};
