/*
32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.
*/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout << "Digite um valor: ";
    cin >> x;
    cout << "O a soma do sucessor de seu triplo com o antecessor de seu dobro é igual a: " << ((x*3) + 1) + ((x*2-1)) << endl;
}