#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float dinheiro; 
    cout << "Quanto dinheiro temos? ";
    cin >> dinheiro;
    if (dinheiro < 10)
    {
        cout << "Hoje é melhor ficar em casa..." << endl;
    } else
    {
        cout << "Vamos pro cinema! " << endl;
    }
    return 0;
}
