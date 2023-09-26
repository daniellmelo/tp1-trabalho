
#include "Senha.hpp"
#include <unordered_set>


bool Senha::validar(std::string senha){
    // Verificar se a senha tem pelo menos 5 caracteres
    if (senha.size() < 5) {
        return false;
    }

    // Verificar se há pelo menos um caractere maiúsculo
    if (!std::regex_search(senha, std::regex("[A-Z]"))) {
        return false;
    }

    // Verificar se há pelo menos um caractere minúsculo
    if (!std::regex_search(senha, std::regex("[a-z]"))) {
        return false;
    }

    // Verificar se há pelo menos um dígito
    if (!std::regex_search(senha, std::regex("[0-9]"))) {
        return false;
    }

    // Verificar se há pelo menos um caractere de pontuação
    if (!std::regex_search(senha, std::regex("[.,;?!]"))) {
        return false;
    }

    // Verificar se não há caracteres duplicados usando um conjunto (unordered_set)
    std::unordered_set<char> caracteres;
    for (char c : senha) {
        if (caracteres.count(c) > 0) {
            return false;
        }
        caracteres.insert(c);
    }

    // Se todas as condições forem atendidas, a senha é válida
    return true;
};

std::string Senha::getSenha() const{
    return m_senha;
}

void Senha::setSenha(std::string novaSenha){
    if (validar(novaSenha)){
        m_senha = novaSenha;
    } else {
        throw std::invalid_argument("Senha inválida");
    }

}
