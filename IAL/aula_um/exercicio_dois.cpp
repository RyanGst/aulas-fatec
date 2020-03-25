// Calcular a área e o perímetro de um quadrado
#include <iostream>
using namespace std;

int calcula_area(int lado) {
    int area = lado*lado;
    cout << "A área é: " << area << endl;
    return 0;
};

int calcula_perimetro(int lado) {
    int perimetro = lado*4;
    cout << "O perímetro é: " << perimetro;
    return 0;
};

int main(int argc, char const *argv[])
{
    float lado;
    cout << "Entre com o lado: ";
    cin >> lado;
    calcula_area(lado);
    calcula_perimetro(lado);
    return 0;
};
