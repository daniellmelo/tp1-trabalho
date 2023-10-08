#ifndef CARTAO_HPP_INCLUDED
#define CARTAO_HPP_INCLUDED

#include <string>

#include "../domains/Texto.hpp"
#include "../domains/Codigo.hpp"
#include "../domains/Coluna.hpp"

/// @file Cartao.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Cart&ntilde;o
/// @class Cartao
/// @brief Classe que representa um cart&ntilde;o.
///
/// Esta classe representa um cart&ntilde;o que cont&eacute;m informa&ccedil;&otilde;es como nome, descri&ccedil;&atilde;o, c&oacute;digo e coluna.

class Cartao {
    public:
        /// @brief Construtor da classe Cart&ntilde;o.
        ///
        /// @param codigo O c&oacute;digo do cart&ntilde;o.
        /// @param nome O nome do cart&ntilde;o.
        /// @param descricao A descri&ccedil;&atilde;o do cart&ntilde;o.
        /// @param coluna A coluna do cart&ntilde;o.
        Cartao(Codigo codigo, Texto nome, Texto descricao, Coluna coluna);
    private:
        Codigo m_codigo;
        Texto m_nome;
        Texto m_descricao;
        Coluna m_coluna;
    public:
        /// @brief Obt&eacute;m o c&oacute;digo do cart&ntilde;o.
        ///
        /// @return Uma string representando o c&oacute;digo do cart&ntilde;o.

        std::string getCodigo() const;
        /// @brief Obt&eacute;m o nome do cart&ntilde;o.
        ///
        /// @return Uma string representando o nome do cart&ntilde;o.
        std::string getNome() const;
        /// @brief Obt&eacute;m a descri&ccedil;&atilde;o do cart&ntilde;o.
        ///
        /// @return Uma string representando a descri&ccedil;&atilde;o do cart&ntilde;o.
        std::string getDescricao() const;
        /// @brief Obt&eacute;m a coluna do cart&ntilde;o.
        ///
        /// @return Uma string representando a coluna cart&ntilde;o.
        std::string getColuna() const;
        /// @brief Define um novo c&oacute;digo para o cart&ntilde;o.
        ///
        /// @param novoCodigo O novo c&oacute;digo a ser definido.
        void setCodigo(std::string novoCodigo);
        /// @brief Define um novo nome para o cart&ntilde;o.
        ///
        /// @param novoCodigo O novo nome a ser definido.
        void setNome(std::string novoNome);
        /// @brief Define uma nova descri&ccedil;&atilde;o para o cart&ntilde;o.
        ///
        /// @param novaDescricao A nova descri&ccedil;&atilde;o a ser definida.
        void setDescricao(std::string novaDescricao);
        /// @brief Define uma nova coluna para o cart&ntilde;o.
        ///
        /// @param novaColuna A nova coluna a ser definida.
        void setColuna(std::string novaColuna);
};


#endif // CARTAO_HPP_INCLUDED
