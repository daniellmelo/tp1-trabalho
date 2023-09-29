#include "Cartao.hpp"

#include <string>
using namespace std;

// Geters para a classe cartão
int Cartao::getCodigo(){
    return codigo;
};

string Cartao::getNome(){
    return nome;
};


string Cartao::getDescricao(){
    return texto;
};



string Cartao::getColuna(){
    return coluna;

};

//-------------------------------------------------------

// Seters para a classe cartão
void Cartao::setNome(string novoNome){
    nome = novoNome;

}


void Cartao::setDescricao(string novoDescricao){
    texto = novoDescricao;
}


void Cartao::setColuna(string novaColuna){
    coluna = novaColuna;

}
