#include <iostream>
using namespace std;
#include "Primaria.h"
#include "Secundaria.h"
#include "Preparatoria.h"
#include "Escuela.h"

int menu(){
    int op1, op2;
    string contrasena= "";

cout << "Selecciona si eres alumno o profesor" << "\n 1.- Alumno \n 2.- Maestro \n"<<  endl;
cin >> op1;

while (op1 < 1 || op1 > 2){
    cout << "Esta es una opción inválida" << endl;
    cout << "Selecciona si eres alumno o profesor" << "\n 1.- Alumno \n 2.- Maestro \n"<<  endl;
    cin >> op1;} // While

if (op1 == 2){
    cout << "Introduce la contraseña" << endl;
    cin >> contrasena;
    while (contrasena != "1234"){
        cout << "Introduce la contraseña" << endl;
        cin >> contrasena;}
    cout <<  "1. Mostrar calificaciones primaria. \n";
    cout << "2. Mostrar calificaciones secundaria. \n";
    cout << "3. Mostrar las calificaciones preparatoria. \n";
    cout << "4. Cambiar calificaciones alumno primaria.\n";
    cout << "5. Cambiar calificaciones alumno secundaria. \n";
    cout << "6. Cambiar calificaciones alumno preparatoria. \n";
    cout<< "7. Salir \n";
    cin >> op2;
    return op2;
}// if maestros

if (op1 == 1){
    cout << "1. Mostrar calificaciones primaria. \n";
    cout << "2. Mostrar calificaciones secundaria. \n";
    cout << "3. Mostrar las calificaciones preparatoria. \n";
    cout << "4. Salir"<<endl;
    cin >>  op2;
    if (op2 == 4){
        op2=7;
        return op2;}
    while (op2 < 1 || op2 > 4){
    cout << "Esta es una opción inválida, vuelve a introducir la opción" << endl;
    cout << "1. Mostrar calificaciones primaria. \n";
    cout << "2. Mostrar calificaciones secundaria. \n";
    cout << "3. Mostrar las calificaciones preparatoria. \n";
    cin >> op2;}
    return op2;
} // alumnos
} // Aqui termina el menu


int main (){
    // Declaramos todas las variables
int matematicas, espaniol, historia, ingles, hrsServicio, hrsProfe;
int profesor, op;
string nombre, aprobado, coment, matricula;

Secundaria alumnoS;
Preparatoria alumnoP;
Primaria alumno1;
//Escuela tecDeMonterrey;

do {
op = menu();
switch (op){

// Asignamos las calificaciones
case 1 :

    alumno1.verCalificaciones();
    break;

case 2:
    alumnoS.verCalificaciones();
    alumnoS.estadoCalis();
    break;

case 3:
    alumnoP.verCalificaciones();
    alumnoP.estadoCalis();
    break;

case 4:
    cout << "\n Introduce el nombre del alumno ";
    cin >> nombre;
    cout << "\n Introduce la matricula del alumno ";
    cin >> matricula;
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    cout<< "Introduce el comentario \n";
    cin >> coment;
    alumno1 = Primaria(matricula,nombre, espaniol,matematicas,ingles,historia,coment);
    alumno1.verCalificaciones();
    //tecDeMonterrey.agregarAlumno(alumno1);
    break;

case 5:
    cout << "\n Introduce el nombre del alumno ";
    cin >> nombre;
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    alumnoS = Secundaria(matricula,nombre, espaniol,matematicas,ingles,historia);
    alumnoS.verCalificaciones();
    //tecDeMonterrey.agregarAlumno(alumnoS);
    break;

case 6:
    cout << "\n Introduce el nombre del alumno ";
    cin >> nombre;
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    cout << "Introduce las horas de servicio que realizó el alumno \n";
    cin >> hrsServicio;
    cout << "Introduce las horas de experiencia profecional que realizó el alumno \n";
    cin >> hrsProfe;
    alumnoP = Preparatoria (matricula,nombre,espaniol,matematicas,ingles,historia,hrsServicio,hrsProfe);
    alumnoP.verCalificaciones();
    alumnoP.estadoCalis();
    alumnoP.graduado();
    //tecDeMonterrey.agregarAlumno(alumnoP);
    break;
} // Aquí termina el switch
}
while (op!=7);

  return 0 ;
}
