#include "UTEmail.hpp"
#include <string>

const std::string UTEmail::VALOR_VALIDO   = "12345@domain1.com";   // Definição de constante para evitar número mágico.
const std::string UTEmail::VALOR_INVALIDO = "AA";   // Definição de constante para evitar número mágico.

void UTEmail::setUp(){
    email = new Email(std::string("teste@domain1.com"));
    estado = SUCESSO;
};

void UTEmail::tearDown(){
    delete email;
};

void UTEmail::testarCenarioSucesso(){
    try{
        email->setEmail(UTEmail::VALOR_VALIDO);
        if (email->getEmail() != UTEmail::VALOR_VALIDO){ // Valor válido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor válido inserido, sem exceções e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){ // Valor válido inserido retornou uma exceção: Falha
        estado = FALHA;
    }
};

void UTEmail::testarCenarioFalha(){
    try{
        email->setEmail(UTEmail::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (email->getEmail() == UTEmail::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
        }
    }
};

int UTEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};
