#include "../Quadro.hpp"

Quadro::Quadro(Codigo codigo, Texto nome, Texto descricao, Limite limite):
    m_codigo(codigo), m_nome(nome), m_descricao(descricao), m_limite(limite){
};

// getters
std::string Quadro::getCodigo() const{
    return codigo.getCodigo();
};
std::string Quadro::getDescricao() const{
    return descricao.getTexto();
};
std::string Quadro::getLimite() const{
    return limite.getLimite();
};
std::string Quadro::getNome() const{
    return nome.getTexto();
}


//setters
void Quadro::setCodigo(std::string novoCodigo){
    codigo.setCodigo(novoCodigo);

}
void Quadro::setNome(std::string novoNome){
    nome.setTexto(novoNome);
}
void Quadro::setDescricao(std::string novoDescricao){
    descricao.setTexto(novoDescricao);
}
void Quadro::setLimite(std::string novoLimite){
    limite.setLimite(novoLimite);
}
