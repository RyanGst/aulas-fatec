/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float idade;
    cout << "Qual a sua idade? ";
    cin >> idade;
    cout << "Você nasceu em " << 2020 - idade << endl;
} 