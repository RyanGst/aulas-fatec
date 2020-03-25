/* 
16. Leia um valor de comprimento em polegadas e apresente-o convertido em centı́metros.
A fórmula de conversão é: C = P ∗ 2, 54, sendo C o comprimento em centı́metros e P o
comprimento em polegadas.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float pl, cm;
    cout << "Digite um comprimento em polegadas: ";
    cin >> pl;
    cm = pl  * 2.54;
    cout << "Esse comprimento em cm é igual a: " << setprecision(4) << cm << endl;
}
