#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;

public:
    Pessoa(){};
    Pessoa(std::string nome, int idade)
    {
        nome = nome;
        idade = idade;
    }

    string getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }

    void setNome(string n)
    {
        nome = n;
    }

    void setIdade(int i)
    {
        idade = i;
    }
    std::string toString()
    {
        return "Nome: " + nome + "\nIdade: " + std::to_string(idade) + "\n";
    }
};

#endif