#ifndef SOFTWARE_H
#define SOFTWARE_H
#include "Desarrollador.h"
#include "Producto.h"
#include "Interface.h"
#include <string>
#include <iostream>
class Software : public Producto, Interface {

protected: 
	Desarrollador desarrollador[1];
	std::string licencia;
	std::string version;

public:
	Software();

	Software(std::string nombre,int codigo,std::string licencia, std::string version);

	std::string getLicencia();

	void setLicencia(std::string licencia);

	std::string getVersion();

	void setVersion(std::string version);

	void setCodigo(int codigo);

	int getCodigo();

	void setNombre(std::string nombre);

	std::string getNombre();
        
        void setDesarrollador(Desarrollador desarrollador,int num);
        
        Desarrollador getDesarrollador(int num);
        
        void mostrar();
};

#endif
