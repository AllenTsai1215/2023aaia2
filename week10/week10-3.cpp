#include <stdio.h>
void myprint(int a){
    for(int i=0;i<a;i++) printf("¬P");
    printf("\n");
}
int main()
{
    myprint(5);
    myprint(4);
    myprint(3);
    myprint(2);
    myprint(1);
}
