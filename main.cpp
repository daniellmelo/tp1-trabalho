#include <iostream>

#include "Quadro.hpp"
#include "Conta.hpp"
#include "domains/Senha.hpp"
#include "domains/Codigo.hpp"
#include "domains/Texto.hpp"

using namespace std;

int main()
{
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


    //c1.setEmail("novo@email.com");
    /*cout << c1.getEmail() << endl;
    cout << "-----------" << endl;
    cout << c1.getNome() << endl;
    c1.setNome("Novo nome");
    cout << c1.getNome() << endl;
    cout << "-----------" << endl;
    cout << c1.getSenha() << endl;
    c1.setSenha("nova senha");
    cout << c1.getSenha() << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-" << endl;*/
/*

    // Criação de quadro
    Quadro q1(5, "Meu quadro", "Minha descricao", 3);
    cout << q1.getCodigo() << endl;
    q1.setCodigo(6);
    cout << q1.getCodigo() << endl;
    cout << "-----------" << endl;
    cout << q1.getNome() << endl;
    q1.setNome("novo nome de quadro");
    cout << q1.getNome() << endl;
    cout << "-----------" << endl;
    cout << q1.getDescricao() << endl;
    q1.setDescricao("nova descricao");
    cout << q1.getDescricao() << endl;
    cout << "-----------" << endl;
    cout << q1.getLimite() << endl;
    q1.setLimite(4);
    cout << q1.getLimite() << endl;
*/
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
