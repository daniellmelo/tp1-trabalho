#include "UTEmail.hpp"
#include <string>

const std::string UTEmail::VALOR_VALIDO   = "12345@domain1.com";   // Defini��o de constante para evitar n�mero m�gico.
const std::string UTEmail::VALOR_INVALIDO = "AA";   // Defini��o de constante para evitar n�mero m�gico.

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
        if (email->getEmail() != UTEmail::VALOR_VALIDO){ // Valor v�lido inserido e n�o armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor v�lido inserido, sem exce��es e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){ // Valor v�lido inserido retornou uma exce��o: Falha
        estado = FALHA;
    }
};

void UTEmail::testarCenarioFalha(){
    try{
        email->setEmail(UTEmail::VALOR_INVALIDO); // Valor inv�lido inserido, n�o deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exce��o: Sucesso
        if (email->getEmail() == UTEmail::VALOR_INVALIDO){ // Retornou exce��o e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inv�lido inserido, retornou exce��o e n�o foi armazenado: Sucesso
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
