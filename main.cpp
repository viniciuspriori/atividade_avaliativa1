#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra = "abcdefghijklmnopqrstuvwxyz"; //digite palavra
    int np; //numero a ser pressionado
    int nv; //numero de vezes a ser pressionado
    int c; //coluna da matriz alfa
    int l; //linha da matriz alfa
    char alfa[3][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h', 'k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}};
    //matriz feita de modo a cada sequencia de 3 caracteres fosse uma coluna
 for(int i=0; i<size(palavra); i++)
    {
      //casos especiais: s e z (fora da matriz)
      if(palavra[i]=='s')
        {
        np=7;
        nv=4; 
        cout << "#" << np << "=" << nv << endl;
        }
        if(palavra[i]=='z')
        {
        np=9;
        nv=4; 
        cout << "#" << np << "=" << nv << endl;
        }
        //percorrer a matriz para achar a letra
      for(int c=0; c<=7; c++){
        for(int l=0; l<=3; l++){
          if(palavra[i] == alfa[l][c]){
            //transformar matriz: LETRA A: posição 0,0 = 2,1 
            //ou seja, apertar numero 2 uma vez
            np = c+2; //somar 2 na coluna 
            nv = l+1; // somar 1 na linha
            cout << "#" << np << "=" << nv << endl;
          } 
        }
      }
     }
 return 0;
}