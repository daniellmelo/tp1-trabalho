#include "Cartao.hpp"

include <string>
using namespace std;

// Geters para a classe cartão
int Cartao::getCodigo(){
    return codigo;
}

string Cartao::getNome(){
    return nome;
}


string Cartao::getDescrição(){
    return texto;
}



string Cartao::getColuina(){
    return coluna;

}

//-------------------------------------------------------

// Seters para a classe cartão
void Cartao::setNome(string novoNome){
    nome = novoNome;

}


void Cartao::setDescricao(string novoDescriao){
    texto = novoDescricao;
}


void Cartao::setColuna(string novaColuna){
    coluna = novaColuna

}
