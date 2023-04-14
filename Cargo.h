#ifndef CARGO_H
#define CARGO_H
#include "Funcionario.h"
#include <string>
using namespace std;

class Cargo : public Funcionario
{

private:
    string cargoNome;

public:
    Cargo(){};
    Cargo(string nome, int idade, double sal, string cargoNome) : Funcionario(nome, idade, sal)
    {
        cargoNome = cargoNome;
    }

    string getCargoNome()
    {
        return cargoNome;
    }

    void setCargoNome(string cargoNome)
    {
        cargoNome = cargoNome;
    }

    // void registarFuncionario();

    std::string toString()
    {
        return Funcionario::toString() + "cargoNome: " + cargoNome + "\n";
    }
};

#endif
