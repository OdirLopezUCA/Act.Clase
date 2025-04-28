#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> opciones = {"MOTO", "KIASOUL", "BUS-44"};

    // Muestra las opciones al usuario
    cout << "Selecciona una opcion:" << endl;
    for (size_t i = 0; i < opciones.size(); ++i)
    {
        cout << (i + 1) << ". " << opciones[i] << endl;
    }

    int seleccion;
    cout << "Ingresa el número de la opción deseada: ";
    cin >> seleccion;

    if (seleccion >= 1 && seleccion <= opciones.size())
    {
        cout << "Has seleccionado: " << opciones[seleccion - 1] << endl;
        // Realiza la acción correspondiente a la opción
        switch (seleccion)
        {
        case 1:
            int velocidad;
            cout << "Ingrese la velocidad a la que conduce su vehiculo: " << endl;
            cin >> velocidad;

            if (velocidad < 60 && cin.fail())
            {
                cout << "Usted conduce bien." << endl;
            }

            break;
        case 2:

            cout << "Realizando accion para la opcion 2..." << endl;
            break;
        case 3:

            cout << "Realizando accion para la opcion 3..." << endl;
            break;
        }
    }
    else
    {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}