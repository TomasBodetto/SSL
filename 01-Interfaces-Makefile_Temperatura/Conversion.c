#include "Conversion.h"

/*
En este archivo se implementan las funciones de conversión definidas en Conversion.h.
La función Celsius recibe un valor en grados Fahrenheit, realiza la conversión
a grados Celsius utilizando la fórmula correspondiente y devuelve el resultado.
La función Fahrenheit recibe un valor en grados Celsius, realiza la conversión
a grados Fahrenheit utilizando la fórmula correspondiente y devuelve el resultado.
*/
double Celsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double Fahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}