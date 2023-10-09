// -*- coding: utf-8 -*-
#include <iostream>

#include "src/entities/Quadro.hpp"
#include "src/entities/Cartao.hpp"
#include "src/entities/Conta.hpp"

using namespace std;

int main()
{

    //Criacao de Conta
        cout << "=-=-=-=-=-= Criando conta =-=-=-=-=-=" << endl;
        Conta c1(string("a.b@example.com"), string("Joao da Silva Jr"), string("xH?1nFm"));
        cout << "NOME: " << c1.getNome() << endl;
        cout << "EMAIL: " << c1.getEmail() << endl;
        cout << "SENHA: " << c1.getSenha() << endl;
        cout << "---- Alterando dados da conta..." << endl;
        c1.setNome("Daniel Melo");
        c1.setEmail("12345@domain1.com");
        c1.setSenha("K3sS,Lx");
        cout << "NOME: " << c1.getNome() << endl;
        cout << "EMAIL: " << c1.getEmail() << endl;
        cout << "SENHA: " << c1.getSenha() << endl;

      //Criação de quadro
        cout << "=-=-=-=-=-= Criando quadro =-=-=-=-=-=" << endl;

        Quadro q1(Codigo("AA00"), Texto("Meu quadro"),Texto("Minha descricao"), Limite("5"));
        cout << "CODIGO: " << q1.getCodigo() << endl;
        cout << "NOME: " << q1.getNome() << endl;
        cout << "DESCRICAO: " << q1.getDescricao() << endl;
        cout << "LIMITE: " << q1.getLimite() << endl;

        cout << "---- Alterando dados do quadro..." << endl;

        q1.setNome("Meu quadrinho");
        q1.setCodigo("BB00");
        q1.setDescricao("L5sS,Lx");
        q1.setLimite("10");
        cout << "CODIGO: " << q1.getCodigo() << endl;
        cout << "NOME: " << q1.getNome() << endl;
        cout << "DESCRICAO: " << q1.getDescricao() << endl;
        cout << "LIMITE: " << q1.getLimite() << endl;

        cout << "=-=-=-=-=-= Criando cartao =-=-=-=-=-=" << endl;
        Cartao cartao1(Codigo("AA11"), Texto("Meu cartao"), Texto("Esse e um cartao"), Coluna("SOLICITADO"));
        cout << cartao1.getCodigo() << endl;
        cout << cartao1.getNome() << endl;
        cout << cartao1.getDescricao() << endl;
        cout << cartao1.getColuna() << endl;

        cout << "---- Alterando dados do cartao..." << endl;

        cartao1.setCodigo("BB2kjkj2");
        /*cartao1.setNome("Novo nome do cartao");
        cartao1.setDescricao("Esse e o novo cartao");
        cartao1.setColuna("EM EXECUCAO");
        cout << cartao1.getCodigo() << endl;
        cout << cartao1.getNome() << endl;
        cout << cartao1.getDescricao() << endl;
        cout << cartao1.getColuna() << endl;*/
    return 0;
};

