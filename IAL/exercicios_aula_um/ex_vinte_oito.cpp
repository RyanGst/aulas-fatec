/*
28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
três valores lidos.
*/
#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y, z, p;
    cout << "Digite três valores: ";
    cin >> x >> y >> z;
    p = pow(x, 2) + pow(y, 2) + pow(z, 2);
    cout << "O resultado é: " << p << endl;
}