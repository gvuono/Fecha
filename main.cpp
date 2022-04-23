#include <iostream>

#include "../Fechac++/Fecha.h"

using namespace std;

int main()
{
    Fecha fecha1(1, 1, 2000);
    Fecha fecha2(25, 12, 2000);

    int dif = fecha1.difEnDias(&fecha2);
    int dif2 = fecha1 - &fecha2;


    Fecha fsuma = fecha1.sumarDias(dif);
    Fecha fsuma2 = fecha1 + 60;

    cout<< dif << endl;
    cout << dif2 << endl;

    return 0;
}
