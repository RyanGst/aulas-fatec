#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float value, discountPercentual, discount;
    cout << "Digite o valor da mercadoria e a porcentagem do desconto: ";
    cin >> value >> discountPercentual;
    discount = value * discountPercentual / 100;
    cout << "O valor do desconto é " << discount << " e o valor a pagar é " << value - discount << endl;
    return 0;
}
