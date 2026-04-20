#include <stdio.h>

int main(void) {
    int N;
    char ch;
    
    scanf("%d", &N); 
    getchar();
    
    int small = 0, max_small = 0;
    int num = 0, max_num = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%c", &ch);
        
        if (ch >= 'a' && ch <= 'z') {
            small++;
            num = 0;
            if (small > max_small)
                max_small = small;
        }

        else if (ch >= '0' && ch <= '9') {
            num++;
            small = 0;
            if (num > max_num)
                max_num = num;
        }
    }
    
    printf("%d\n", max_small);
    printf("%d\n", max_num);
    
    return 0;
}
