#include "Senha.hpp"

#include <iostream>
#include <unordered_set>

Senha::Senha(std::string senha){
    try{
        validar(senha);
        m_senha = senha;
        std::cout << "Senha valida" << std::endl;
        }catch (std::invalid_argument& e){
            std::cout << e.what() << std::endl;
        }
};

void Senha::validar(std::string senha){
    // Verificar se a senha tem pelo menos 5 caracteres
    if (senha.size() < 5) {
        throw std::invalid_argument("Sua senha deve conter no minimo 5 caracteres para ser valida.");
    }

    // Verificar se h� pelo menos um caractere mai�sculo
    if (!std::regex_search(senha, std::regex("[A-Z]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere maiusculo");
    }

    // Verificar se h� pelo menos um caractere min�sculo
    if (!std::regex_search(senha, std::regex("[a-z]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere minusculo");
    }

    // Verificar se h� pelo menos um d�gito
    if (!std::regex_search(senha, std::regex("[0-9]"))) {
        throw std::invalid_argument("Sua senha deve pelo menos um d�gito.");
    }

    // Verificar se h� pelo menos um caractere de pontua��o
    if (!std::regex_search(senha, std::regex("[.,;?!]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere de pontua��o");
    }

    // Verificar se n�o h� caracteres duplicados usando um conjunto (unordered_set)
    std::unordered_set<char> caracteres;
    for (char c : senha) {
        if (caracteres.count(c) > 0) {
            throw std::invalid_argument("Sua senha n�o pode conter caracteres duplicados.");
        }
        caracteres.insert(c);
    }

    // Se todas as condi��es forem atendidas, a senha � v�lida

};

std::string Senha::getSenha() const{
    return m_senha;
}

void Senha::setSenha(std::string novaSenha){
    try {
        validar(novaSenha);
        m_senha = novaSenha;
    } catch (std::invalid_argument){
        std::cout << "Senha invalida." << std::endl;
    }
}
