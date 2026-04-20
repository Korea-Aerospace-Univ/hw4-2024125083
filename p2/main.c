int main()
{
    int a;
    char str[100];
    
    scanf("%d",&a);
    scanf("%s",&str);
    
    int eng_cur = 0, eng_max = 0;
    int num_cur = 0, num_max = 0;
    
    
    for(int i = 0; i < a; i++){
        char c = str[i];
        
        if(c>='a' && c<='z'){
            eng_cur++;
            if(eng_cur > eng_max){
                eng_max = eng_cur;
            }
        }else{
            eng_cur = 0;
        }
        
        
        if(c>='0' && c<='9'){
            num_cur++
            if(num_cur > num_max){
                num_max = num_cur;
            }
            
        }else{
            num_cur = 0;
        }
        
    }
    
    printf("%d\n",eng_cur);
    printf("%d\n",num_cur);
    
    

    return 0;
}
