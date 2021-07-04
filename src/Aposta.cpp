#include <iostream>
#include "Aposta.hpp"
#include "Validacao.hpp"
using namespace std;

Aposta::Aposta(int argc, char *argv[]){
    validarAposta(argc, argv, &validade);
}