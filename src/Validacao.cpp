#include "Validacao.hpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void validarAposta(int argc, char *argv[], bool *validade) {
    *validade = numFilesParameters(argc);
    if(*validade == true){
        *validade = fileLinesValidation(argv);
        if(*validade == true){
            *validade = contentValidation(argv);
        }
    }
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

bool fileLinesValidation(char *argv[]) {
    ifstream file;
    string texto;
    int linesCount = 0;
    
    
    // adiciona ao vector das linhas todas elas, para contagem posterior
    file.open(argv[1]);
    while(getline(file, texto)){
        linesCount++;
    }
    file.close();
    

    // verifica se está condizente com a quantidade certa de linhas, se sim prosegue, senão encerra com false
    if(linesCount != 3){
        cout<<"Arquivo com parametros incorretos, por favor coloque as 3 linhas pedidas nele.";
        return false;
    }

    return true;
}

bool contentValidation(char *argv[]){
    ifstream file;
    string texto;
    vector<int> apostas;
    float cash;
    int rounds;

    file.open(argv[1]);

    // pegamos a primeira linha
    getline(file, texto, '\n');
    if(!isFloat(texto))
        return false;
    cash = stof("0"+texto);

    


    // agora a segunda
    getline(file, texto, '\n');
    if(!isInt(texto))
        return false;
    rounds = stoi("0"+texto);




    // se está tudo ok com as linhas podemos pegar 1 a 1 possível inteiro da 3ª linha
    while(file>>texto){
        if(!isInt(texto))
            return false;
        int x = stoi(texto);
        //cout<<x<<endl;
        apostas.push_back(x);
    }

    file.close();
    

    if(apostas.size() > 15){
        cout<<"Insira apenas 15 números na linha de aposta por favor."<<endl;
        return false;
    }
    
    return true;
}

bool isInt(string texto){
    // checar cada char da string, caso nao seja numero ele retorna false
    for(int i=0; i<texto.size(); i++){
        //cout<<texto[i]<<endl;
        if(texto[i]<'0' || texto[i]>'9'){
            cout<<"O arquivo possui um valor incorreto para nosso formato, por favor conserte para prosseguir a aposta."<<endl;
            return false;
        }
    }
    return true;
}

bool isFloat(string texto){
    // checar cada char da string, caso nao seja numero ele retorna false
    int pointCount = 0;
    for(int i=0; i<texto.size(); i++){
        //cout<<texto[i]<<endl;
        if(texto[i]<'0' || texto[i]>'9'){
            if(texto[i] == '.'){
                pointCount++;
                if(pointCount > 1){
                    cout<<"O arquivo possui um valor incorreto para nosso formato, por favor conserte para prosseguir a aposta."<<endl;
                    return false;
                }
            }
            else{
                cout<<"O arquivo possui um valor incorreto para nosso formato, por favor conserte para prosseguir a aposta."<<endl;
                return false;
            }
        }
    }
    return true;
}