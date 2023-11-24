#include<stdio.h>
int main(void){
    int count;
    count=1;
    for(int count=1;count<=25;count++){
        if(count%3==0){
        printf("%d\n",count);
        }
    }

    int i=26;
    while(i<=50){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}