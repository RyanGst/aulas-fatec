/*
29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float w, x, y, z, p;
    cout << "Digite quatro notas: ";
    cin >> w >> x >> y >> z;
    p = (w + x + y + z) / 4;
    cout << "A média é: " << p << endl;
}