#include <iostream>
#include<fstream>

using namespace std;

void guardar();


int main()
{   guardar();

    
     
    


        return 0;
}

void guardar(){

    ofstream puntuacion;


    puntuacion.open("Juego.txt", ios:: out);

    if(puntuacion.fail()){

        cout << "No se pudo abri el archivo puntuacion. ";
        exit(1);

    }

    puntuacion << "\n Juego X y O... ";

    puntuacion.close();
} //HOLA...