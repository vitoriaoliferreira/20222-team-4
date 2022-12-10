#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <vector>
#include "produto.h"
#include "funcionario.h"


class Estoque
{
private:
    static std::vector<Produto> listaProdutos;

public:
    Estoque ();
    void bancoDeDados(); // criar um "banco de dados" fake 
    bool consultaEstoque(Produto produto); //buscar se tem o produto no estoque
    void adicionarProduto(const Produto &produto); // adiciona o produto
    int Estoque::buscarProduto(Produto produto); //busca produto na lista de produtos
    void updateProduto(const Produto &produto); // atualiza o produto
    void deleteProduto(Produto &produto); //deletar um produto
    ~Estoque();
};

#endif