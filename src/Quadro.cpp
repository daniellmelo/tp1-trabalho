#include "../dominios.hpp"
#include <iostream>
#pragma once

Quadro::Quadro(int codigo, string nome, string descricao, int limite): codigo(codigo), nome(nome), descricao(descricao), limite(limite) // todo set init with right members
{
   std::cout << "Quadro criado" << std::endl; //.
};

/*Quadro::~Quadro()
{
    //.
};*/

// getters
int Quadro::getCodigo() const{
    return codigo;
};
std::string Quadro::getDescricao() const{
    return descricao;
};
int Quadro::getLimite() const{
    return limite;
};
std::string Quadro::getNome() const{
    return nome;
}


//setters
void Quadro::setCodigo(int novoCodigo){
    codigo = novoCodigo;

}
void Quadro::setNome(string novoNome){
    nome = novoNome;
}
void Quadro::setDescricao(string novoDescricao){
    descricao = novoDescricao;
}
void Quadro::setLimite(int novoLimite){
    limite = novoLimite;
}

