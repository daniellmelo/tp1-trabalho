#include <iostream>

#include "Email.hpp"

Email::Email(std::string email){
    try{
        validar(m_email);
        std::cout << "O email eh valido" << std::endl;
        m_email = email;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    };

};

std::string Email::getEmail() const{
    return m_email;
};

void Email::setEmail(std::string novoEmail){
    try{
        validar(novoEmail);
        m_email = novoEmail;
    } catch (std::invalid_argument& e){
        std::cout << e.what() << std::endl;
    }
};

void Email::validar(std::string email){
    size_t atPos = email.find('@');
    if (atPos == std::string::npos || atPos == 0 || atPos == email.length() - 1) {
        std::cout << "1" << std::endl;
        throw std::invalid_argument("Formato inválido: o '@' deve estar presente e não pode ser o primeiro ou último caractere.");
    }

    std::string nome = email.substr(0, atPos);
    std::string dominio = email.substr(atPos + 1);

    if (nome.length() < 2 || nome.length() > 10 || dominio.length() < 2 || dominio.length() > 20) {
        std::cout << "2" << std::endl;
        throw std::invalid_argument("Formato inválido: o nome e o domínio devem ter entre 2 e 10 (nome) e entre 2 e 20 (domínio) caracteres, respectivamente.");
    }

    for (char c : nome) {
        if (!isalnum(c) && c != '.') {
            throw std::invalid_argument("Formato inválido: o nome deve conter apenas letras, dígitos (0-9) ou pontos.");
        }
    }

    for (char c : dominio) {
        if (!isalnum(c) && c != '.') {
            throw std::invalid_argument("Formato inválido: o domínio deve conter apenas letras, dígitos (0-9) ou pontos.");
        }
    }

    if (nome.find("..") != std::string::npos || dominio.find("..") != std::string::npos) {
        throw std::invalid_argument("Formato inválido: não podem haver pontos em sequência.");
    }

    if (nome.find(".@") != std::string::npos || nome.find("@.") != std::string::npos ||
        dominio.find(".@") != std::string::npos || dominio.find("@.") != std::string::npos) {
        throw std::invalid_argument("Formato inválido: o '@' não pode ser precedido ou sucedido por um ponto.");
    }



}
