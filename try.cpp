#include "try.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;

vector < vector <int>> texto_matriz(string file_name){
    vector < vector <int>> matriz1;
    string line;
    ifstream myfile1(file_name);
    //Extraer el largo de la Matriz1 desde el archivo .txt
    if (myfile1.is_open()){
        int N1;
        myfile1 >> N1;
        cout << N1 << endl;
        //Inicializar la Matriz de orden NxN con todos los elementos igual a 0
        /*int matriz1[N1][N1];*/
        for (int i1 = 0; i1 < N1; i1++){
            vector <int> fila;
            for (int j1 = 0; j1 < N1; j1++){
                fila.push_back(0);
                /*matriz1[i1][j1]=0;*/
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

return matriz1;
}



vector < vector <int>> sumar(vector < vector <int>> M1, vector < vector <int>> M2){
    vector < vector <int>> MF;

    for (int i = 0; i < M1.size(); i++){
        vector <int> fila;
        for (int j = 0; j < M1[i].size(); j++){
            if (M1[i][j]==1 || M2[i][j]==1){
                fila.push_back(1);
            }
            else{
                fila.push_back(0);
            }
        
        }
    MF.push_back(fila);
    }
return MF;
}

void mostrar_matriz(vector < vector <int>> M){
    for (int i = 0; i < M.size(); i++){
      for (int j = 0; j < M[i].size(); j++){
        cout << M[i][j] << " ";
        }
      cout << "\n";
    }



}