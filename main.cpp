#include <iostream>

using namespace std;

int main() {

    int matriz[3][4];
    int l,c;

    matriz[0][0] = 0;
    matriz[0][1] = 1;
    matriz[0][2] = 2;
    matriz[0][3] = 3;

    matriz[1][0] = 3;
    matriz[1][1] = 2;
    matriz[1][2] = 1;
    matriz[1][3] = 0;

    matriz[2][0] = 0;
    matriz[2][1] = 0;
    matriz[2][2] = 0;
    matriz[2][3] = 0;

    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
