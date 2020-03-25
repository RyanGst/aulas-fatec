/*
15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float gr, rd;
    cout << "Digite um ângulo em radianos: ";
    cin >> rd;
    gr = rd  * 180 / 3.14;
    cout << "Esse ângulo em graus é igual a: " << setprecision(4) << gr << endl;
}
