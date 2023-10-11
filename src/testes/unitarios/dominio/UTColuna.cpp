#include "UTColuna.hpp"
#include <iostream>
#include <string>

const std::string UTColuna::VALOR_VALIDO   = "CONCLUIDO";   // Defini??????o de constante para evitar n???mero m???gico.
const std::string UTColuna::VALOR_INVALIDO = "INCONCLUIDO";   // Defini??????o de constante para evitar n???mero m???gico.

void UTColuna::setUp(){
    coluna = new Coluna(std::string("SOLICITADO"));
    estado = SUCESSO;
};

void UTColuna::tearDown(){
    delete coluna;
};

void UTColuna::testarCenarioSucesso(){
    try{
        coluna->setColuna(UTColuna::VALOR_VALIDO);
        if (coluna->getColuna() != UTColuna::VALOR_VALIDO){ // Valor valido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO;// Valor válido inserido, sem exceções e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){              // Valor váldio inserido retornou uma excecao: Falha
        estado = FALHA;
    }
};

void UTColuna::testarCenarioFalha(){
    try{
        coluna->setColuna(UTColuna::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (coluna->getColuna() == UTColuna::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
        }
    }
};

int UTColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};
