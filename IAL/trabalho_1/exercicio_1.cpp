#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float hoursCount, minWage, hourValue, totalWage, tax;
    cout << "Entre com o salário mínimo e a quantidade de horas trabalhadas em sequência: ";
    cin >> minWage >> hoursCount;
    hourValue = minWage * .1;
    totalWage = hoursCount * hourValue;
    tax = totalWage * .03;
    cout << "O valor da hora é " << hourValue << ", o salário bruto é " << totalWage << ", o imposto é " << tax << ", e o salário a receber é: " << totalWage - tax << endl;
    return 0;
}
