/*
42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
ele paga 7% de imposto sobre o salário-base.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float v, x;
    cout << "Digite o salário base do funcionário: " << endl;
    cin >> v;
    x = (v + (v *.05));
    cout << "O total a ser recebido pelo trabalhador é " << x - (x * .07) << endl;
} 