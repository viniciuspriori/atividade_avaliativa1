#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra; 
    int np; //numero a ser pressionado
    int nv; //numero de vezes a ser pressionado
    int c; //coluna da matriz alfa
    int l; //linha da matriz alfa
    char alfa[3][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h', 'k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}};

    //matriz feita de modo a cada sequencia de 3 caracteres ser uma coluna
    cout << "MATRIZ DO ALFABETO (exceto S e Z)" << endl;
    
      for(int l=0; l<=2; l++){
        for(int c=0; c<=7; c++){
          if(c==7)
          {
          cout << alfa[l][c] << endl;
          }
          else
          {
            cout << alfa[l][c] << "  ";
          }
         }
       }
    
  cout << endl;
  cout << "digite uma palavra" << endl; //entrada 
  cin >> palavra;
  
   do{
      for(int i=0; i<size(palavra); i++)
        {
          if(size(palavra)>50)
          {
            i--;
            cout << "palavra muito longa!" << endl;
            cout << "digite uma palavra" << endl; //entrada 
            cin >> palavra;

          } else{
      
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
              for(int l=0; l<=2; l++){

                if(palavra[i] == alfa[l][c])
                  {
                  //transformar matriz - ex. LETRA A: posição 0,0 = 2,1 (apertar nº2 1x)
                  np = c+2; //somar 2 na coluna 
                  nv = l+1; // somar 1 na linha
                  cout << "#" << np << "=" << nv << endl;
                  } 
                }
              }
         }
      }
    } while(size(palavra)>50);
  return 0;
}