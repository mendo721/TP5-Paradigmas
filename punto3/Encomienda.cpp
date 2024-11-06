#include "encomienda.h"

int Encomienda::autonumerico = 0;
Encomienda::Encomienda(string DirOrigen, string DirDestino, Fecha &FechaIngreso, double Peso, Vehiculo *vehiculo) : fechaIngreso(FechaIngreso)
{
    this->codigoEncomienda = ++Encomienda::autonumerico;
    this->dirOrigen = DirOrigen;
    this->dirDestino = DirDestino;
    this->pesoEncomienda = Peso; 
    this->vehiculo = vehiculo;
}

Encomienda::~Encomienda()
{
}

void Encomienda::escribirInfo()
{
    cout << "Informacion de la ecomienda: " << this->codigoEncomienda << endl;
    cout << "Direccion de origen: " << this->dirOrigen << endl;
    cout << "Direccion del destino: " << this->dirDestino << endl;
    cout << "Fecha de Ingreso:" << this->fechaIngreso.toString() << endl;
    cout << "Fecha de entrega" << this->fechaEntrega.toString() << endl;
}

void Encomienda::setFechaEntrega(Fecha fecha)
{
    this->fechaEntrega = fecha;
    this->entregado = true; 
}

Fecha Encomienda::getFechaEntrega()
{
    return this->fechaEntrega;
}

int Encomienda::getCodigo()
{
    return this->codigoEncomienda;
}

double Encomienda::calcularPrecioEncomienda()
{
    double peso = getPeso();
    double precio = this->vehiculo->calcularPrecioViaje(peso);
    return precio;
}

double Encomienda::getPeso()
{
    return this->pesoEncomienda;
}
