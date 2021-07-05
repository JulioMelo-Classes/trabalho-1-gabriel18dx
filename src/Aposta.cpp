#include <iostream>
#include <fstream>
#include "Aposta.hpp"
#include "Validacao.hpp"
using namespace std;

Aposta::Aposta(int argc, char *argv[]){
    string texto;
    fstream file;
    cout<<"Lendo arquivo de apostas ["<<argv[1]<<"]"<<" por favor aguarde..."<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    validarAposta(argc, argv, &validade);
    if(validade == true){
        cout<<"Aposta lida com sucesso!"<<endl;
    }
    file.open(argv[1]);

    getline(file, texto, '\n');
    credits = stof(texto);

    getline(file, texto, '\n');
    rounds = stoi(texto);

    while(file>>texto){
        int x = stoi(texto);
        nums.push_back(x);
    }
}

void Aposta::play(){
    if(validade == false){
        cout<<"Aposta inválida."<<endl;
        return;
    }
}