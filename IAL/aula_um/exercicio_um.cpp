#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float capital, taxa, periodo, juros;
    cout << "Capital: ";
    cin >> capital;
    cout << "Taxa: ";
    cin >> taxa;
    cout << "Período: ";
    cin >> periodo; 
    juros = capital * taxa / 100 * periodo;
    cout << "O juro calculado em cima do capital "<< capital << " e os juros "<< juros << endl;
    return 0;
}
