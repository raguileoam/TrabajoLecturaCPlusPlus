#include "Software.h"
#include "Desarrollador.h"
#include "Producto.h"
#include "Interface.h"
#include <string>
#include <iostream>

Software::Software(std::string nombre,int codigo,std::string licencia, std::string version){
        this->nombre = nombre;
        this->codigo = codigo;
        this->licencia = licencia;
        this->version = version;
    
}
std::string Software::getLicencia() {
	return this->licencia;
}

void Software::setLicencia(std::string licencia) {
	this->licencia = licencia;
}

std::string Software::getVersion() {
	return this->version;
}

void Software::setVersion(std::string version) {
	this->version = version;
}

void Software::setCodigo(int codigo) {
	this->codigo = codigo;
}

int Software::getCodigo() {
        return this->codigo;
}

void Software::setNombre(std::string nombre) {
        this->nombre = nombre;  
}

std::string Software::getNombre() {
	return this->nombre;
} 
void Software::setDesarrollador(Desarrollador desarrollador,int num){
         this->desarrollador[num]=desarrollador;
         
};        

Desarrollador Software::getDesarrollador(int num){
    return this->desarrollador[num];
};
void Software::mostrar(){
        std::cout << "Nombre: " << Software::getNombre() <<"\t Codigo: "<<Software::getCodigo()<<"\t Licencia: "<< Software::getLicencia()<< "\t Version: "<<Software::getVersion()<<std::endl;
};
