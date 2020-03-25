/*
26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A fórmula de conversão é: H = M ∗ 0, 0001, sendo M a área em metros quadrados e H
a área em hectares.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float h, m;
    cout << "Digite a quantidade de metros: ";
    cin >> m ;
    h = m * .0001;
    cout << m << " metros equivalem a cerca de " << setprecision(8) << h << " hectares" << endl;
}