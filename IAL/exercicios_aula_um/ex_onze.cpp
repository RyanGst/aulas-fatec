#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float km, ms;
    cout << "Digite a velocidade em m/s: ";
    cin >> ms;
    km = ms * 3.6;
    cout << "Essa velocidade em km é: " << setprecision(4) << km << endl;
}
