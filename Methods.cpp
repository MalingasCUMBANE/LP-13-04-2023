#include "funcionario.h"
#include "Cadastro.h"
#include "contacartao.h"
#include "pessoa.h"
#include <iostream>
#include <sstream>
#include <fstream>

void Cadastro::registarCadastro()
{
  int escolha = 0;
  int opcao = 0;

  fstream ficheiroFuncionario;

  system("clear||cls");

  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "                        Registar Funcionario                   " << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

  cout << "Insira o nome: " << endl;
  cin >> nome;

  cout << "Insira a idade: " << endl;
  cin >> idade;

  cout << "Insira o salario: " << endl;
  cin >> salario;

  cout << "Escolha o departamento: " << endl;
  cout << "1. Back Office\n"
       << "2. Front Office\n"
       << "3. Analise de dados\n"
       << "4. Desenvolvimento\n"
       << "5. Pesquisa\n"
       << "6. Recuros humano\n"
       << "7. Outro" << endl;
  cin >> escolha;

  while (escolha < 1 || escolha > 7)
  {
    cout << "Nome do Departamento: " << endl;
    cout << "1. Back Office\n"
         << "2. Front Office\n"
         << "3. Analise de dados\n"
         << "4. Desenvolvimento\n"
         << "5. Pesquisa\n"
         << "6. Recuros humano\n"
         << "7. Outro" << endl;
    cin >> escolha;
  };
  switch (escolha)
  {
  case 1:
    nomeDep = "Back Office";
    break;
  case 2:
    nomeDep = "Front Office";
    break;
  case 3:
    nomeDep = "Analise de dados";
    break;
  case 4:
    nomeDep = "Desenvolvimento";
    break;
  case 5:
    nomeDep = "Pesquisa";
    break;
  case 6:
    nomeDep = "Recuros humano";
    break;
  case 7:
    nomeDep = "Outro";
    break;
  default:
    cout << "Escolha uma opção válida." << endl;
  };

  cout << "Nome do Cargo: " << endl;
  cin >> nomeCargo;

  ficheiroFuncionario.open("z_funcionario.txt", ios::app);
  if (ficheiroFuncionario.is_open())
  {
    ficheiroFuncionario << "=======================================================" << endl;
    ficheiroFuncionario << "   Nome   |   Idade    |    Salario   |   Departamento    |    Cargo" << endl;
    ficheiroFuncionario << "=======================================================" << endl;
    ficheiroFuncionario << "     " << nome << "     |     " << idade << "     |     " << salario << "     |     " << nomeDep << "     |    " << nomeCargo << endl;
    ficheiroFuncionario.close();
  };
};

void Cadastro::imprimirFuncionario()
{
  
  std::ifstream ficheiroFuncionario("z_funcionario.txt"); // abre o arquivo para leitura
  if (ficheiroFuncionario.is_open())
  { // verifica se o arquivo foi aberto com sucesso
    std::string linha;
    while (std::getline(ficheiroFuncionario, linha))
    {                                  // lê cada linha do arquivo
      std::cout << linha << std::endl; // exibe a linha na tela
    }
    ficheiroFuncionario.close(); // fecha o arquivo
  }
  else
  {
    std::cout << "Erro ao abrir o arquivo!" << std::endl;
  }
};

void ContaCartao::registarContaCartao()
{

  fstream ficheiroContaCartao;

  system("clear||cls");

  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "                        Registar Conta cartao                   " << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

  cout << "Insira o nome: " << endl;
  cin >> nome;

  cout << "Insira a idade: " << endl;
  cin >> idade;

  cout << "Insira o numero de conta: " << endl;
  cin >> nrConta;

  cout << "Insira o Saldo anterior: " << endl;
  cin >> saldoAnterior;

  cout << "Insira o Saldo actual: " << endl;
  cin >> saldoAtual;

  ficheiroContaCartao.open("z_contacartao.txt", ios::app);
  if (ficheiroContaCartao.is_open())
  {
    ficheiroContaCartao << "=======================================================" << endl;
    ficheiroContaCartao << "   Nome   |   Idade    |    Numero de conta   |   Saldo anterior    |    Saldo actual" << endl;
    ficheiroContaCartao << "=======================================================" << endl;
    ficheiroContaCartao << "     " << nome << "     |     " << idade << "     |     " << nrConta << "     |     " << saldoAnterior << "     |    " << saldoAtual << endl;
    ficheiroContaCartao.close();
  };
};

void ContaCartao::imprimirContaCartao()
{
  std::ifstream ficheiroCargo("z_contacartao.txt"); // abre o arquivo para leitura
  if (ficheiroCargo.is_open())
  { // verifica se o arquivo foi aberto com sucesso
    std::string linha;
    while (std::getline(ficheiroCargo, linha))
    {                                  // lê cada linha do arquivo
      std::cout << linha << std::endl; // exibe a linha na tela
    }
    ficheiroCargo.close(); // fecha o arquivo
  }
  else
  {
    std::cout << "Erro ao abrir o arquivo!" << std::endl;
  }
};