#include "Sistema.h"
#include <iostream>

int main(){
    Sistema sistema = Sistema();

    Vehiculo *vehiculo1 = new Vehiculo("246f", 2010, 150.99, 5000.46);
    Vehiculo *vehiculo2 = new Vehiculo("135g", 2020, 134.49, 7500.32);
    Vehiculo *vehiculo3 = new Vehiculo("793s", 2021, 144.21, 8439.24);

    Fecha fecha1 = Fecha(10, 10, 2024); 
    Fecha fecha2 = Fecha(22, 11, 2024);
    Fecha fecha3 = Fecha(13, 12, 2024);

    sistema.registrarEncomienda("Santa Fe", "Tucuman", fecha1, 152.23, vehiculo1);
    sistema.registrarEncomienda("Rio Negro", "Monteros", fecha2, 128.21, vehiculo2);
    sistema.registrarEncomienda("Mar Del Plata", "Concepcion", fecha3, 143.21, vehiculo3);

    sistema.cargarFechaEntrega(1, fecha3);

    sistema.cargarFechaEntrega(2, fecha3);

    sistema.listarEntregas(fecha3);

    sistema.~Sistema();

    return 0;
}