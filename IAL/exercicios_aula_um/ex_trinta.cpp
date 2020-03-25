/*
30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
em dólares.
*/
#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, d, p;
    cout << "Digite um valor e a cotação do dolar: ";
    cin >> x >> d;
    p = x / d;
    cout << "A conversão é igual a: " << p << endl;
}