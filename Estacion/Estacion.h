#ifndef ESTACION_ESTACION_H_
#define ESTACION_ESTACION_H_

#include "../Cliente/Cliente.h"
#include "../Empleado/Empleado.h"
#include "../Pista/Pista.h"
#include "../Forfait/Forfait.h"
#include "../Material/Material.h"
#include "../Remonte/Remonte.h"
#include "../Alumno/Alumno.h"

typedef struct{
	int id;
	char* nombre;
	char* direccion;
	char* horario;
	Cliente* clientes;
	Empleado* empleados;
	Pista* pistas;
	Remonte* remontes;
	Forfait* forfaits;
	Material* material;
}Estacion;

int leerDatosEstaciones(sqlite3 *db);

#endif /* ESTACION_ESTACION_H_ */
