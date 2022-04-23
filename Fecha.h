#ifndef FECHA_H
#define FECHA_H


class Fecha
{
private:
    int diaRel;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    Fecha sumarDias(int dias) const;
    int difEnDias(const Fecha* fecha) const;
    Fecha operator+(int dias) const;
    int operator -(const Fecha* fecha) const;

};


#endif // FECHA_H
