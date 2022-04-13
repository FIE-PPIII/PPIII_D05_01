#include <iostream>

#include "Fecha.h"

using namespace std;

// Constructor
Fecha::Fecha()
{}

Fecha::Fecha(const int dd, const int mm, const int aaaa)
{
    this->dd = dd;
    this->mm = mm;
    this->aaaa = aaaa;
}

// Destructor
Fecha::~Fecha()
{}

// Servicio
int Fecha::ProcesarCompararFecha(const int dd, const int mm, const int aaaa) const
{
    if (this->aaaa < aaaa)
    {
        return -1;
    }

    if (this->aaaa > aaaa)
    {
        return 1;
    }

    if (this->mm < mm)
    {
        return -1;
    }

    if (this->mm > mm)
    {
        return 1;
    }

    if (this->dd < dd)
    {
        return -1;
    }

    if (this->dd > dd)
    {
        return 1;
    }

    return 0;
}

int Fecha::CompararFecha(const int dd, const int mm, const int aaaa) const
{
    return this->ProcesarCompararFecha(dd, mm, aaaa);
}

int Fecha::CompararFecha(const Fecha fecha) const
{
    return this->ProcesarCompararFecha(fecha.dd, fecha.mm, fecha.aaaa);
}

int Fecha::ValidarFecha() const
{
    if (this->aaaa < 0)
    {
        return -3;
    }

    if ((this->mm < 1) || (this->mm > 12))
    {
        return -2;
    }

    if (this->dd < 1)
    {
        return -1;
    }

    switch (this->mm)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (this->dd > 31)
            {
                return -1;
            }

            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (this->dd > 30)
            {
                return -1;
            }

            break;
        
		case 2:
            if ((this->aaaa % 4) != 0)
            {
                if (this->dd > 28)
                {
                    return -1;
                }

                break;
            }

            if ((this->aaaa % 100) == 0)
            {
                if ((this->aaaa % 400) != 0)
                {
                    if (this->dd > 28)
                    {
                        return -1;
                    }
                }
            }

            if (this->dd > 29)
            {
                return -1;
            }

            break;

        default:
            break;
    }

    return 0;
}

void Fecha::MostrarFecha() const
{
    cout << "Fecha: " << this->dd << "/" << this->mm << "/" << this->aaaa << endl << flush;

    return;
}

