/*
40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o número de dias trabalhados pelo encanador e imprima a quantia lı́quida que deverá ser
paga, sabendo-se que são descontados 8% para imposto de renda.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float d;
    const int value = 30.00;
    cout << "Quantos dias foram trabalhados? ";
    cin >> d; 
    cout << "O total recebido pelo trabalhador é " << d * value - ((d * value) * .08);
} 