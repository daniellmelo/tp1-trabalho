#include "UTCodigo.hpp"
#include <iostream>

const std::string UTCodigo::VALOR_VALIDO   = "BB00";   // Defini??????o de constante para evitar n???mero m???gico.
const std::string UTCodigo::VALOR_INVALIDO = "AA3030";   // Defini??????o de constante para evitar n???mero m???gico.

void UTCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
};

void UTCodigo::tearDown(){
    delete codigo;
};

void UTCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(UTCodigo::VALOR_VALIDO);
        if (codigo->getCodigo() != UTCodigo::VALOR_VALIDO){ // Valor valido inserido e n�o armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO;// Valor v�lido inserido, sem exce��es e armazenado: Sucesso

    }
    catch(std::invalid_argument &excecao){              // Valor v�ldio inserido retornou uma excecao: Falha

        estado = FALHA;
    }
};

void UTCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(UTCodigo::VALOR_INVALIDO); // Valor inv�lido inserido, n�o deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }

    catch(std::exception &excecao){ // Se retornar exce��o: Sucesso
        if (codigo->getCodigo() == UTCodigo::VALOR_INVALIDO){ // Retornou exce��o e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inv�lido inserido, retornou exce��o e n�o foi armazenado: Sucesso
        }
    }
};

int UTCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};


