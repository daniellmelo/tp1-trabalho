#include "UTCarta.hpp"
#include "../../../entities/Cartao.hpp"
#include "../../../domains/Codigo.hpp"
#include "../../../domains/Texto.hpp"
#include "../../../domains/Coluna.hpp"

void UTCartao::setUp(){
    Codigo codigo(CODIGO_VALIDO);
    Texto nome(NOME_VALIDO);
    Texto descricao(DESCRICAO_VALIDA);
    Coluna coluna(COLUNA_VALIDA);

    cartao = new Cartao(codigo, nome, descricao, coluna);
	estado = SUCESSO;
}

void UTCartao::tearDown(){
    delete cartao;
}

void UTCartao::testarCenario(){
	if(
        cartao->getCodigo() !=  CODIGO_VALIDO ||
        cartao->getNome() != NOME_VALIDO ||
        cartao->getDescricao() != DESCRICAO_VALIDA ||
        cartao->getColuna() != COLUNA_VALIDA
    )
        estado = FALHA;
}

int UTCartao::run(){
	setUp();
	testarCenario();
	tearDown();

	return estado;
};
