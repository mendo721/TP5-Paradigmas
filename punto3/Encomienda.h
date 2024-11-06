#include <iostream>
#include "Fecha.h"
#include "Vehiculo.h"

using namespace std;
class Encomienda
{
private:
    static int autonumerico;
    int codigoEncomienda;
    string dirOrigen;
    string dirDestino;
    Fecha fechaIngreso;
    Fecha fechaEntrega;
    bool entregado;
    double pesoEncomienda;
    Vehiculo* vehiculo;

public:
    Encomienda(string DirOrigen, string DirDestino, Fecha &FechaIngreso, double Peso, Vehiculo *vehiculo);
    ~Encomienda();
    void escribirInfo();
    void setFechaEntrega(Fecha fecha);
    Fecha getFechaEntrega();
    int getCodigo();
    double calcularPrecioEncomienda();
    double getPeso(); 
};