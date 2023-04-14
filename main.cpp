#include <iostream>
#include <string>
#include "contaCartao.h"
#include "cadastro.h"
#include "departamento.h"

using namespace std;

void mainMenu();
void subMenuFuncionario();
void subMenuContaCartao();
int main()
{
    mainMenu();
}

void mainMenu()
{

    int option;

    do
    {
        // system("clear||cls");
        cout << "Escolha uma opcao:" << endl;
        cout << "1. Funcionario" << endl;
        cout << "2. Conta cartao" << endl;
        cout << "0. Sair" << endl;

        cin >> option;
        switch (option)
        {
        case 1:

            subMenuFuncionario();
            break;

        case 2:

            subMenuContaCartao();
            break;

        case 3:

            cout << "Voce escolheu a opcao 3." << endl;
            break;
        case 0:
            system("clear||cls");

            cout << "Obrigado pela preferencia! Volte sempre, @UEM_DEVELOPERS." << endl;
            exit(1);
            break;

        default:
            cout << "Opcao invalida. Tente novamente." << endl;
            break;
        }

    } while (option != 4);

    // return 0;
}

void subMenuFuncionario()
{
    int op = 0;
    Cadastro funcio;
    do
    {
       cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "                        Funcionario                   " << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "1 - Registar funcionario" << endl;
        cout << "2 - Visualizar funcionario" << endl;
        cout << "3 - Voltar Menu Principal" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            system("clear||cls");
            funcio.registarCadastro();
            break;
        case 2:
            // system("clear||cls");
            cout << "Visualizar funcionario" << endl;
            funcio.imprimirFuncionario();
            break;
        case 3:
            system("clear||cls");
            mainMenu();
            break;

        default:

            cout << "invalido";
            break;
        }
    } while (op != 3);
}

void subMenuContaCartao()
{
    int op = 0;
    ContaCartao ccart;
    do
    {
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "                        Conta cartao                   " << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "1 - Registar Conta cartao" << endl;
        cout << "2 - Visualizar Conta cartao" << endl;
        cout << "3 - Voltar Menu Principal" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            system("clear||cls");
            ccart.registarContaCartao();
            break;

        case 2:

            ccart.imprimirContaCartao();
            break;

        case 3:

            mainMenu();
            break;

        default:
            cout << "invalido";
            break;
        }
    } while (op != 3);
}
