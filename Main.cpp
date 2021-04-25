#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
 ///////////////////////////////////////////////////////////////////////////////////////////////
 //                          MATRIZ DEL ARCHIVO INPUT1.TXT                                    //
 ///////////////////////////////////////////////////////////////////////////////////////////////
  string line;
  ifstream myfile1("input1.txt");
  if (myfile1.is_open())
  {
    //Extraer el largo de la Matriz1 desde el archivo .txt
    int N1;
    myfile1 >> N1;
    cout << N1 << endl;

    //Inicializar la Matriz de orden NxN con todos los elementos igual a 0
    int matriz1[N1][N1];
    for (int i1 = 0; i1 < N1; i1++){
      for (int j1 = 0; j1 < N1; j1++){
        matriz1[i1][j1]=0;
      }
    }

    //Recorrer el archivo .txt y obtener las coordenadas de linea
    while (myfile1.peek() != EOF){
      int y1;
      int x1;
      myfile1 >> x1 >> y1;
      //Reemplazar dicha coordenada con un 1
      matriz1[x1][y1] = 1;
    }

    //Mostrar la Matriz creada en la terminal 
    for (int i1 = 0; i1 < N1; i1++){
      for (int j1 = 0; j1 < N1; j1++){
        cout << matriz1[i1][j1] << " ";
        }
      cout << "\n";
    }

    myfile1.close();
  }

 ///////////////////////////////////////////////////////////////////////////////////////////////
 //                          MATRIZ DEL ARCHIVO INPUT2.TXT                                    //
 ///////////////////////////////////////////////////////////////////////////////////////////////
  string line;
  ifstream myfile2("input2.txt");
  if (myfile2.is_open())
  {
    //Extraer el largo de la Matriz1 desde el archivo .txt
    int N2;
    myfile2 >> N2;
    cout << N2 << endl;

    //Inicializar la Matriz de orden NxN con todos los elementos igual a 0
    int matriz2[N2][N2];
    for (int i2 = 0; i2 < N2; i2++){
      for (int j2 = 0; j2 < N2; j2++){
        matriz2[i2][j2]=0;
      }
    }

    //Recorrer el archivo .txt y obtener las coordenadas de linea
    while (myfile2.peek() != EOF){
      int y2;
      int x2;
      myfile2 >> x2 >> y2;
      //Reemplazar dicha coordenada con un 1
      matriz2[x2][y2] = 1;
    }

    //Mostrar la Matriz creada en la terminal 
    for (int i2 = 0; i2 < N1; i2++){
      for (int j2 = 0; j2 < N2; j2++){
        cout << matriz2[i2][j2] << " ";
        }
      cout << "\n";
    }

    myfile2.close();
  }


  else
    cout << "Unable to open file";

  return 0;
}