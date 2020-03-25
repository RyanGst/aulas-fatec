/*
46. Faça um programa que leia um número inteiro positivo de três dı́gitos (de 100 a 999).
Gere outro número formado pelos dı́gitos invertidos do número lido. Exemplo:
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int a, b, c, x, sum;

    cout << "Digite um número com três dígitos:\n";
    cin >> x;
    a = x / 100;
    b = (x % 100) / 10;
    c = x % 100 % 10;
    sum = c * 100 + b * 10 + a;
    cout << sum << endl;
} 