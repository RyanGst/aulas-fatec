/*
24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M ∗ 0.000247, sendo M a área em metros quadrados e A
a área em acres.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, ac;
    cout << "Digite a quantidade de metros quadrados: ";
    cin >> m ;
    ac = m * .000247;
    cout << m << " metros quadrados equivalem a cerca de " << setprecision(4) << ac << " acres" << endl;
}
