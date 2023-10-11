#include "Limite.hpp"
#include <iostream>

Limite::Limite(std::string limite){
    try{
        validar(limite);
        m_limite = limite;
    }   catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        throw std::invalid_argument("Limite invalido");
    };
};

void Limite::validar(std::string limite){
    if(limite != "5" && limite != "10" && limite != "15" && limite != "20"){
        throw std::invalid_argument("Limite nao permitido");
    }
}


void Limite::setLimite(std::string novoLimite)
{
    try{
        validar(novoLimite);
        m_limite = novoLimite;
    } catch (std::invalid_argument& e){
        //std::cout << e.what() << std::endl;
        throw std::invalid_argument(e);
    }
}

std::string Limite::getLimite() const {
    return m_limite;
}
