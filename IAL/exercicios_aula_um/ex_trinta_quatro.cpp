/*
34. Leia o valor do raio de um cı́rculo e calcule e imprima a área do cı́rculo correspondente.
A área do cı́rculo é π ∗ raio ^ 2 , considere π = 3.141592.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x;
    cout << "Digite o raio do círculo: ";
    cin >> x;
    cout << "A área do circulo é: " << 3.141592 * pow(x, 2) << endl;
}