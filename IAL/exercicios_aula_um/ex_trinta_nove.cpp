/*
39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float x, y;
    float v = 780000.50;
    cout << "O primeiro ganhador leva " << setprecision(10) << v * 0.46 << " reais" << endl;
    cout << "O segundo ganhador leva " << setprecision(10) << v * 0.32 << " reais"<< endl;
    cout << "O terceiro ganhador leva " << setprecision(10) << v * 0.22 << " reais" << endl;
} 