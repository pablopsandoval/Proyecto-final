    #include <string>
    // Se van a realizar muchos cambios para la siguiente entrega, ya que hay muchas dudas que le tengo que preguntar al profesor
    // Pero no puedo dejar el proyecto incompleto.
    class Preparatoria {
    // Definimos los objetos y los objetos.
    private :

      int esp, mate, hist, ing, horas;
      string comentario;
      string aprobado, nombre;

    public:
      Preparatoria (){
    esp = 0; mate=0; hist=0; ing=0; comentario= ""; nombre= "";
    promedio=0; horas=0;}

    // Asignamos y devolvemos el nombre.
    void setNombre (string nom){
    nombre = nom;}

    // Asignamos y devolvemos la calificaci�n de espa�ol
      void setEspaniol (int espaniol){
         esp = espaniol ;
      }
    // Asignamos y devolvemos la calificaci�n de mate.
    void setMatematicas (int matematicas){
    mate=matematicas;}
    // Asignamos y devolvemos el valor de ingles
    void setIngles (int ingles){
    ing=ingles;}
    //Asignamos y devolvemos el valor de historia.
    void setHistoria (int historia){
    hist=historia;}

    void setHorasS(int hor){
    horas=hor;}
    float promedio = (mate+ing+esp+hist) / 4;
    void verCalificaciones(){
     cout<< "El nombre del alumno es: \t " << nombre;
        cout <<"\n La calificaci�n del alumno en espa�ol es de "<<  esp;
        cout <<"\n La calificaci�n de matem�ticas es de " << mate;
        cout <<"\n La calificaci�n de ingles es de " << ing;
        cout <<"\n La calificaci�n de historia es de " << hist;
        cout << "\n El promedio de las calificaciones del alumno es de "<< promedio;
        if (esp > 59 && mate > 59 && hist < 59 && ing > 59 && horas >= 40){
            cout << "\n El alumno se puede graduar sin ning�n incombeniente \n   ";}
        else {
            cout << "\n El alumno no se puede graduar ";}
    } // Ver calis

    void estadoCalis(){
    if (esp << 59){
        cout << "Estas en extraoirdinario";
    }
    if (esp >> 59 && esp < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}

    if (mate << 59){
        cout << "Estas en extraoirdinario";}
    if (mate >> 59 && mate < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}

    if (hist << 59){
        cout << "Estas en extraoirdinario";}

    if (hist >> 59 && hist < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}

    if (ing >> 59 && ing < 70){
        cout<<"La materia corre riesgo de estar en extraoirdinario";}
    }// Estado calis

    };

