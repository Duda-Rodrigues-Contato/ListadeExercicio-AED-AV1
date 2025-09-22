#include <iostream>
#include <string.h>

using namespace std;


int contar_digitos(string c, int n) 
{

    if (c[n] == '\0') {
        return 0;
    } else {
        return 1 + contar_digitos(c, n + 1);
    }

}


int main()
{

    int num = 0;
    int qtd_caracter = 0;
    string numcarac;

    cout << "Digite o numero inteiro: ";
    cin >> num;

    numcarac = to_string(num);
    qtd_caracter = contar_digitos(numcarac, 0);

    cout << "\nA quantidade de caracter eh: " << qtd_caracter << "\n";


    system("PAUSE");
}