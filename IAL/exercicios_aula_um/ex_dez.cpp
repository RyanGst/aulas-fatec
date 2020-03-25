#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float km, ms;
    cout << "Digite a velocidade em km/h: ";
    cin >> km;
    ms = km / 3.6;
    cout << "Essa velocidade em m/s é: " << setprecision(4) << ms << endl;
}
