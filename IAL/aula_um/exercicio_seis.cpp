// Calcule a raiz quadrada e raiz cúbica de um determinado número.
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, result_square, result_cubic;
    cout << "Digite um número: ";
    cin >> x; 
    result_square = sqrt(x);
    result_cubic = cbrt(x);
    cout << "A raiz quadrada é: " << result_square << endl;
    cout << "A raiz cubica é: " << result_cubic << endl;
}
