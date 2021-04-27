#include <iostream>
#include <fstream>
#include "try.h"
#include <string>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
//Usar la funcion texto_matriz para crear la matriz del "input1.txt"
  vector < vector <int>> matriz_1 = texto_matriz("input1.txt");
  //Imprimir la matriz1 en pantalla con la funcion mostrar matriz
  cout << "matriz1" << "\n";
  mostrar_matriz(matriz_1);
  
  cout << "\n";

//Usar la funcion texto_matriz para crear la matriz del "input2.txt"  
  vector < vector <int>> matriz_2 = texto_matriz("input2.txt");
  //Imprimir la matriz2 en pantalla con la funcion mostrar matriz
  cout << "matriz2" << "\n";
  mostrar_matriz(matriz_2);

  cout << "\n" ;

//Sumar matriz1 con matriz2 con la funcion sumar
  vector < vector <int>> matriz_final = sumar(matriz_1,matriz_2);
  //Imprimir la matriz_final en pantalla con la funcion mostrar matriz
  cout << "matriz_final" <<"\n";
  mostrar_matriz(matriz_final);

//Crear el archivo de texto pedido con la funcion crear_archivo
  crear_archivo(matriz_final,"output1.txt");

  return 0;
}