#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float m, km;
    cout << "Digite a distância em KM: ";
    cin >> km;
    m = km / 1.61;
    cout << "Essa distância em milhas é igual a: " << setprecision(4) << m << endl;
}
