/*
18. Leia um valor de volume em metros cúbicos m 3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em
metros cúbicos.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, l;
    cout << "Digite a quantidade de metros cúbicos: ";
    cin >> m;
    l = m *1000;
    cout << "Em " << m << " metros cúbicos, cabem " << l << " litros" << endl;
}
