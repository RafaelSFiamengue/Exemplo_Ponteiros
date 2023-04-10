//Biblioteca usada
#include <iostream>
//Biblioteca que chamamos para usar
using namespace std;

//Programa Principal
int main () 
{
    //Declaração da variavel var com o vaalor 3 atribuido
    int Var = 3;
    //Ponteiro pvar
    int* pVar;
    //Atribui o valor já estabelecido pela variavel para o ponteiro 
    pVar = &Var;
    //Imprime o valor da variavel Var para o usuario
    cout<<Var<<endl;
    //Imprime o valor do ponteiro para o usuario
    cout<<*pVar<<endl;
    //Imprime o endereço de memoria do ponteiro para o usuario
    cout<<pVar<<endl;
    
}