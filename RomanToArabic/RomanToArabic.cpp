#include <iostream>
#include "RomanToArabic.h"
using namespace std;

int main(){
	string roman_numberal;
    int opc = 1, number;

    cout << "----------Conversor de numeros Romanos a Arabigos----------" << endl;
    cout << "Jesus Alejandro Lopez Rosales-22110104-2|O\n\n" << endl << endl << endl;
    system("pause");
    system("cls");

    while (opc == 1) {
        cout << "Digite el numero Romano: ";
        cin >> roman_numberal;
        system("cls");
        Converter c(roman_numberal);
        number = c.RomanToArabic();
        if (number > 0) {
            cout << "Numero romano ingresado: " << roman_numberal << endl;
            cout << "Numero romano convertido en arabigo: " << number << endl << endl << endl;
        }else cout << "Entrada INVALIDA" << endl << endl << endl;
        system("pause");
        system("cls");
        cout << "Desea convertir otro numero:" << endl;
        cout << "1.-Si" << endl;
        cout << "0.-No" << endl;
        cout << "Elige una opcion: ";
        cin >> opc;
        system("cls");
    }
    system("cls");
    cout << "Gracias por usar el programa. FIN" << endl;
    return 0;
}