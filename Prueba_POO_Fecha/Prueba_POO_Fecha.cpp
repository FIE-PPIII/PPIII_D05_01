#include <iostream>
#include <vector>

#include "Fecha.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int estado;

    Fecha fecha;
    Fecha fechaUno(12, 4, 2022);
    Fecha fechaDos(7, 5, 2022);
    Fecha fechaTres(23, 6, 2022);

	cout << "\nDatos de la Fecha" << endl << flush;

    fechaUno.MostrarFecha();

    fecha = fechaUno;

    estado = fechaUno.ValidarFecha();

    if (estado == 0)
    {
        cout << "\nDatos de la Fecha Dos" << endl << flush;

        fechaDos.MostrarFecha();

        estado = fechaUno.ValidarFecha();

        if (estado == 0)
        {
            cout << "\nDatos de la Fecha Tres" << endl << flush;

            fechaTres.MostrarFecha();

            estado = fechaUno.ValidarFecha();

            if (estado != 0)
            {
                fecha = fechaTres;
            }
        }
        else
        {
            fecha = fechaDos;
        }
    }

    if (estado == -1)
    {
        cout << "El dia es incorrecto " << fecha.ObtenerDD() << endl << flush;
    }

    if (estado == -2)
    {
        cout << "El mes es incorrecto " << fecha.ObtenerMM() << endl << flush;
    }

   	if (estado == -3)
    {
        cout << "El a#o es menor a cero " << fecha.ObtenerAAAA() << endl << flush;
    }

    if (estado != 0)
    {
        system("pause");

        return(estado);
    }

    cout << "\nCompara los tres atributos de la primera fecha y los tres atributos de segunda fecha enviados como parametros" << endl << flush;
    estado = fechaUno.CompararFecha(fechaDos.ObtenerDD(), fechaDos.ObtenerMM(), fechaDos.ObtenerAAAA());

    if (estado == 1)
    {
        cout << "La primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << " es mayor a la segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << " es mayor a la primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << endl << flush;
        }
        else
        {
            cout << "La primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << " es igual a la segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << endl << flush;
        }
    }

    cout << "\nCompara los tres atributos de la primera fecha y envio la tercera fecha" << endl << flush;
    estado = fechaUno.CompararFecha(fechaTres);

    if (estado == 1)
    {
        cout << "La primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << " es mayor a la tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << " es mayor a la primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << endl << flush;
        }
        else
        {
            cout << "La primera " << fechaUno.ObtenerDD() << "/" << fechaUno.ObtenerMM() << "/" << fechaUno.ObtenerAAAA() << " es igual a la tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << endl << flush;
        }
    }

    cout << "\nCompara los tres atributos de la segunda fecha y envio la tercera fecha" << endl << flush;
    estado = fechaDos.CompararFecha(fechaTres);

    if (estado == 1)
    {
        cout << "La segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << " es mayor a la tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << " es mayor a la segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << endl << flush;
        }
    	else
        {
            cout << "La segunda " << fechaDos.ObtenerDD() << "/" << fechaDos.ObtenerMM() << "/" << fechaDos.ObtenerAAAA() << " es igual a la tercera " << fechaTres.ObtenerDD() << "/" << fechaTres.ObtenerMM() << "/" << fechaTres.ObtenerAAAA() << endl << flush;
        }
    }
            
    system("pause");

	return(estado);
}
