#ifndef TRY_H
#define TRY_H
#include <vector>
#include <string>
using namespace std;

vector < vector <int>> texto_matriz(string file_name);
vector < vector <int>> sumar(vector < vector <int>> M1, vector < vector <int>> M2);
void mostrar_matriz(vector < vector <int>> M);
void crear_archivo(vector< vector<int>> matriz, string nombre);


#endif