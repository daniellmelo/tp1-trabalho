#include <iostream>
#include "Coluna.hpp"

Coluna::Coluna(std::string coluna){
    try{
        validar(coluna);
        m_coluna = coluna;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
        throw std::invalid_argument("Valor para coluna invalido.");
    }

};

void Coluna::validar(std::string coluna){
    if(coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO"){
        throw std::invalid_argument("Insira uma coluna valida");
    };
};

std::string Coluna::getColuna() const{
    return m_coluna;
};

void Coluna::setColuna(std::string novaColuna){
    try{
        validar(novaColuna);
        m_coluna = novaColuna;
    } catch (std::invalid_argument& e){
        throw std::invalid_argument(e);
    }
};
