/*
49. Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do termino da mesma.
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int hi, mi, si, d, hf, mf, sf, temp;
    cout << "Digite hora, minuto, segundo e duração: ";
    cin >> hi >> mi >> si >> d;
    temp = (hi * 3600) + (mi * 60) + si + d;
    hf = temp / 3600; 
    mf =  temp % 3600 / 60;
    sf = temp % 3600 % 60;
    cout << "O término se deu em " << hf << " hora(s), " << mf << " minutos e " << sf << " segundos" << endl;
} 