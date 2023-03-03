#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

// Integrantes: Samuel Acosta Ugarte y Nicolás Aguirre Villafañe 

// Compilacion: g++ -o main main.cpp
//CORRER TODOS LOS CASOS
//  main < case0.txt
//  main < case1.txt
//  main < case2.txt
//  main < case3.txt
//  main < case4.txt

void backTracking (vector<vector<int>> capturado, vector<vector<pair<int,int>>> padre, pair<int,int> nada) {
    //preparar esturctura de datos
    stack<pair<int,int>> pila;
    //Hacer push de la celda en la esquina s-i, que es el origen 0,0
    pair<int,int> par (0,0);
    pair<int,int> celdaActual;
    pila.push(par);

    for (int i = 0; i < capturado.size(); i++) {
        vector<pair<int,int>> renglon;
        for (int j = 0; j < capturado[0].size(); j++) {
            //en el principio
            if (i == 0 && j == 0) {
                //poner en la esquina s-i de padre un none
                renglon.push_back(nada);
                //Celda-actual <- Pop()
                celdaActual = pila.top();
                pila.pop();
                //revisar si la celda-actual es el ultimo/la salida
                if ( i == capturado.size()-1 && j == capturado[0].size()-1) {
                    cout << "La ruta de la salida hasta la entrada es: ";
                    return;
                }
                //Hacer el valor de la celda actual 0
                capturado[celdaActual.first][celdaActual.second] = 0;
                //Realizar un push por todas las celdas adyacentes que tengan valor de 1
                //Primero revisar la celda de arriba
                if (celdaActual.first - 1 >= 0) {
                    if (capturado[celdaActual.first-1][celdaActual.second] == 1) {
                        //pila.push(capturado[celdaActual.first-1][celdaActual.second]);
                    }
                }

            }
            else {

            }
        }
    }

}

void ramPoda (vector<vector<int>> capturado, vector<vector<pair<int,int>>> padre) {
    
}

int main() {
    //declarar matrices y elementos necesarios
    vector<vector<int>> capturado;
    vector<vector<pair<int,int>>> padreP;
    vector<vector<pair<int,int>>> padreF;

    pair<int,int> nada(-1, -1);

    int m, n, elemento;

    cin >> m;
    cin >> n;

    //llenar el laberinto a resolver
    for (int i = 0; i < m; i++) {
        vector<int> renglon;
        for (int j = 0; j < n; j++) {
            cin >> elemento;
            renglon.push_back(elemento);
        }
        capturado.push_back(renglon);
    }

    //resolver por el laberinto por medio de backtracking
    backTracking(capturado, padreP, nada);
    //ramPoda(capturado, padreF);

    return 0;
}