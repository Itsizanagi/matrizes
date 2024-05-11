#include <iostream>

using namespace std;

int main() {
    int matriz[3][4];
    int l, c;

    cout << "Digite os valores para preencher tal matriz:" << endl;
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            cout << "Valor para matriz[" << l << "][" << c << "]: ";
            cin >> matriz[l][c];
        }
    }

    
    cout << "Matriz resultante:" << endl;
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
