
#include "Limite.hpp"
#include <iostream>

Limite::Limite(std::string limite){
    try{
        validar(limite);
        std::cout << "Limite valido" << std::endl;
        m_limite = limite;
    }   catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    };
};

void Limite::validar(std::string limite){
    if(limite != "5" && limite != "10" && limite != "15" && limite != "20"){
        throw std::invalid_argument("Limite não permitido");
    }
}


void Limite::setLimite(std::string novoLimite)
{
    try{
        validar(novoLimite);
        m_limite = novoLimite;
    } catch (std::invalid_argument& e){
        std::cout << e.what() << std::endl;
    }
}

std::string Limite::getLimite() const {
    return m_limite;
}
