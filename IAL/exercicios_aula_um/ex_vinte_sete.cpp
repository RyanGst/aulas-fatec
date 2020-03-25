/*
27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m 2 .
A fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H
a área em hectares.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, hec;
    cout << "Digite a quantidade de hectares: ";
    cin >> hec ;
    m = hec * 10000;
    cout << hec << " hectares equivalem a cerca de " << setprecision(8) << m << " metros" << endl;
}