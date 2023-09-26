
#include "Senha.hpp"
#include <unordered_set>


bool Senha::validar(std::string senha){
    // Verificar se a senha tem pelo menos 5 caracteres
    if (senha.size() < 5) {
        return false;
    }

    // Verificar se h� pelo menos um caractere mai�sculo
    if (!std::regex_search(senha, std::regex("[A-Z]"))) {
        return false;
    }

    // Verificar se h� pelo menos um caractere min�sculo
    if (!std::regex_search(senha, std::regex("[a-z]"))) {
        return false;
    }

    // Verificar se h� pelo menos um d�gito
    if (!std::regex_search(senha, std::regex("[0-9]"))) {
        return false;
    }

    // Verificar se h� pelo menos um caractere de pontua��o
    if (!std::regex_search(senha, std::regex("[.,;?!]"))) {
        return false;
    }

    // Verificar se n�o h� caracteres duplicados usando um conjunto (unordered_set)
    std::unordered_set<char> caracteres;
    for (char c : senha) {
        if (caracteres.count(c) > 0) {
            return false;
        }
        caracteres.insert(c);
    }

    // Se todas as condi��es forem atendidas, a senha � v�lida
    return true;
};

std::string Senha::getSenha() const{
    return m_senha;
}

void Senha::setSenha(std::string novaSenha){
    if (validar(novaSenha)){
        m_senha = novaSenha;
    } else {
        throw std::invalid_argument("Senha inv�lida");
    }

}
