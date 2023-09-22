#include "../Conta.hpp"

Conta::Conta(string email, string nome, string senha): email(email), nome(nome), senha(senha) // todo alterar tipo dos valores dos param
{

}
string Conta::getEmail() const{
    return email;
};
string Conta::getNome() const{
    return nome;
};
string Conta::getSenha() const{
    return senha;
};

void Conta::setEmail(string novoEmail){
    email = novoEmail;

}
void Conta::setNome(string novoNome){
    nome = novoNome;

}
void Conta::setSenha(string novoSenha){
    senha = novoSenha;

}
