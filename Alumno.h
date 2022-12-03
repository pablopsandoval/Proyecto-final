#ifndef Alumno_H
#define Alumno_H
#include <iostream>
using namespace std;
#include <sstream>


class Alumno {
    protected:
        int esp, mate, hist, ing;
        string aprobado, nombre, clave;
        float promedio;

    public:
        Alumno (){
        nombre="";
        clave="";
        esp=0;
         mate=0;
         hist=0;
         ing=0;
         promedio=0;
        }
        Alumno (string name, string matricula, int espaniol,int  matematicas, int  historia, int ingles)
        {nombre=name;
        clave=matricula;
        esp=espaniol;
         mate=matematicas;
         hist=historia;
         ing=ingles;
         promedio= (esp+mate+hist+ing)/4;}


// setters
void setNombre(string name){
    nombre=name;}

void setMatricula(string matricula){
    clave=matricula;}

void setEspaniol(int espaniol){
    esp=espaniol;}

void setMate(int matematicas){
    mate=matematicas;}

void setHistoria(int historia){
    hist=historia;}

void setIngles(int ingles){
    ing=ingles;}

// getters
string getNombre(){
    return nombre;}

string getMatricula(){
    return clave;}

int getEspaniol(){
    return esp;}

int getMate(){
    return mate;}

int getHistoria(){
    return hist;}

int getIngles(){
    return ing;}

float getPromedio(){
promedio = (esp+mate+hist+ing)/4;
return promedio;}

// Métodos externos
void verCalificaciones(){
        if (promedio == 0){
            cout << "Las calificaciones todavía no se suben \n";
            cout << "Las calificaciones tienen que ser subidas desde el apartado maestros" << endl;
            cout << "----------------------------------------------------#" << endl;
}
    else {
     cout<< "El nombre del alumno es: \t " << nombre;
        cout <<"\n La calificación del alumno en español es de "<<  esp;
        cout <<"\n La calificación de matemáticas es de " << mate;
        cout <<"\n La calificación de ingles es de " << ing;
        cout <<"\n La calificación de historia es de " << hist;
        cout << "\n El promedio de las calificaciones del alumno es de "<< promedio;
        if (promedio < 59){
            cout << "\n El alumno reprobo \n ";}
        else {
            cout << "\n El alumno aprobo\n";}
        cout << "----------------------------------------------------#" << endl;

    } // Las calificaciones ya fueron subidas
    }// Ver calificación



}; // Termina la clase
#endif

