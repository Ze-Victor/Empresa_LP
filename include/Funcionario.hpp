#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include <iostream>

class Funcionario{

private:
	std::string nome;
	std::string departamento;
	float salario;
	std::string data_admissao;
public:
	Funcionario();
	Funcionario(std::string nome, std::string departamento, float salario, std::string data_admissao);
	void setNome(std::string nome);
	std::string getNome();
	void setDepartamento(std::string departamento);
	std::string getDepartamento();
	void setSalario(float salario);
	float getSalario();
	void setDataAdmissao(std::string data_admissao);
	std::string getDataAdmissao();

};

#endif