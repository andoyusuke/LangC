#include<stdio.h>
int main(void){
    int count;
    count=1;
    while(count<=10.0){
        if(count%2==0){
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}