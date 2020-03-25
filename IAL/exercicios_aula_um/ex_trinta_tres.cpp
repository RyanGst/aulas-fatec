/*
33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x;
    cout << "Digite o lado do quadrado: ";
    cin >> x;
    cout << "A área do quadrado é: " << pow(x, 2) << endl;
}