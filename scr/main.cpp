#include <iostream>
#include <string>

#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "gerencia.h"


// para compilar g++ cliente.cpp estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp main.cpp

int main()
{
    Gerencia gerencia = Gerencia();
    Estoque estoque = Estoque();
    estoque.bancoDeDados();


login:
    // precisa fazer as funcoes de login e validacao...

inicio:

    int selecao;

    std::cout << "----- MENU INICIAL -----\n\n";
    std::cout << "1 - Registrar venda\n";
    std::cout << "2 - Cadastrar cliente\n";
    std::cout << "3 - Gestao de funcionarios\n";
    std::cout << "4 - Gestao de vendas\n";
    std::cout << "5 - Gestao de financas\n";
    std::cout << "6 - Gestao de estoque\n";
    std::cout << "7 - Encerrar programa\n";
    std::cout << "Informe o numero: ";
    std::cin >> selecao;

    // tratar a excessao da entrada
    // tratar excessao dessa entrada!!
    // so pode entrar um numero int entre 1 e 7

    if (selecao == 1)
    {   venda:
        int selecao2;

        double valorTotal,desconto;
        int idFuncionario, idProduto;
        std::string nomeCliente;
        std::string documentoCliente;

    
       gerencia.novaVenda(idFuncionario, nomeCliente, documentoCliente, idProduto, desconto, valorTotal);

        std :: system("CLS");

        std :: cout << "\nO que deseja fazer agora?\n";
        std :: cout << "1 - Cadastrar outra venda\n";
        std :: cout << "2 - Voltar ao menu inicial\n";
        std :: cin >> selecao2;

        std :: system("CLS");

        if (selecao2==1) {
            goto venda;
        }
        else if (selecao2==2) {
            goto inicio;

        }
        // nova venda
        // logo apos abre um menu
        // 1 - cadastrar outra venda
        // 2 - voltar ao menu goto inicio;
    }
    else if (selecao == 2)
    {   cliente:
        int selecao3;

        std::string nome;
        long long int documento;
        std::cout << "----- CADASTRO DE CLIENTE -----\n\n";
        std::cout << "Nome do cliente: \n";
        std::cin.ignore();
        getline(std::cin, nome);
        std::cout << "CPF ou CNPJ do cliente: \n";
        std::cin >> documento;
        // tratar entrada


        std::cout << "Cliente cadastrado com sucesso!";

        std :: system("CLS");

        std :: cout << "\nO que deseja fazer agora?\n";
        std :: cout << "1 - Cadastrar outro cliente\n";
        std :: cout << "2 - Voltar ao menu inicial\n";
        std :: cin >> selecao3;

        std :: system("CLS");

        if (selecao3==1) {
            goto cliente;
        }
        else if (selecao3==2) {
            goto inicio;
        }

        // cadastro clientes
        // logo apos abre um menu
        // 1 - cadastrar mais clientes
        // 2 - voltar ao menu goto inicio;
    }
    else if (selecao == 3)
    {   
        int resp, resp2;
        std::string nome; 
        long long int documento;
        double porcentagemComissao;
        double salarioBase;
        double horasSemanais;
        std::cout << "----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp;

        if (resp==1) {
            std :: cout << "Qual o cargo do funcionario? \n\n";
            std :: cout << "1 - Gerente\n";
            std :: cout << "2 - Vendedor\n";
            std :: cin >> resp2;
            
            if (resp2==1) {
                gerencia.novoGerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais); 
            }
            else if (resp2==2) {
                gerencia.novoVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);
            }
        }
        else if (resp==2) {
            //editarfunc



        }
        else if (resp==3) {
            //removerfunc



        }
        else if (resp==4) {
            goto inicio; //voltar ao menu inicial
        }
        // menu de gestao de funcionarios
        // 1 - cadastrar novo funcionario - 1 - gerente 2- vendedor
        // 2 - editar funcionarios - 1 - gerente 2- vendedor
        // 3 - remover funcionarios - 1- gerente 2- vendedor
        // 4 - voltar ao menu goto inicio;
    }
    else if (selecao == 4)
    {
        int resp3;

        std::cout << "----- GESTAO DE VENDAS -----\n\n";
        std::cout << "1 - Editar venda\n";
        std::cout << "2 - Cancelar venda\n";
        std::cout << "3 - Gerar relatorio de vendas\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp3;

        if (resp3==1) {
            //editar alguma venda
        }
        else if (resp3==2) {
            //cancelar alguma venda



        }
        else if (resp3==3) {
            //gerar relatorio de vendas



        }
        else if (resp3==4) {
            goto inicio; //voltar ao menu inicial
        }
        // menu de gestao de vendas
        //  1 - editar alguma venda
        //  2 - cancelar venda
        //  3 - gerar relatorio de vendas
        //  4 - voltar ao menu goto inicio;
    }
    else if (selecao == 5)
    {
        int resp4;

        std::cout << "----- GESTAO DE FINANCAS -----\n\n";
        std::cout << "1 - Novo pagamento\n";
        std::cout << "2 - Ver pagamentos\n";
        std::cout << "3 - Gerar contracheque\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp4;

        if (resp4==1) {
            //novo pagamento
        }
        else if (resp4==2) {
            //ver pagamentos



        }
        else if (resp4==3) {
            //gerar contracheque



        }
        else if (resp4==4) {
            goto inicio; //voltar ao menu inicial
        }
        // menu de gerenciar pagamentos
        //  1 - novo pagamento
        //  2 - ver pagamentos
        //  3 - gerar contracheque
        //  4 - voltar ao menu goto inicio;
    }
    else if (selecao == 6)
    {
        int resp5;

        std::cout << "----- GESTAO DE ESTOQUE -----\n\n";
        std::cout << "1 - Consultar estoque\n";
        std::cout << "2 - Adicionar item\n";
        std::cout << "3 - Remover item\n";
        std::cout << "4 - Editar item\n";
        std::cout << "5 - Voltar ao menu inicial\n";
        std::cin >> resp5;

        if (resp5==1) {
            //consultar estoque
        }
        else if (resp5==2) {
            //adicionar item



        }
        else if (resp5==3) {
            //remover item



        }
        else if (resp5==4) {
            //editar item



        }
        else if (resp5==5) {
            goto inicio; //voltar ao menu inicial
        }
        // menu de gestao de estoque
        // 1 - consultar estoque
        // 2 - adicionar item
        // 3 - remover item
        // 4 - editar item 
        // 5 - voltar ao menu
    }
    else if (selecao == 7)
    {
        // sair do programa
        return 0;
    }
    
    
    return 0;
}