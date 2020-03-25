// Calcule o valor do resto e do quociente da divisão de dois números inteiros.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero_um, numero_dois, resto;
    cout << "Entre com um número: ";
    cin >> numero_um;
    cout << "Entre com outro número: ";
    cin >> numero_dois;
    cout << "O resto é: " << numero_um % numero_dois << endl;
    cout << "O quociente é: " << numero_um / numero_dois << endl;
}
