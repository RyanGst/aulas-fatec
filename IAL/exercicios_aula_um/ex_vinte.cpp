/* 
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. 
A fórmula de conversão é: L = K/0,45
Sendo K a massa em quilogramas e L a massa em libras.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float kg, li;
    cout << "Digite a quantidade de kilos: ";
    cin >> kg ;
    li = kg / 0.45;
    cout << kg << " quilos equivalem a cerca de " << li << " libras" << endl;
}
