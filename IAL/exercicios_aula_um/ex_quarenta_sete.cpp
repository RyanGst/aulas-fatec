/*
47. Leia um número inteiro de 4 dı́gitos (de 1000 a 9999) e imprima 1 dı́gito por linha.
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int a, b, c, d, e, f, g, h;

    cout << "Digite um número com quatro dígitos:\n";
    cin >> a;
    b = a / 1000;
    c = a % 1000;
    d = c / 100;
    e = c % 100;
    f = e / 10;
    g = e % 10;
    h = g / 1;
    cout << b << endl << d << endl << f << endl << h << endl;
} 