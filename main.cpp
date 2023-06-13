#include <iostream>

using namespace std;

#include "point.h"

int main()
{
    point A,B,C;
    double d;
    cout << "saisie du point A" << endl;
    cout << "tapez l'abscisse : "; cin >> A.x;
    cout << "tapez l'ordornne : "; cin >>A.y ;
    cout << endl;
    cout << "saisie du point B" << endl;
    cout << "tapez l'abscisse : "; cin >> B.x;
    cout << "tapez l'ordornne : "; cin >>B.y ;
    cout <<endl;
    C=A.millieur(B);
    d=A.distance(B);
    cout <<endl;
    cout << "millieur AB" << endl;
    cout << "tapez l'abscisse vaut : " << C.x << endl;
    cout << "tapez l'ordornne vaut : " << C.y << endl ;
    cout << endl;
    cout << "la distance AB vaut :"<<d<< endl;
    return 0;
}
