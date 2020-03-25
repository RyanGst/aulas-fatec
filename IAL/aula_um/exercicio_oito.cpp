#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero_um, numero_dois, resto;
    cout << "Entre com um número: ";
    cin >> numero_um;
    cout << "Entre com outro número: ";
    cin >> numero_dois;
    cout << "O número " << numero_um << " dividido por " << numero_dois << " tem resto igual a " << numero_um % numero_dois << " e quociente " << numero_um / numero_dois << endl;
}