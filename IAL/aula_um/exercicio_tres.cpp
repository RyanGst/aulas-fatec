// Calcule o volume de uma esfera

#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[])
{
    float raio, volume;
    cout << "Entre o raio: ";
    cin >> raio;
    volume = (4 * M_PI * pow(raio, 2))/3;
    cout << "O volume é: " << setprecision(4) << volume << endl;
    return 0;
}
