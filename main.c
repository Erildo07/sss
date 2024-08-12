#include <stdio.h>
int main(){
     int opcco;
    printf("1- camiseta basicas\n2-blusa de frio\n3-calças jeans\n4-shorts");
    scanf("%d", &opcco);
    
    switch(opcco){
         case 1:
         printf("Você ecolheu a opção de camiseta basicas:\n");
         break;
        
         case 2:
         printf("Você ecolheu a opção de blusa de frio:\n");
         break;
        
         case 3:
         printf("Você ecolheu a opção de calça jeans:\n");
         break;
        
         case 4:
         printf("Você ecolheu a opção de shorts:\n");
         break;
         default:
         printf("opcão inavalido\n");
     }   
return 0;

}