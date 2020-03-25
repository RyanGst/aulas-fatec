#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float k, c;
    cout << "Digite a temperatura em Kº: ";
    cin >> k; 
    c = k - 273.00;
    cout << "A temperatura em Cº é igual a: " << c << endl;
    return 0;
}
