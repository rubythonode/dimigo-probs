// 코드젠 1102번이랑 높이가 n*2-1이 아니라 n인 것 빼고는 같음
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);int idx=0;int i,j;
    for(i=n;i>0;i-=2){
        for(j=0;j<idx;j++) printf(" ");
        for(j=0;j<i;j++) printf("*");
        printf("\n");
        idx++;
    }
    idx--;
    for(i=1;i<=n;i+=2){
        if(i==1) continue;
        idx--;
        for(j=0;j<idx;j++) printf(" ");
        for(j=0;j<i;j++) printf("*");
        printf("\n");
    }
}
