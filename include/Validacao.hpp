#ifndef Validar_cpp
#define Validar_cpp
#include <string>

void validarAposta(int argc, char *argv[], bool *validade);
bool numFilesParameters(int argc);
bool fileLinesValidation(char *argv[]);
bool contentValidation(char *argv[]);
bool isInt(std::string texto_);
bool isFloat(std::string texto_);

#endif