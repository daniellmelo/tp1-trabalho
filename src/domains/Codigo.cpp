#include "Codigo.hpp"
#include <iostream>
#include <regex>

Codigo::Codigo(std::string codigo){
    try{
        validar(codigo);
        m_codigo = codigo;
    }   catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        throw std::invalid_argument("Formato de codigo invalido.");
    };
};

void Codigo::validar(std::string codigo) {

    std::regex padrao("^[A-Z]{2}[0-9]{2}$");

    if (!std::regex_match(codigo, padrao)) {
        throw std::invalid_argument("Codigo invalido. Certifique-se de que esta no formato LLDD.");
    }
};

std::string Codigo::getCodigo() const{
    return m_codigo;
};

void Codigo::setCodigo(std::string novoCodigo){
    try{
        validar(novoCodigo);
        m_codigo = novoCodigo;
    } catch (std::invalid_argument& e){
        std::cout << e.what() << std::endl;
    }
};
