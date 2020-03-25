/*
43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com des-
conto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float v, w, x, y, z;
    cout << "Digite o valor da venda: " << endl;
    cin >> v;
    x = v - (v* .1);
    y = v / 3;
    z = x * .05;
    w = v * .05;
    cout << "O total a pagar é " << x << endl;
    cout << "O valor da parcela é " << y << endl;
    cout << "A comissão a vista " << z << endl;
    cout << "A comissão a prazo " << w << endl;
} 