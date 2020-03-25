/*
44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
seu objetivo.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float deg, alt;
    cout << "Digite a altura do degrau e a altura desejada: ";
    cin >> deg >> alt;
    cout << "Para subir " << alt << " são necessários " << alt / deg << " degraus" << endl;
} 