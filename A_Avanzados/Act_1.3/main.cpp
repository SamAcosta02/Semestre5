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

vector<vector<int>> backTracking () {
    

}

vector<vector<int>> ramPoda () {

}

int main() {
    vector<vector<int>> capturado;
    vector<vector<int>> padre;

    stack<pair<int,int>> pila;
    queue<pair<int,int>> fila;

    int m, n, elemento;

    cin >> m;
    cin >> n;

    for (int i = 0; i < m; i++) {
        vector<int> renglon;
        for (int j = 0; j < n; j++) {
            cin >> elemento;
            renglon.push_back(elemento);
        }
        capturado.push_back(renglon);
    }

    //Impresion de laberinto (BORRAR)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << capturado[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}