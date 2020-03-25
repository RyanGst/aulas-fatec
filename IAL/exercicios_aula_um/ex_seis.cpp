#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float c, f;
    cout << "Digite a temperatura em Cº: ";
    cin >> c; 
    f = c*(9.0/5.0) + 32.00;
    cout << "A temperatura em Fº é igual a: " << f << endl;
    return 0;
}
