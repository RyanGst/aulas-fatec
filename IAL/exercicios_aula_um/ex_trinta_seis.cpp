/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio 2 ∗ altura,
onde π = 3.141592.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y;
    cout << "Digite a altura de um cilindo e depois o raio desse mesmo: ";
    cin >> x >> y;
    cout << "O volume é: " << 3.141592 * pow(y, 2) * x << endl;
}