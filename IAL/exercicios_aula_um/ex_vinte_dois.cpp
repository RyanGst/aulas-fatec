/*
22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
de conversão é: M = 0.91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, j;
    cout << "Digite a quantidade de jardas: ";
    cin >> j ;
    m = j * .91;
    cout << j << " jardas equivalem a cerca de " << setprecision(4) << m << " metros" << endl;
}
