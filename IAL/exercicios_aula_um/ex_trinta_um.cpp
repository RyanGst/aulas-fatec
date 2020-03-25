/*
31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float x;
    cout << "Digite um valor: ";
    cin >> x;
    cout << "O antecessor desse número é " << x - 1 <<" e o sucessor é " << x + 1 << endl;
}