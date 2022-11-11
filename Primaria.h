    #include <string>
    // Se van a realizar muchos cambios para la siguiente entrega, ya que hay muchas dudas que le tengo que preguntar al profesor
    // Pero no puedo dejar el proyecto incompleto.
    class Primaria {
    // Definimos los objetos y los objetos.
    private :

      int esp, mate, hist, ing;
      string comentario;
      string aprobado, nombre;
      float promedio;

    public:

    Primaria (){
    esp = 0; mate=0; hist=0; ing=0; comentario= ""; nombre= "";
    promedio=0;}
    // Asignamos y devolvemos el nombre.
    void setNombre (string nom){
    nombre = nom;}

    // Asignamos y devolvemos la calificación de español
      void setEspaniol (int espaniol){
         esp = espaniol ;
      }
    // Asignamos y devolvemos la calificación de mate.
    void setMatematicas (int matematicas){
    mate=matematicas;}
    // Asignamos y devolvemos el valor de ingles
    void setIngles (int ingles){
    ing=ingles;}
    //Asignamos y devolvemos el valor de historia.
    void setHistoria (int historia){
    hist=historia;}
    void setComent (string coment){
    comentario=coment;}

    void verCalificaciones(){
     cout<< "El nombre del alumno es: \t " << nombre;
        cout <<"\n La calificación del alumno en español es de "<<  esp;
        cout <<"\n La calificación de matemáticas es de " << mate;
        cout <<"\n La calificación de ingles es de " << ing;
        cout <<"\n La calificación de historia es de " << hist;
        float promedio = (mate+ing+esp+hist) / 4;
        cout << "\n El promedio de las calificaciones del alumno es de "<< promedio;
        if (promedio < 59){
            cout << "\n El alumno reprobo \n ";}
        else {
            cout << "\n El alumno aprobo\n";}
        cout<< comentario;
    }// Vwe calis
    };
