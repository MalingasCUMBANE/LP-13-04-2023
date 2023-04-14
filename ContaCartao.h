#include "Pessoa.h"
#include <string>
using namespace std;

class ContaCartao : public Pessoa
{
private:
    int nrConta;
    double saldoAnterior;
    double saldoAtual;

public:
    ContaCartao(){};
    ContaCartao(string n, int i, int nr, double sa, double sn) : Pessoa(n, i)
    {
        nrConta = nr;
        saldoAnterior = sa;
        saldoAtual = sn;
    }

    int getNrConta()
    {
        return nrConta;
    }

    double getSaldoAnterior()
    {
        return saldoAnterior;
    }

    double getSaldoAtual()
    {
        return saldoAtual;
    }

    void setNrConta(int nr)
    {
        nrConta = nr;
    }

    void setSaldoAnterior(double sa)
    {
        saldoAnterior = sa;
    }

    void setSaldoAtual(double sn)
    {
        saldoAtual = sn;
    }

    void registarContaCartao();
    void imprimirContaCartao();

    std::string toString()
    {
        return Pessoa::toString() + "Nr. Conta: " + std::to_string(nrConta) + "\nSaldo Anterior: " + std::to_string(saldoAnterior) + "\nSaldo actual: " + std::to_string(saldoAtual) + "\n";
    }
};