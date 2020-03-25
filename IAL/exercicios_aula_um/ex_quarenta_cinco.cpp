/*
45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char x, y;
    cout << "Digite um caractere maiúsculo: ";
    cin >> x;
    y = x + 32;
    cout << y << endl;
} 