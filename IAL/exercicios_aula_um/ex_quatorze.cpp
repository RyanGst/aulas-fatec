/*
14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float gr, rd;
    cout << "Digite um ângulo em graus: ";
    cin >> gr;
    rd = gr  * 3.14 / 180;
    cout << "Esse ângulo em radianos é igual a: " << setprecision(4) << rd << endl;
}
