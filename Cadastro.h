#ifndef CADASTRO_H
#define CADASTRO_H

#include "Cargo.h"
#include "Departamento.h"

using namespace std;

class Cadastro : public Departamento, public Cargo
{
private:
    string nome;
    int idade;
    double salario;
    string nomeCargo;
    string nomeDep;
    string a;

public:
    Cadastro(){};
    Cadastro(std::string nome, int idade, double salario, string nomeCargo, string nomeDep) : Departamento(nome, idade, salario, nomeDep), Cargo(nome, idade, salario, nomeCargo)
    {
        nome = nome;
        idade = idade;
        salario = salario;
        nomeCargo = nomeCargo;
        nomeDep = nomeDep;
    }

string getNome() const {
      return nome;
    }

    int getIdade() const {
      return idade;
    }

    double getSalario() const {
      return salario;
    }

    string getNomeCargo() const {
      return nomeCargo;
    }

    string getNomeDep() const {
      return nomeDep;
    }

    // Setters
    void setNome(string novoNome) {
      nome = novoNome;
    }

    void setIdade(int novaIdade) {
      idade = novaIdade;
    }

    void setSalario(double novoSalario) {
      salario = novoSalario;
    }

    void setNomeCargo(string novoNomeCargo) {
      nomeCargo = novoNomeCargo;
    }

    void setNomeDep(string novoNomeDep) {
      nomeDep = novoNomeDep;
    }

    void registarCadastro();
    void imprimirFuncionario();
};

#endif