#include "Senha.hpp"

#include <iostream>
#include <unordered_set>

Senha::Senha(std::string senha){
        try{
        validar(senha);
        m_senha = senha;
        }catch (std::invalid_argument& e){
            std::cout << e.what() << std::endl;
            throw std::invalid_argument("Formato de senha inválido.");
        }
};

void Senha::validar(std::string senha){
    // Verificar se a senha tem pelo menos 5 caracteres
    if (senha.size() < 5) {
        throw std::invalid_argument("Sua senha deve conter no minimo 5 caracteres para ser valida.");
    }

    // Verificar se há pelo menos um caractere maiúsculo
    if (!std::regex_search(senha, std::regex("[A-Z]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere maiusculo");
    }

    // Verificar se há pelo menos um caractere minúsculo
    if (!std::regex_search(senha, std::regex("[a-z]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere minusculo");
    }

    // Verificar se há pelo menos um dígito
    if (!std::regex_search(senha, std::regex("[0-9]"))) {
        throw std::invalid_argument("Sua senha deve pelo menos um dígito.");
    }

    // Verificar se há pelo menos um caractere de pontuação
    if (!std::regex_search(senha, std::regex("[.,;?!]"))) {
        throw std::invalid_argument("Sua senha deve conter no minimo um caractere de pontuação");
    }

    // Verificar se não há caracteres duplicados usando um conjunto (unordered_set)
    std::unordered_set<char> caracteres;
    for (char c : senha) {
        if (caracteres.count(c) > 0) {
            throw std::invalid_argument("Sua senha não pode conter caracteres duplicados.");
        }
        caracteres.insert(c);
    }

    // Se todas as condições forem atendidas, a senha é válida

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
