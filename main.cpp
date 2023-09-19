#include <iostream>
#include "../dominios.hpp"
using namespace std;

int main()
{
    //Criacao de Conta
    Conta c1("email@email.com", "Minha conta", "minha_senha");
    cout << c1.getEmail() << endl;
    cout << c1.getNome() << endl;
    cout << c1.getSenha() << endl;

    // Criação de quadro
    Quadro q1(5, "Meu quadro", "Minha descricao", 3);
    cout << q1.getCodigo() << endl;
    cout << q1.getNome() << endl;
    cout << q1.getDescricao() << endl;
    cout << q1.getLimite() << endl;

    // Criação de carta
/*    Carta c1(5, "Minha carta", "Minha descricao", 3);
    cout << c1.getCodigo() << endl;
    cout << c1.getNome() << endl;
    cout << c1.getDescricao() << endl;
    cout << c1.getColuna() << endl;*/




    return 0;
}
