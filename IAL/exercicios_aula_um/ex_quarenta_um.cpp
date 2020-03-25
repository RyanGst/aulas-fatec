/*
41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
o valor calculado.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float v, h;
    cout << "Digite o valor da hora e a quantidade de horas trabalhadas: " << endl;
    cin >> v >> h; 
    cout << "O total a ser recebido pelo trabalhador é " << v * h + (( v * h ) * .1) << endl;
} 