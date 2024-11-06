#include "Sistema.h"

Sistema::Sistema()
{
}

void Sistema::registrarEncomienda(string origen, string destino, Fecha &fecha, double peso, Vehiculo *vehiculo)
{
    Encomienda *nuevaEncomienda = new Encomienda(origen, destino, fecha, peso, vehiculo);
    this->encomiendas.push_back(nuevaEncomienda);
}

void Sistema::cargarFechaEntrega(int codigo, Fecha &fecha){
    for (Encomienda *e : this->encomiendas)
    {
        if (codigo == e->getCodigo())
        {
            e->setFechaEntrega(fecha);
        }
    }
}

void Sistema::listarEntregas(Fecha &fecha)
{
    double recaudacion = 0;
    for (Encomienda *e : this->encomiendas)
    {
        if (e->getFechaEntrega().getAnio() == fecha.getAnio() && e->getFechaEntrega().getMes() == fecha.getMes() && e->getFechaEntrega().getDia() == fecha.getDia())
        {
            recaudacion += e->calcularPrecioEncomienda();
        }
        
    }
    cout << "Recaudacion: " << recaudacion << endl;
}

Sistema::~Sistema()
{
    for (Encomienda *e : this->encomiendas)
    {
        delete e;
    }
    this->encomiendas.clear();
}