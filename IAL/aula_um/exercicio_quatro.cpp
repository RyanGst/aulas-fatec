/*
 Calcule a média final (média ponderada) da disciplina de lógica de programação 
 sabendo que o aluno tem de nota final das provas o valor de 8 e de nota final dos trabalhos o valor 7.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float nota_prova, nota_trabalho, media_final;
    cout << "Nota final das provas: ";
    cin >> nota_prova;
    cout << "Nota final dos trabalhos: ";
    cin >> nota_trabalho;
    cout << "A média final é: " << setprecision(4) << nota_prova *0.7 + nota_trabalho * 0.3;
}
