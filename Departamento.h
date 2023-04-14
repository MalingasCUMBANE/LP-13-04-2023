#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "Funcionario.h"
#include <iostream>
using namespace std;

class Departamento : public Funcionario
{

private:
    std::string nomeDep;

public:
    Departamento(){};
    Departamento(std::string nome, int idade, double sal, string nomeDep) : Funcionario(nome, idade, sal)
    {
        nomeDep = nomeDep;
    };

    string getNomeDep()
    {
        return nomeDep;
    }

    void setNomeDep(string nomeDep)
    {
        nomeDep = nomeDep;
    }

    std::string toString()
    {
        return Funcionario::toString() + "nomeDep: " + nomeDep + "\n";
    }
};

#endif