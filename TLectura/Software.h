#ifndef SOFTWARE_H
#define SOFTWARE_H
#include "C:\Users\Usuario\Desktop\kjl\Desarrolador.h"
#include "C:\Users\Usuario\Desktop\kjl\Producto.h"
#include "C:\Users\Usuario\Desktop\kjl\Interface.h"
#include <string>
#include <iostream>
class Software: public Producto,Interface {

protected:
	Desarrolador desarrolador[];
	std::string licencia;
	std::string version;

public:
	Software();

	Software(std::string nombre,int codigo,std::string licencia, std::string version){
        this->nombre = nombre;
        this->codigo = codigo;
        this->licencia = licencia;
        this->version = version;
	};
	std::string getNombre(){
         return this->nombre;
	};

	void setNombre(std::string nombre){
         this->nombre = nombre;
	};
    int getCodigo(){
         return this->codigo;
	};

	void setCodigo(int codigo){
         this->codigo = codigo;
	};

	std::string getLicencia(){
	 return this->licencia;
	};

	void setLicencia(std::string licencia){
        this->licencia = licencia;
	};

	std::string getVersion(){
         return this->version;
	};

	void setVersion(std::string version){
         this->version = version;
	};


	void mostrar(){
        std::cout << "Nombre: " << nombre <<"\t Codigo: "<<codigo<<"\t Licencia: "<< licencia<< "\t Version: "<<version<<std::endl;
	};


};

#endif
