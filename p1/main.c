#include <stdio.h>

int main(void)
{

    
    int a,b;
    int i = 0;
    
    scanf("%d",&b);
    
    do{
        scanf("%d",&a);
        i++;
        
        if(a>b){
            printf("%d>?\n",a);

        }else if(a<b){
            printf("%d<?\n",a);
        
        }else{
            printf("%d==?",a);
            printf("\n%d",i);
        }
        
    }while(a!=b);
    
    
    return 0;
}
