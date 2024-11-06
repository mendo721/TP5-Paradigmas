#include "Vehiculo.h"
double Vehiculo::incremento = 1.25;

Vehiculo::Vehiculo(string patente, int anio, double pesoMax, double tarifa)
{
    this->patente = patente;
    this->anioModelo = anio;
    this->pesoMax = pesoMax;
    this->tarifa = tarifa;
}

Vehiculo::~Vehiculo()
{

}

void Vehiculo::escribirInfo()
{
    cout << "Informacion del vehiculo patente: " << this->patente << endl;
    cout << "Año del modelo: " << this->anioModelo << endl; 
    cout << "Peso maximo: " << this->pesoMax << endl; 
    cout << "tarifa: " << this->tarifa << endl;
}

double Vehiculo::getTarifa()
{
    return this->tarifa;
}

double Vehiculo::calcularPrecioViaje(double peso)
{
    return getTarifa() + calcularIncremento(peso);
}

bool Vehiculo::pesoExcedido(double peso)
{
    return pesoMax < peso;
}

double Vehiculo::calcularIncremento(double peso)
{
    double montoIncrementado = 0;
    if (pesoExcedido(peso))
    {
        return montoIncrementado = getTarifa() * incremento;
    }
    return montoIncrementado;
}