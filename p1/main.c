#include <stdio.h>

int main()
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
            printf("%d==?\n",a);
            printf("%d\n",i);
        }
        
    }while(a!=b);
    
    
    return 0;
}
