/*
53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float c, l, p, t;
    cout << "Digite o comprimento e a largura: ";
    cin >> c >> l ;
    p = (c + l) * 2;
    cout << "Para cercar esse terreno são necessários " << p << " metros de cerca" << endl;
    cout << "Digite agora o valor do metro da tela: ";
    cin >> t;
    cout << "O custo é " << t * p << " para cercar o terreno" << endl;
}
