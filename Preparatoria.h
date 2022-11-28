    #include <string>
    #include "Alumnos.h"

    // Heredamos todos los objetos a excepción del comentario

    class Preparatoria : public Alumnos{
    // Todos los objetos son heredados de la clase Alumnos, a excepción de extraoirdinario.
    private :
    string extraordinario;
    int hrsServicio, hrsProfe;

    public:
        Preparatoria (): Alumnos (Alumnos ()){}
Preparatoria (string matricula,string name,int espaniol,int matematicas, int ingles, int historia, int hrsServicio, int hrsProfe): Alumnos (Alumnos ( name, matricula, espaniol, matematicas, historia, ingles)){
} // Constructor

    void graduado (){
        if (promedio > 59 && hrsProfe > 39 && hrsServicio > 39)
            { cout << "El Alumno se puede graduar satisfactoriamente" ;}
        else { cout << "El alumno no se puede graduar" ;}
    } // Graduado

    void estadoCalis(){
    if (esp < 59){
        extraordinario += 1;}

    if (esp > 59 && esp < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}

    if (mate < 59){
        extraordinario += 1;}

    if (mate > 59 && mate < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}

    if (hist < 59){
        extraordinario = extraordinario + "Estas en extraoirdinario de historia \n";}

    if (hist > 59 && hist < 70){
        cout<<"La materia de historia corre riesgo de estar en extraoirdinario";}

    if (ing > 59 && hist < 70){
        cout<<"La materia de ingles corre riesgo de estar en extraoirdinario";}
    }// Estado calis

    };

