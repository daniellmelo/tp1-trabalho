#include "UTQuadro.hpp"
#include "../../../entities/Quadro.hpp"
#include "../../../domains/Codigo.hpp"
#include "../../../domains/Texto.hpp"
#include "../../../domains/Limite.hpp"

void UTQuadro::setUp(){
    Codigo codigo(CODIGO_VALIDO);
    Texto nome(NOME_VALIDO);
    Texto descricao(DESCRICAO_VALIDA);
    Limite limite(LIMITE_VALIDO);

    quadro = new Quadro(codigo, nome, descricao, limite);
	estado = SUCESSO;
}

void UTQuadro::tearDown(){
    delete quadro;
}

void UTQuadro::testarCenario(){
	if(
        quadro->getCodigo() !=  CODIGO_VALIDO ||
        quadro->getNome() != NOME_VALIDO ||
        quadro->getDescricao() != DESCRICAO_VALIDA ||
        quadro->getLimite() != LIMITE_VALIDO
    )
        estado = FALHA;
}

int UTQuadro::run(){
	setUp();
	testarCenario();
	tearDown();

	return estado;
};
