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
        if (codigo->getCodigo() != UTCodigo::VALOR_VALIDO){ // Valor valido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO;// Valor válido inserido, sem exceções e armazenado: Sucesso

    }
    catch(std::invalid_argument &excecao){              // Valor váldio inserido retornou uma excecao: Falha

        estado = FALHA;
    }
};

void UTCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(UTCodigo::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }

    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (codigo->getCodigo() == UTCodigo::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
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


