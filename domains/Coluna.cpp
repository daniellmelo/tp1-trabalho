#include "Coluna.hpp"


bool Coluna::validar(std::string coluna){
    if(coluna != "SOLICITADO" || coluna != "EM EXECUCAO" || coluna != "CONCLUIDO"){
        throw std::invalid_argument("Insira uma coluna válida");
    }
}
