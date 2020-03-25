/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m 2 . A
fórmula de conversão é: M = A ∗ 4048, 58, sendo M a área em metros quadrados e A a
área em acres.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, ac;
    cout << "Digite a quantidade de acres: ";
    cin >> ac ;
    m = ac * 4048.58;
    cout << ac << " acres equivalem a cerca de " << setprecision(8) << m << " metros" << endl;
}