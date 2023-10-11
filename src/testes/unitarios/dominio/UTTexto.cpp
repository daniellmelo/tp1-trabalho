#include "UTTexto.hpp"
#include <string>

const std::string UTTexto::VALOR_VALIDO   = "Texto Valido";   // Defini��o de constante para evitar n�mero m�gico.
const std::string UTTexto::VALOR_INVALIDO = "TxIn";   // Defini��o de constante para evitar n�mero m�gico.

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
        if (texto->getTexto() != UTTexto::VALOR_VALIDO){ // Valor v�lido inserido e n�o armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor v�lido inserido, sem exce��es e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){ // Valor v�lido inserido retornou uma exce��o: Falha
        estado = FALHA;
    }
}

void UTTexto::testarCenarioFalha(){
    try{
        texto->setTexto(UTTexto::VALOR_INVALIDO); // Valor inv�lido inserido, n�o deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exce��o: Sucesso
        if (texto->getTexto() == UTTexto::VALOR_INVALIDO){ // Retornou exce��o e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inv�lido inserido, retornou exce��o e n�o foi armazenado: Sucesso
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
