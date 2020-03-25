/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R 2 e calcule sua
distância da origem (0, 0).
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2, d;
    cout << "Digite as cordenadas x e y do primeiro ponto: ";
    cin >> x1 >> y1;
    cout << "Digite as cordenadas x e y do segundo ponto: ";
    cin >> x2 >> y2;
    d = sqrt(pow(x2 - x1, 2) + pow( y2 - y1, 2));
    cout << "A distância entre esses pontos é: " << d << endl;
}
