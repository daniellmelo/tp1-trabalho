#include "Codigo.hpp"

Codigo::Codigo(std::string codigo): m_codigo(codigo){
    std::cout << validar(m_codigo) << std::endl;
};

bool Codigo::validar(std::string codigo) {

    std::regex padrao("^[A-Z]{2}[0-9]{2}$");

    if (std::regex_match(codigo, padrao)) {
        std::cout << "Codigo valido!" << std::endl;
        return true;
    }
    std::cout << "Codigo invalido. Certifique-se de que esta no formato LLDD." << std::endl;
    return false;

};

std::string Codigo::getCodigo(){
    return m_codigo;
};

void Codigo::setCodigo(std::string novoCodigo){
    if (validar(novoCodigo)){
        m_codigo = novoCodigo;
    } else {
        throw std::invalid_argument("Código inválido.");
    }

};
