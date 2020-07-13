#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>
#include <iostream>
#include "Funcionario.hpp"

class Empresa{

private:
	std::string nome;
	std::string cnpj;
public:
	Empresa();
	Empresa(std::string nome, std::string cnpj);
	void setNome(std::string nome);
	std::string getNome();
	void setCNPJ(std::string cnpj);
	std::string getCNPJ();

};

#endif