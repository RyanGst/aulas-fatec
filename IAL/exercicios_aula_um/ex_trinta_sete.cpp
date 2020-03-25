/*
37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y;
    cout << "Digite um valor para cálculo do desconto: ";
    cin >> x;
    cout << "O total é: " << x - (x*0.12) << endl;
}