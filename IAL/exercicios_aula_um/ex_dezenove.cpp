/*
19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3.
A fórmula de conversão é: M = L / 1000
, sendo L o volume em litros e M o volume em metros
cúbicos.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, l;
    cout << "Digite a quantidade de litros: ";
    cin >> l ;
    m = l / 1000;
    cout << l << " litros equivalem a cerca de " << m << " metros cúbicos" << endl;
}
