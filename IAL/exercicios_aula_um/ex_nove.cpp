#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float k, c;
    cout << "Digite a temperatura em Cº: ";
    cin >> c; 
    k = c + 273.00;
    cout << "A temperatura em Kº é igual a: " << k << endl;
    return 0;
}
