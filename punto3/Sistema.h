#include <iostream>
#include "Encomienda.h"
#include <vector> 
using namespace std;

class Sistema
{
private:
    vector <Encomienda *> encomiendas;
public:
    Sistema();
    ~Sistema();
    void registrarEncomienda(string origen, string destino, Fecha &fecha, double peso, Vehiculo *vehiculo);
    void cargarFechaEntrega(int codigo, Fecha &fecha);
    void listarEntregas(Fecha &fecha);
};

