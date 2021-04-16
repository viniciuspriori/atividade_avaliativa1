#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra = "abcdefghijklmnopqrstuvwxyszszsz";
    int np;
    int nv;
    int c;
    int l;
    char alfa[3][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h', 'k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}};
    
 for(int i=0; i<size(palavra); i++)
    {
        if(palavra[i]=='s'){
          np=7;
          nv=4; 
          cout << "#" << np << "=" << nv << endl;
          }
          if(palavra[i]=='z'){
          np=9;
          nv=4; 
          cout << "#" << np << "=" << nv << endl;
          }
      for(int c=0; c<=7; c++){
        for(int l=0; l<=3; l++){
          if(palavra[i] == alfa[l][c]){
            np = c+2;
            nv = l+1;
            cout << "#" << np << "=" << nv << endl;
          } 
        }
      }
     }
 return 0;
}