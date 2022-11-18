#include <iostream>
using namespace std;
#include "Primaria.h"
#include "Secundaria.h"
#include "Preparatoria.h"



void menu(){
    int op = 0;
    int profesor = 0;
    string contrasena= "";
    cout << "Selecciona si eres alumno o profesor" << "\n 1.- Alumno \n 2.- Mestro \n";
    cin >> op;
// La contraseña se les hixó llegar a los maestros por medio de un correo
// La contraseña es 1234.
    if (op == 2){

    if (contrasena == "1234")
    {
    profesor = 1;}

else {
    while (contrasena != "1234"){
    cout << "Introduce la contraseña \n";
    cin >> contrasena;
    } // While
    profesor = 1;
} // Else

    }// Aqui termina el ciclado de contraseña

    if (profesor == 1){

 cout << "1.Mostrar calificaciones primaria. \n";
  cout <<"2. Mostrar calificaciones secundaria. \n";
  cout << "3. Mostrar las calificaciones preparatoria. \n";
  cout << "4. Cambiar calificaciones alumno primaria.\n";
  cout << "5. Cambiar calificaciones alumno secundaria. \n";
  cout << "6.Cambiar calificaciones alumno preparatoria. \n";
  cout<< "7.Salir \n";}

if (op == 1){
    cout << "1.Mostrar calificaciones primaria. \n";
    cout <<"2. Mostrar calificaciones secundaria. \n";
    cout << "3. Mostrar las calificaciones preparatoria. \n";
    }
}
int main ()
{
    // Declaramos todas las variables
int matematicas, espaniol, historia, ingles, horas;
int op = 0;
string nombre, aprobado, coment;
Primaria alumnoPR;
Secundaria alumnoS;
Preparatoria alumnoP;

do {

menu();
cin>> op;

switch (op){

// Asignamos las calificaciones
case 1 :
    alumnoPR.verCalificaciones();
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
    alumnoPR.setNombre(nombre);
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    alumnoPR.setEspaniol(espaniol);
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    alumnoPR.setMatematicas(matematicas);
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    alumnoPR.setIngles(ingles);
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    alumnoPR.setHistoria(historia);
    cout<< "Introduce el comentario \n";
    cin >> coment;
    alumnoPR.setComent(coment);
    break;
case 5:
    cout << "\n Introduce el nombre del alumno ";
    cin >> nombre;
    alumnoPR.setNombre(nombre);
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    alumnoPR.setEspaniol(espaniol);
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    alumnoPR.setMatematicas(matematicas);
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    alumnoPR.setIngles(ingles);
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    alumnoPR.setHistoria(historia);

    break;

case 6:
    cout << "\n Introduce el nombre del alumno ";
    cin >> nombre;
    alumnoP.setNombre(nombre);
    cout <<"\n Introduce la calificación de espaniol ";
    cin >> espaniol;
    alumnoP.setEspaniol(espaniol);
    cout <<"\n Introduce la calificación de matematicas ";
    cin >> matematicas;
    alumnoP.setMatematicas(matematicas);
    cout <<"\n Introduce la calificación de ingles ";
    cin >> ingles;
    alumnoP.setIngles(ingles);
    cout <<"\n Introduce la calificación de historia ";
    cin >> historia;
    alumnoP.setHistoria(historia);
    cout << "Introduce las horas de servicio que realizó el alumno \n";
    cin >> horas;
    alumnoP.setHorasS(horas);

    break;



} // Aquí termina el switch
} while (op != 7);
  return 0 ;
}
