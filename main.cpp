// -*- coding: utf-8 -*-
#include <iostream>

#include "src/testes/unitarios/entidade/UTCarta.hpp"
#include "src/testes/unitarios/entidade/UTConta.hpp"
#include "src/testes/unitarios/entidade/UTQuadro.hpp"

using namespace std;

int main()
{
    UTConta testeConta;

    switch(testeConta.run()){
    case UTConta::SUCESSO:
        cout << "SUCESSO - CONTA" << endl;
        break;
    case UTConta::FALHA:
        cout << "FALHA - CONTA" << endl;
        break;
    };

    UTQuadro testeQuadro;

    switch(testeQuadro.run()){
    case UTQuadro::SUCESSO:
        cout << "SUCESSO - QUADRO" << endl;
        break;
    case UTQuadro::FALHA:
        cout << "FALHA - QUADRO" << endl;
        break;
    };

    UTCartao testeCartao;

    switch(testeCartao.run()){
    case UTCartao::SUCESSO:
        cout << "SUCESSO - CARTAO" << endl;
        break;
    case UTCartao::FALHA:
        cout << "FALHA - CARTAO" << endl;
        break;
    };

    /*Criacao de Conta
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

        cartao1.setCodigo("BB22");
        cartao1.setNome("Novo nome do cartao");
        cartao1.setDescricao("Esse e o novo cartao");
        cartao1.setColuna("EM EXECUCAO");
        cout << cartao1.getCodigo() << endl;
        cout << cartao1.getNome() << endl;
        cout << cartao1.getDescricao() << endl;
        cout << cartao1.getColuna() << endl;*/
    return 0;
};

