#pragma once

#include "Validador.hpp"
#include <string>

/// @file Codigo.hpp
/// @brief Este arquivo &eacute a declaração da classe Codigo.
///

/// @class Codigo
/// @brief Classe que representa um c&oacute;digo.
///
/// Esta classe representa um c&oacute;digo, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece m&eacute;todos para obter e definir o c&oacute;digo, bem como para valid&aacute;-lo.
class Codigo { // 222035625
public:
    /// @brief Construtor da classe Codigo.
    ///
    /// @param codigo A sequ&ecirc;ncia de caracteres que representa o c&oacute;digo.
    Codigo(std::string codigo);

    /// @brief Obt&eacute;m o c&oacute;digo.
    ///
    /// @return Uma string representando o c&oacute;digo.
    std::string getCodigo() const;

    /// @brief Define um novo c&oacute;digo.
    ///
    /// @param novoCodigo O novo c&oacute;digo a ser definido.
    void setCodigo(std::string novoCodigo);

private:
    /// @brief Fun&ccedil;&atilde;o privada para validar o c&oacute;digo.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar o c&oacute;digo.
    ///
    /// @param codigo A sequ&ecirc;ncia de caracteres a ser validada.
    void validar(std::string codigo);
};
