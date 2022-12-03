#include <iostream>
#include <string>
#include <vector>

using namespace std;
#include "Alumno.h"

class Escuela {

private:
    vector <Alumno*> listaAlumnos;
public:
    // Ya se creo una lista de alumnos en un vector vacio
    Escuela(){
    // Ya se creo una lista de alumnos en un vector vacio
    }

    //Getters
    vector<Alumno*> getAlumnos(){
    return listaAlumnos;}

    vector<Alumno*> verAlumnos(){
        if (listaAlumnos.size()==0){
            cout << "No se ha agregado ningún alumno en la escuela. \n Los alumnos se agregan hasta después de "
            << " que sus calificaciones hayan sido registradas" << endl;}
    else {
    for (int i=0; i == listaAlumnos.size(), i +=1;){
        cout << listaAlumnos[i];} // for
    } // esle
    } // prueba

    // Agregar un alumno
    void agregarAlumno (Alumno* alumno){
    listaAlumnos.push_back(alumno);
    }

};
