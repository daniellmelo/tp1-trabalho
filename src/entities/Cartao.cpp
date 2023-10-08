#include "Cartao.hpp"

#include <string>

Cartao::Cartao(Codigo codigo, Texto nome, Texto descricao, Coluna coluna):
    m_codigo(codigo), m_nome(nome), m_descricao(descricao), m_coluna(coluna){
};

// Getters para a classe cartão
std::string Cartao::getCodigo() const{
    return m_codigo.getCodigo();
};

std::string Cartao::getNome() const{
    return m_nome.getTexto();
};


std::string Cartao::getDescricao() const{
    return m_descricao.getTexto();
};



std::string Cartao::getColuna() const{
    return m_coluna.getColuna();

};

//-------------------------------------------------------

// Setters para a classe cartão
void Cartao::setCodigo(std::string novoCodigo){
    m_codigo.setCodigo(novoCodigo);

}

void Cartao::setNome(std::string novoNome){
    m_nome.setTexto(novoNome);

}


void Cartao::setDescricao(std::string novaDescricao){
    m_descricao.setTexto(novaDescricao);
}


void Cartao::setColuna(std::string novaColuna){
    m_coluna.setColuna(novaColuna);

}
