#ifndef Alumno.h
#define Alumno.h
#include <iostream>
using namespace std;


class Alumnos {
    protected:
        int esp, mate, hist, ing;
        string aprobado, nombre, clave;
        float promedio;

    public:
        Alumnos (){
        nombre="";
        clave="";
        esp=0;
         mate=0;
         hist=0;
         ing=0;
         promedio=0;
        }
        Alumnos (string name, string matricula, int espaniol,int  matematicas, int  historia, int ingles)
        {nombre=name;
        clave=matricula;
        esp=espaniol;
         mate=matematicas;
         hist=historia;
         ing=ingles;
         promedio= (esp+mate+hist+ing)/4;}


// No necesitamos setters porque utilizamos el constructor, y en el main pedimos los datos necesarios.

// Para hacer m�s sencillo no utilizamos getters y lo cambiamos por VerCalis
void verCalificaciones(){
        if (promedio == 0){
            cout << "Las calificaciones todav�a no se suben \n";}
    else {
     cout<< "El nombre del alumno es: \t " << nombre;
        cout <<"\n La calificaci�n del alumno en espa�ol es de "<<  esp;
        cout <<"\n La calificaci�n de matem�ticas es de " << mate;
        cout <<"\n La calificaci�n de ingles es de " << ing;
        cout <<"\n La calificaci�n de historia es de " << hist;
        cout << "\n El promedio de las calificaciones del alumno es de "<< promedio;
        if (promedio < 59){
            cout << "\n El alumno reprobo \n ";}
        else {
            cout << "\n El alumno aprobo\n";}
    } // Las calificaciones ya fueron subidas
    }// Ver calificaci�n



}; // Termina la clase
#endif


