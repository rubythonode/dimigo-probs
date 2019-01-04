/**************************************************************
    Problem: 1030
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
/* 
// 풀이 물어본 친구한테 설명
int main(){
    // int a,b;scanf("%d %d",&a,&b);
    int a = 10; int b = 10;
    printf("*** 올바른 경우 ***\n"); // 아까 내가 말해준 풀이야!
    printf("%d %d\n",a,b);

    // int c=(a++)*(--b); 
    // 이거는 "먼저 b를 1 감소시킨 값에 a를 곱하고, 그 결과를 c에 저장한 뒤 a에 1 더하기"라는 뜻이였어!
    
    // 즉 이걸 풀어서 구현하면
    b -= 1; // b를 1 감소시키고
    int c; // 새로운 정수형 변수 c를 선언하고
    c = a*b; // c에 a와 (1 감소시킨) b를 곱한 값을 넣은 다음
    // 이때 b만 1 줄었으니까 a = 10, b = 9, c = a*b = 90이야!
    
    a += 1; // a에 1 더하기
    // 왜 a를 곱셈 연산이 끝나고야 증가시키냐면, a는 후위 연산자라서 해당 연산을 하고 나서 더해지는 거니까 그런가 봐

    // 그럼 a = 11, b = 9, c = 90 이렇게 될 거야 :)

    printf("%d %d %d\n", a, b, c); // 그 다음 변수들의 상태를 출력하면
    // 결과: 11 9 90

    a = 10; b = 10;
    c = (a++)*(--b);
    printf("%d %d %d\n", a, b, c); // 내가 말해준 풀이와 결과가 같아(즉 풀어 쓴 코드가 이 뜻이라는 거)
    // 결과: 11 9 90
}
*/

int main(){int a,b;scanf("%d %d",&a,&b);int r=(a++)*(--b);printf("%d %d %d",a,b,r);}
