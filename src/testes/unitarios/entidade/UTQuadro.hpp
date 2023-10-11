#pragma once
#include <string>
#include "../../../entities/Quadro.hpp"

class UTQuadro {
	private:
		const std::string CODIGO_VALIDO = "AA00";
		const std::string NOME_VALIDO = "Meu quadro";
		const std::string DESCRICAO_VALIDA = "Minha descricao";
		const std::string LIMITE_VALIDO = "5";

		Quadro *quadro;

		int estado;

		void setUp();
		void tearDown();
		void testarCenario();

    public:
		static const int SUCESSO = 0;
		static const int FALHA = -1;

		int run();
};
