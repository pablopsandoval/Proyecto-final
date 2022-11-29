    #include <string>
    #include "Alumnos.h"
    // Heredamos todos los objetos a excepción del comentario

class Primaria : public Alumnos{
private:
    string coment;
    public:
Primaria (): Alumnos (Alumnos ()){}
Primaria (string matricula,string name,int espaniol,int matematicas, int ingles, int historia, string comentario ): Alumnos (Alumnos ( name, matricula, espaniol, matematicas, historia, ingles)){
coment= comentario;}


void setComentario(string comentario){
    coment=comentario;}

string getComentario (){
return coment;}


};
