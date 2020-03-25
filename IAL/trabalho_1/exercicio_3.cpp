#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float bet_1, bet_2, bet_3, total_bet, lottery_premium;
    cout << "Digite o valor das tres apostas: ";
    cin >> bet_1 >> bet_2 >> bet_3;
    cout << "Digite o valor do premio: "; 
    cin >> lottery_premium;
    total_bet = bet_1 + bet_2 + bet_3;
    cout << "Premio um: " << setprecision(5) << lottery_premium * bet_1/total_bet << endl;
    cout << "Premio dois: " << setprecision(5) << lottery_premium * bet_2/total_bet << endl;
    cout << "Premio tres: " << setprecision(5) << lottery_premium * bet_3/total_bet << endl;
    return 0;
}
