#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string patente;
    int anioModelo;
    double pesoMax;
    static double incremento;
    double tarifa;

public:
    Vehiculo(string patente , int año, double pesoMax, double tarifa);
    ~Vehiculo();
    void escribirInfo();
    double getTarifa();
    double calcularPrecioViaje(double peso);
    
private:
    bool pesoExcedido(double peso);
    double calcularIncremento(double peso);
};
