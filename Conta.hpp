#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED

#include <string>

using namespace std;

class Conta { //domain
private:
    string email;
    string nome;
    string senha;

public:
    Conta(string email, string nome, string senha);
    string getEmail() const;
    string getNome() const;
    string getSenha() const;

    void setEmail(string novoEmail);
    void setNome(string novoNome);
    void setSenha(string novoSenha);
};


#endif // CONTA_HPP_INCLUDED
