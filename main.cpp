// -*- coding: utf-8 -*-
#include <iostream>
#include <locale>

#include "src/entities/Quadro.hpp"
#include "src/entities/Cartao.hpp"
#include "src/entities/Conta.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");

    //Criacao de Conta
        cout << "---- Criando conta..." << endl;
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
        cout << "---- Criando quadro..." << endl;

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

    // Criação de carta
/*    Carta c1(5, "Minha carta", "Minha descricao", 3);
    cout << c1.getCodigo() << endl;
    cout << c1.getNome() << endl;
    cout << c1.getDescricao() << endl;
    cout << c1.getColuna() << endl;*/

    // criação de dominio
        // código

 /*       cout << "-----------" << endl;

        Codigo mycod("TT67"); //true
        Codigo myCOD("TT6Y"); //false
        cout << mycod.getCodigo() << endl;
        mycod.setCodigo("JJ65");
        cout << mycod.getCodigo() << endl;


    // criação de dominio
        // senha
        cout << "-----------\n" << endl;


        Senha s1;

        s1.setSenha("xJ5!A");

        cout << s1.getSenha() << endl;


        // texto

        Texto t1;
        t1.setTexto("Aaaaaaaaa");

*/

    return 0;
}
