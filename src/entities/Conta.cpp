#include "Conta.hpp"

Conta::Conta(Email email, Texto nome, Senha senha):
    m_email(email), m_nome(nome), m_senha(senha){ // todo alterar tipo dos valores dos param

}
std::string Conta::getEmail() const{
    return m_email.getEmail();
};
std::string Conta::getNome() const{
    return m_nome.getTexto();
};
std::string Conta::getSenha() const{
    return m_senha.getSenha();
};

void Conta::setEmail(std::string novoEmail){
    m_email.setEmail(novoEmail);

};
void Conta::setNome(std::string novoNome){
    m_nome.setTexto(novoNome);

};
void Conta::setSenha(std::string novoSenha){
    m_senha.setSenha(novoSenha);

};
