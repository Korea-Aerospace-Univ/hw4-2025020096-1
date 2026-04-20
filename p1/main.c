#include <stdio.h>

int main(void)
{
    int n,a,i=0;
    scanf("%d",&n);
    do{
       scanf("%d",&a);
       if(n!=a)
           if(n>a)
               printf("%d>?\n",n);
           else
               printf("%d<?\n",n);
       else
           printf("%d==?\n",n);
       
      i++;
    }while(i<5);
    if(i==5)
        printf("%d\n",a);
    
    
    return 0;
}
