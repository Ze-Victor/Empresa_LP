#include "../include/Funcionario.hpp"

Funcionario::Funcionario()
{

}
Funcionario::Funcionario(std::string nome, std::string departamento, 
							float salario, std::string data_admissao)
{

	this->nome = nome;
	this->departamento = departamento;
	this->salario = salario;
	this->data_admissao = data_admissao;

}
void Funcionario::setNome(std::string nome)
{
	this->nome = nome;
}
std::string Funcionario::getNome()
{
	return this->nome;
}
void Funcionario::setDepartamento(std::string departamento)
{
	this->departamento = departamento;
}
std::string Funcionario::getDepartamento()
{
	return this->departamento;
}
void Funcionario::setSalario(float salario)
{
	this->salario = salario;
}
float Funcionario::getSalario()
{
	return this->salario;
}
void Funcionario::setDataAdmissao(std::string data_admissao)
{
	this->data_admissao = data_admissao;
}
std::string Funcionario::getDataAdmissao()
{
	return this->data_admissao;
}
