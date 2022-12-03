    #include <string>
    #include "Alumno.h"
    // Heredamos todos los objetos a excepción del comentario

class Primaria : public Alumno{
private:
    string coment;
    public:
Primaria (): Alumno (Alumno ()){}
Primaria (string matricula,string name,int espaniol,int matematicas, int ingles, int historia ): Alumno (Alumno ( name, matricula, espaniol, matematicas, historia, ingles)){}


void setComentario(string comentario){
    coment=comentario;}

string getComentario (){
return coment;}


};
