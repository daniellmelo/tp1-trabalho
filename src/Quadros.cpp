#include "../Quadro.hpp"

Quadro::Quadro(Codigo codigo, Texto nome, Texto descricao, Limite limite):
    m_codigo(codigo), m_nome(nome), m_descricao(descricao), m_limite(limite){
};

// getters
std::string Quadro::getCodigo() const{
    return m_codigo.getCodigo();
};
std::string Quadro::getDescricao() const{
    return m_descricao.getTexto();
};
std::string Quadro::getLimite() const{
    return m_limite.getLimite();
};
std::string Quadro::getNome() const{
    return m_nome.getTexto();
}


//setters
void Quadro::setCodigo(std::string novoCodigo){
    m_codigo.setCodigo(novoCodigo);

}
void Quadro::setNome(std::string novoNome){
    m_nome.setTexto(novoNome);
}
void Quadro::setDescricao(std::string novoDescricao){
    m_descricao.setTexto(novoDescricao);
}
void Quadro::setLimite(std::string novoLimite){
    m_limite.setLimite(novoLimite);
}
