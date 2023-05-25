#include <iostream>
using namespace std;
int main ()
{
 float Pi = 0.0;
 float precision = 0.0000000001;  // Precisión de ejemplo aproximada
 float PD = 3.1415920000; //Prec Deseada, los digitos necesarios, y de ultima, relleno con varios 0
 int denom = 1.0;
 int sign = 1.0; /*Controla si el siguiente término en la serie de Leibniz debe ser sumado o restado, 
 alternando entre positivo y negativo en cada iteración. */

    while (true) 
    {
        float termino = sign * (1.0 / denom);
        Pi += termino;
        denom += 2;
        sign = -sign;

        double dif = PD - Pi * 4.0;
        if (dif >= -precision && dif <= precision) 
        {
            break;  // Para salir del bucle cuando la diferencia esté dentro de la precisión deseada.
        }
    }

    cout.precision(10);
    cout << "El valor aproximado de Pi es: " << Pi * 4.0 <<endl;

    return 0;
}