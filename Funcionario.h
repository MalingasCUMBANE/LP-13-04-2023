#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "Pessoa.h"
#include <string>
#include <iomanip>

using namespace std;

class Funcionario : public Pessoa
{
private:
    double salario;

public:
    Funcionario(){};
    Funcionario(std::string nome, int idade, double salario) : Pessoa(nome, idade)
    {
        salario = salario;
    };

    double getSalario()
    {
        return salario;
    }
    void setSalario(double salario)
    {
        salario = salario;
    }

    std::string toString()
    {

        return Pessoa::toString() + "Salario: " + std::to_string(salario) + "\n";
    }

    // void registarFuncionario();
};

#endif