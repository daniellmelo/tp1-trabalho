#pragma once

#include "./Dominio.hpp"
#include <string>

/// @file Codigo.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Codigo.
///

/// @class Codigo
/// @brief Classe que representa um c&oacute;digo.
///
/// Esta classe representa um c&oacute;digo, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece m&eacute;todos para obter e definir o c&oacute;digo, bem como para validar sua formata&ccedil;&atilde;o.
class Codigo : public Dominio{ // 222035625
public:
    /// @brief Construtor da classe C&oacute;digo.
    ///
    /// @param codigo A sequ&ecirc;ncia de caracteres que representa o c&oacute;digo.
    Codigo(std::string codigo);

    /// @brief Obt&eacute;m o c&oacute;digo atual.
    ///
    /// @return Uma string representando o c&oacute;digo atual.
    std::string getCodigo() const;

    /// @brief Define um novo c&oacute;digo.
    ///
    /// @param novoCodigo O novo c&oacute;digo a ser definido.
    void setCodigo(std::string novoCodigo);

private:
    std::string m_codigo;/// @brief Fun&ccedil;&atilde;o privada para validar o c&oacute;digo.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a formata&ccedil;&atilde;o do c&oacute;digo.
    ///
    /// @param codigo A sequ&ecirc;ncia de caracteres a ser validada como c&oacute;digo.
    void validar(std::string codigo); ///< O c&oacute;digo representado como uma sequ&ecirc;ncia de caracteres.


};
