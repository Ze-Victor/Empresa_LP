#include "../include/Empresa.hpp"
#include "../include/Funcionario.hpp"

#include <vector>

int main(int argc, char* argv[]){

	std::vector<Funcionario> funcionarios;
	Funcionario fun;
	int num_Funcionarios;
	std::string nome_empresa, cnpj, nome, data;
	float salario;

	std::cout << "Digite o nome da empresa: " << std::endl;
	std::getline(std::cin, nome_empresa);

	std::cout << "Digite o CNPJ da empresa: " << std::endl;
	std::getline(std::cin, cnpj);

	std::cout << "Quantos funcionarios a empresa possui? " << std::endl;
	std::cin >> num_Funcionarios;


	Empresa emp(nome_empresa, cnpj);

	for (int i = 0; i < num_Funcionarios; ++i)
	{
		std::cout << "Digite o nome do funcionario " << i << ":" << std::endl;
		std::cin >> nome;

		std::cout << "Digite o salario do funcionario " << i << ":" << std::endl;
		std::cin >> salario;

		std::cout << "Digite a data de admissao  do " << i << ":" << std::endl;
		std::cin >> data;

		Funcionario fun(nome, nome_empresa, salario, data);

		funcionarios.push_back(fun);
	}

	std::cout << "Salario 1: " << funcionarios[0].getSalario() << std::endl;

	std::cout << "Salario 2: " << funcionarios[1].getSalario() << std::endl;

	for (int i = 0; i < funcionarios.size(); ++i)
	{
		salario = funcionarios[i].getSalario();
		salario += (salario*0.1);
		funcionarios[i].setSalario(salario);
	}

	std::cout << "Salario 1: " << funcionarios[0].getSalario() << std::endl;

	std::cout << "Salario 2: " << funcionarios[1].getSalario() << std::endl;

	return 0;
}