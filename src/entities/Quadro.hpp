#pragma once

#include <string>
#include "../domains/Texto.hpp"
#include "../domains/Codigo.hpp"
#include "../domains/Limite.hpp"

/// @file Quadro.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Quadro.

/// @class Quadro
/// @brief Classe que representa um quadro.
///
/// Esta classe representa um quadro que cont&eacute;m informa&ccedil;&otilde;es como nome, descri&ccedil;&atilde;o, c&oacute;digo e limite.
class Quadro { // 222035625
private:
    Texto  m_nome; ///< O nome do quadro.
    Texto  m_descricao; ///< A descri&ccedil;&atilde;o do quadro.
    Codigo m_codigo; ///< O c&oacute;digo do quadro.
    Limite m_limite; ///< O limite do quadro.

public:
    /// @brief Construtor da classe Quadro.
    ///
    /// @param codigo O c&oacute;digo do quadro.
    /// @param nome O nome do quadro.
    /// @param descricao A descri&ccedil;&atilde;o do quadro.
    /// @param limite O limite do quadro.
    Quadro(Codigo codigo, Texto nome, Texto descricao, Limite limite);

    /// @brief Obt&eacute;m o nome do quadro.
    ///
    /// @return Uma string representando o nome do quadro.
    std::string getNome() const;

    /// @brief Obt&eacute;m a descri&ccedil;&atilde;o do quadro.
    ///
    /// @return Uma string representando a descri&ccedil;&atilde;o do quadro.
    std::string getDescricao() const;

    /// @brief Obt&eacute;m o c&oacute;digo do quadro.
    ///
    /// @return Uma string representando o c&oacute;digo do quadro.
    std::string getCodigo() const;

    /// @brief Obt&eacute;m o limite do quadro.
    ///
    /// @return Uma string representando o limite do quadro.
    std::string getLimite() const;

    /// @brief Define um novo c&oacute;digo para o quadro.
    ///
    /// @param novoCodigo O novo c&oacute;digo a ser definido.
    void setCodigo(std::string novoCodigo);

    /// @brief Define um novo nome para o quadro.
    ///
    /// @param novoNome O novo nome a ser definido.
    void setNome(std::string novoNome);

    /// @brief Define uma nova descri&ccedil;&atilde;o para o quadro.
    ///
    /// @param novoDescricao A nova descri&ccedil;&atilde;o a ser definida.
    void setDescricao(std::string novoDescricao);

    /// @brief Define um novo limite para o quadro.
    ///
    /// @param novoLimite O novo limite a ser definido.
    void setLimite(std::string novoLimite);
};
