/*
17. Leia um valor de comprimento em centı́metros e apresente-o convertido em polegadas.
A fórmula de conversão é: P = C / 2.54 
Sendo C o comprimento em centı́metros e P o
comprimento em polegadas.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float pl, cm;
    cout << "Digite um comprimento em cm: ";
    cin >> cm;
    pl =  cm / 2.54;
    cout << "Esse comprimento em polegadas é igual a: " << setprecision(4) << pl << endl;
}
