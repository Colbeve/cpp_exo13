#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
Exercice 13
Ecrire un algorithme qui convertit les degrés Fahrenheit en degrés Celsius.
*/

int main()
{
    double tFah, tCel;
    tCel = 0;

    cout << "Convertissez la temperature Fahrenheit en degres Celsius !" << endl;
    cout << "Saisissez une valeur de temperature en Fahrenheit" << endl;
    cin >> tFah;
    tCel = (tFah-32)/1.8;

    cout << "cette temperature equivaut en degres celsius a: " << endl;
    cout << tCel << endl;

    return 0;
}
