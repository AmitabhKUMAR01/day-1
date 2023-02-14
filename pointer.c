#include<stdio.h>

void pointer(int *a,int *b)
{
    int c;
    c = *a;
    *a= *b;
    *b= c;
}
void simple(int a,int b)
{
    int c;
    c = a;
    a= b;
    b= c;
    printf('x =  %d\n',a);
    printf('y =  %d\n',b);

}

int main()
{
    int x=5,y=8;
    simple(x,y);
    printf("x =  %d\n",x);
    printf("y =  %d\n",y);

return 0;
}