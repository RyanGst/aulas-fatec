/*
35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
hipotenusa = sqtr(a ^ 2 + b ^ 2).
Faça um programa que receba os valores de a e b e calcule
o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y;
    cout << "Digite os lados a e b: ";
    cin >> x >> y;
    cout << "A hipotenusa é: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
}