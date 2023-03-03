#include <iostream>
#include <vector>

using namespace std;

int main () {

    int m, n;

    cin >> m;
    cin >> n;

    vector<vector<int>> test;
    int elemento;

    for (int i = 0; i < m; i++) {
        vector<int> renglon;
        for (int j = 0; j < n; j++) {
            cin >> elemento;
            renglon.push_back(elemento);
        }
        test.push_back(renglon);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << test[i][j] << ' ';
            if ( i == test.size()-1 && j == test[0].size()-1) {
                cout << "This is also the last one";
            }
        }
        cout << endl;
    }


    return 0;
}