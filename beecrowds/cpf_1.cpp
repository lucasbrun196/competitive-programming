#include <iostream>

using namespace std;

int main(){

    string cpf;
    int cont_aux, b1, b2, value_aux;
    bool flag;

    while(cin >> cpf){
        b1 = 0; b2 = 0;
        flag = true;
        cont_aux = 1;
        for(int i = 0; i <= 10; i++){
            if(cpf[i] != '.'){
                value_aux = cpf[i] - '0';
                b1 += value_aux * cont_aux++;  
            }   
        }
        cont_aux--;
        for(int i = 0; i <= 10; i++){
            if(cpf[i] != '.'){
                value_aux = cpf[i] - '0';
                b2 += value_aux * cont_aux--;
            }
        }
        b1 %= 11;
        b2 %= 11;
        if(b1 == 10) b1 = 0;
        if(b2 == 10) b2 = 0;
        if(cpf[12]-'0'==b1 && cpf[13]-'0'==b2) cout << "CPF valido\n";
        else cout << "CPF invalido\n";
    }

    return 0;
}