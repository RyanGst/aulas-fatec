#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, km;
    cout << "Digite a distância em milhas: ";
    cin >> m;
    km = m * 1.61;
    cout << "Essa distância em km é igual a: " << setprecision(4) << km << endl;
}
