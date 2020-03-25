// Ler nome e a idade, calcular e exibir o ano do seu nascimento.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string nome; 
    int idade, birth_year; 
    cout << "Olá, qual seu nome? ";
    cin >> nome; 
    cout << "É um prazer te conhecer " << nome << "! \n";
    cout << "Qual a sua idade? ";
    cin >> idade; 
    birth_year = 2020 - idade;
    cout << "Você nasceu em " << birth_year << endl;
}
