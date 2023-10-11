#pragma once
#include <string>
#include "../../../entities/Cartao.hpp"

class UTCartao { //190063882
	private:
		const std::string CODIGO_VALIDO = "AA00";
		const std::string NOME_VALIDO = "Meu cartao";
		const std::string DESCRICAO_VALIDA = "Minha descricao";
		const std::string COLUNA_VALIDA = "SOLICITADO";

		Cartao *cartao;

		int estado;

		void setUp();
		void tearDown();
		void testarCenario();

    public:
		static const int SUCESSO = 0;
		static const int FALHA = -1;

		int run();
};
