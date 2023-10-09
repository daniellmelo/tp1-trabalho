#pragma once

#include <regex>
#include <string>

/// @file Dominio.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Dominio.
///

/// @class Dominio
/// @brief Classe abstrata que representa um dom&iacute;nio.
///
/// Esta classe abstrata define uma interface para classes de dom&iacute;nio.
/// As classes derivadas devem implementar a fun&ccedil;&atilde;o virtual "validar" para validar dados do dom&iacute;nio.
class Dominio { // 222035625
protected:
    /// @brief Fun&ccedil;&atilde;o virtual pura para validar dados do dom&iacute;nio.
    ///
    /// Esta fun&ccedil;&atilde;o deve ser implementada nas classes derivadas para validar dados do dom&iacute;nio.
    ///
    /// @param dados Uma string representando os dados a serem validados.
    virtual void validar(std::string dados) = 0;
};
