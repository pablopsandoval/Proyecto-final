    #include <string>
    #include "Alumnos.h"

    // Heredamos todos los objetos a excepción del comentario

    class Secundaria : public Alumnos{
    // Todos los objetos son heredados de la clase Alumnos, a excepción de extraoirdinario.
    private :
    string extraordinario;

    public:
        Secundaria (): Alumnos (Alumnos ()){}
Secundaria (string matricula,string name,int espaniol,int matematicas, int ingles, int historia): Alumnos (Alumnos ( name, matricula, espaniol, matematicas, historia, ingles)){
}

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
        extraordinario = extraordinario + "Estas en extraoirdinario de historia";}

    if (hist > 59 && hist < 70){
        cout<<"La materia de historia corre riesgo de estar en extraoirdinario";}

    if (ing > 59 && hist < 70){
        cout<<"La materia de ingles corre riesgo de estar en extraoirdinario";}
    }// Estado calis

    };

