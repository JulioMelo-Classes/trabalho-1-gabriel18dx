#include "Validacao.hpp"
#include <iostream>
using namespace std;

void validarAposta(int argc, char *argv[], bool *validade) {
    *validade = numFilesParameters(argc);
}

bool numFilesParameters(int argc) {
    if(argc != 2){
        cout<<"Não foi possível realizar a aposta."<<endl;
        if (argc < 2){
            cout<<"Insira o arquivo de apostas por favor."<<endl;
        }
        else if(argc > 2){
            cout<<"Insira apenas o arquivo de apostas por favor."<<endl;
        }
        return false;
    }
    return true;
}