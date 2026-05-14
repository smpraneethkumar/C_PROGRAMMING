#include <stdio.h> 


int main(){
    
    
    int t;
     int a;
     int b ;
     int c;
     
    scanf("%d", &t);
    
    for(int i =0;i< t;i++){
        
       = scanf("%d %d %d", &a,&b,&c);
       
       if(a+b == c){
           printf("+\n");
       }else{
           printf("-\n");
       }
    }
}