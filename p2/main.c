#include <stdio.h>

int main(void)
{
    int a;
    
    scanf("%d",&a);
    
    int eng_cur = 0, eng_max = 0;
    int num_cur = 0, num_max = 0;
    
    
    for(int i = 0; i < a; i++){
        getchar();
        char c;
        scanf("%c",&c);
    
        
        if(c>='a' && c<='z'){
            eng_cur++;
            num_cur = 0;
            if(eng_cur > eng_max){
                eng_max = eng_cur;
            }
        }else{
            eng_cur = 0;
        }
        
        
        if(c>='0' && c<='9'){
            num_cur++;
            eng_cur = 0;
            if(num_cur > num_max){
                num_max = num_cur;
            }
            
        }
        
    }
    
    printf("%d\n",eng_cur);
    printf("%d\n",num_cur);
    
    

    return 0;
}
