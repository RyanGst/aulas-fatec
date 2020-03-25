/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
de conversão é: K = L ∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float kg, li;
    cout << "Digite a quantidade de libras: ";
    cin >> li ;
    kg = li * 0.45;
    cout << kg << " libras equivalem a cerca de " << kg << " kg" << endl;
}
