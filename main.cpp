#include <iostream>
#include "Quadro.hpp"
#include "Conta.hpp"
using namespace std;

int main()
{
    //Criacao de Conta
    Conta c1("email@email.com", "Minha conta", "minha_senha");
    cout << c1.getEmail() << endl;
    c1.setEmail("novo@email.com");
    cout << c1.getEmail() << endl;
    cout << "-----------" << endl;
    cout << c1.getNome() << endl;
    c1.setNome("Novo nome");
    cout << c1.getNome() << endl;
    cout << "-----------" << endl;
    cout << c1.getSenha() << endl;
    c1.setSenha("nova senha");
    cout << c1.getSenha() << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-" << endl;


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

    // Criação de carta
/*    Carta c1(5, "Minha carta", "Minha descricao", 3);
    cout << c1.getCodigo() << endl;
    cout << c1.getNome() << endl;
    cout << c1.getDescricao() << endl;
    cout << c1.getColuna() << endl;*/




    return 0;
}
