#include "try.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;
//Inicializar la función texto_matriz que nos devolverá una matriz hecha de vectores que recibira como parametro el nombre en string del archivo .txt
vector < vector <int>> texto_matriz(string file_name){
    //Inicializamos nuestra matriz vacia 
    vector < vector <int>> matriz1;
    ifstream myfile1(file_name);
    //Leer y extraer el largo de la matriz1 desde el archivo .txt
    if (myfile1.is_open()){
        int N1;
        myfile1 >> N1;
        //Inicializar la Matriz de orden NxN con todos los elementos igual a 0
        for (int i1 = 0; i1 < N1; i1++){
            vector <int> fila;
            for (int j1 = 0; j1 < N1; j1++){
                fila.push_back(0);
            }
        matriz1.push_back(fila);
        }

        //Recorrer el archivo .txt y obtener las coordenadas de linea
        while (myfile1.peek() != EOF){
            int y1;
            int x1;
            myfile1 >> x1 >> y1;
            //Reemplazar dicha coordenada con un 1
            matriz1[x1][y1] = 1;

    }
    }
//Retorna la matriz1 al programa principal
return matriz1;
}


//Inicializar la función sumar que nos devolverá una matriz hecha de vectores, que recibira como parametro dos matrices creadas con vectores
vector < vector <int>> sumar(vector < vector <int>> M1, vector < vector <int>> M2){
    //Creamos una matriz nueva que llenaremos más adelante 
    vector < vector <int>> MF;
    //recorremos las matrices sabiendo que tienes el mismo orden
    for (int i = 0; i < M1.size(); i++){
        vector <int> fila;
        for (int j = 0; j < M1[i].size(); j++){
            //Si en alguna de las matrices, existe un 1 en la posición que se señala
            if (M1[i][j]==1 || M2[i][j]==1){ 
                //Si es así, se agrega un 1
                fila.push_back(1);
            }
            //Si no, entonces se agrega un 0
            else{
                fila.push_back(0);
            }
        }
    MF.push_back(fila);
    }
//Retorna la matriz final ya sumada    
return MF;
}


//Inicializar una funcioón para mostrar las matrices en la terminal
void mostrar_matriz(vector < vector <int>> M){
    for (int i = 0; i < M.size(); i++){
      for (int j = 0; j < M[i].size(); j++){
        cout << M[i][j] << " ";
        }
      cout << "\n";
    }
}

//Inicializar una función que recorra una matriz hecha de vectores y cree un archivo de texto con las coordenadas (Y.X) de los 1's dispuestos en la matriz
void crear_archivo(vector< vector<int>> matriz, string nombre){
    ofstream output_file;
    //Abrimos en nuevo archivo de texto que declaramos
    output_file.open(nombre,ios::out);
    //Agregamos en tamaño de la matriz
    output_file<<matriz.size()<<"\n";
    
    //Recorremos la matriz que queremos pasar a coordenadas
    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz[i].size(); j++){
            //si en la posición que recorremos hay un 1 esta coordenada será agregada al archivo de texto 
            if (matriz[i][j]==1){ 
                output_file << i << " " << j << "\n";
            }
        }
    }
    //Cerramos el archivo
    output_file.close();
}