#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
      //deklarasi string x
      
      char x[]="SELAMAT DATANG...!!!";
      
      //deklarasi variabel bertipe integer
      
      int a,b,i,n;
      
      //menghitung panjang string x
      
      n=strlen(x);
     
      //perulangan sebanyak panjang string
      
      for(i=0; i<n; i++){
                  
                  /*perulangan untuk menimbulkan jeda waktu
                  antar penampilan karakter*/
                  
                  for(a=0; a<99999;a++){
                        
                        for(b=0; b<500; b++){
                        }
                  }
                  
                  //mencetak string x per karakter
                  
                  printf("%c",x[i]);
      }
}
 
