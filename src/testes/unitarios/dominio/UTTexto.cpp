#include "UTTexto.hpp"
#include <string>

const std::string UTTexto::VALOR_VALIDO   = "Texto Valido";   // Definição de constante para evitar número mágico.
const std::string UTTexto::VALOR_INVALIDO = "TxIn";   // Definição de constante para evitar número mágico.

void UTTexto::setUp(){
    texto = new Texto(std::string("Valido Valido"));
    estado = SUCESSO;
}

void UTTexto::tearDown(){
    delete texto;
}

void UTTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(UTTexto::VALOR_VALIDO);
        if (texto->getTexto() != UTTexto::VALOR_VALIDO){ // Valor válido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor válido inserido, sem exceções e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){ // Valor válido inserido retornou uma exceção: Falha
        estado = FALHA;
    }
}

void UTTexto::testarCenarioFalha(){
    try{
        texto->setTexto(UTTexto::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (texto->getTexto() == UTTexto::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
        }
    }
}

int UTTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
