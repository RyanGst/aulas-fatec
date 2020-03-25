#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float bruto, imposto, liquido;
    cout << "Insira o salário bruto: ";
    cin >> bruto;
    imposto = bruto * 5 / 100;
    liquido = bruto - imposto;
    cout << "Salário bruto: " << bruto;
    cout << "Imposto: " << imposto << endl;
    cout << "Salário liquido: " << liquido << endl;
}