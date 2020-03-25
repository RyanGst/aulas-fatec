/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas.
A fórmula de conversão é: J = M / 0,91
sendo J o comprimento em jardas e M o comprimento em
metros.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, j;
    cout << "Digite a quantidade de metros: ";
    cin >> m ;
    j = m * .91;
    cout << m << " metros equivalem a cerca de " << setprecision(4) << j << " jardas" << endl;
}
