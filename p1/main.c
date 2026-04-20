#include <stdio.h>

int main(void)
{
    int n,a,c=0;
    scanf("%d",&n);
    do{
       scanf("%d",&a);
       c++;
       if (n>a){
           printf("%d>?\n",n);
       }
       else if (n<a){
           printf("%d<?\n",n);
       }
       else{
           printf("%d==?\n",n);
       }
           
    }while(n!=a);
    
    printf("%d\n",c);
    
    
    return 0;
}
