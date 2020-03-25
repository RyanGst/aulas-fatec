/*
38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y;
    cout << "Digite um valor para cálculo do aumento: ";
    cin >> x;
    cout << "O total é: " << x + (x*0.25) << endl;
}