#include <stdio.h>
#include <string.h>
int main()
{
    char line[100];
    printf("請輸入一堆字母,不要有空格,最後跳行結果輸入\n");
    scanf("%s",line);

    int N=strlen(line);
    printf("字串的長度是:%d\n",N);
    ///下面用註解寫
    ///strcpy(a,"Hello");字串拷貝
    ///strcat(a,b);字串結合 把b接到a的後面
    ///strcmp(a,b);字串比較 看誰比較大
}
