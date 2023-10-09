#include "CodigoTeste.hpp"
#include <string>

void CodigoTeste::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void CodigoTeste::tearDown(){
    delete codigo;
}

void CodigoTeste::testarCenarioSucesso(){
    try{
        codigo->setCodigo(std::string(CODIGO_VALIDO));
        if (codigo->getCodigo() != std::string(CODIGO_INVALIDO)){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
};

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
};

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
