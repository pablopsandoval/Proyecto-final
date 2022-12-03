    #include <string>
    #include "Alumno.h"

    // Heredamos todos los objetos a excepción del comentario

    class Preparatoria : public Alumno{
    // Todos los objetos son heredados de la clase Alumno, a excepción de extraoirdinario.
    private :
    int extraordinario;
    int hrsServicio, hrsProfe;

    public:
        Preparatoria (): Alumno (Alumno ()){extraordinario=0;}
Preparatoria (string matricula,string name,int espaniol,int matematicas, int ingles, int historia, int hrsServicio, int hrsProfe): Alumno (Alumno ( name, matricula, espaniol, matematicas, historia, ingles)){
} // Constructor

// Setters
void setHrsServicio(int hrsServ){
hrsServicio=hrsServ;}

void setHrsProfe(int hrsProfesional){
hrsProfe=hrsProfesional;}

// Getters
int getHrsServicio (){
return hrsServicio;}

int getHrsProfe (){
return hrsProfe;}

    void graduado (){
        if (promedio > 59 && hrsProfe > 39 && hrsServicio > 39)
            { cout << "El Alumno se puede graduar satisfactoriamente" ;}
        else { cout << "El alumno no se puede graduar" ;}
    } // Graduado

    void estadoCalis(){
        if (promedio == 0){
            cout<< "";
            cout << "----------------------------------------------------#" << endl;}
    else {
    if (esp < 59){
        extraordinario = extraordinario  + 1;}

    if (esp > 59 && esp < 70){
        cout<<"La materia de español corre riesgo de estar en extraoirdinario"<< endl;}

    if (mate < 59){
        extraordinario = extraordinario + 1;}

    if (mate > 59 && mate < 70){
        cout<<"La materia de matematicas corre riesgo de estar en extraoirdinario"<< endl;}

    if (hist < 59){
        extraordinario = extraordinario + 1;}

    if (hist > 59 && hist < 70){
        cout<<"La materia de historia corre riesgo de estar en extraoirdinario"<< endl;}

    if (ing < 59){
        extraordinario = extraordinario + 1;}
    if (ing > 59 && ing < 70){
        cout<<"La materia de ingles corre riesgo de estar en extraoirdinario"<< endl;
        }

    cout << "Estas en " << extraordinario << " extraordinarios" << endl;
    cout << "----------------------------------------------------#" << endl;
    }
    }// Estado calis

    };

