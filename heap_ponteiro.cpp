//Biblioteca usada
#include <iostream>
//Biblioteca que chamamos para facilitar o codigo
using namespace std;
//Programa Principal
int main() {
    //Declaração de um ponteiro
    int *ptr = new int;
    //Atribui um valor para o ponteiro
    *ptr = 7;
    
    //Imprime o valor do ponteiro para o usuario
    cout<<*ptr<<endl;
    //Imprime o endereço de memoria do ponteiro para o usuario
    cout<<ptr<<endl;
    
    //Deleta o ponteiro
    delete ptr;
    //Limpa a sujeira de memoria
    ptr = nullptr;
    
    //Imprime o valor do ponteiro
    cout<<*ptr<<endl;
    //Imprime o endereço de memoria do ponteiro
    cout<<ptr<<endl;

}