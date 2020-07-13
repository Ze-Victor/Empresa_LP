#include "../include/Empresa.hpp"

Empresa::Empresa()
{

}
Empresa::Empresa(std::string nome, std::string cnpj)
{
	this->nome = nome;
	this->cnpj = cnpj;
}
void Empresa::setNome(std::string nome)
{
	this->nome = nome;
}
std::string Empresa::getNome()
{
	return this->nome;
}
void Empresa::setCNPJ(std::string cnpj)
{
	this->cnpj = cnpj;
}
std::string Empresa::getCNPJ()
{
	return this->cnpj;
}
