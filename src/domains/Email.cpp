#include <iostream>

#include "Email.hpp"
#include <regex>

Email::Email(std::string email){
    try{
        validar(email);
        std::cout << "Email valido" << std::endl;
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

//190063882
void Email::validar(std::string email) {
    std::regex emailRegex(R"([a-zA-Z0-9.]{2,10}@[a-zA-Z0-9.]{2,20})");

    if (!std::regex_match(email, emailRegex)) {
        throw std::invalid_argument("Formato invalido: o email nao corresponde ao padrao.");
    }

    if (email.find("..") != std::string::npos) {
        throw std::invalid_argument("Formato invalido: nao podem haver pontos em sequencia.");
    }

    if (email.find(".@") != std::string::npos || email.find("@.") != std::string::npos) {
        throw std::invalid_argument("Formato invalido: o '@' nao pode ser precedido ou sucedido por um ponto.");
    }
}
