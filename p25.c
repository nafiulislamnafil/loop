#include<stdio.h>
int main(){
    int i,x,n,s,multi;
    scanf("%d",&n);
    i=1;
    s=0;
    multi=1;
while(n!=0){//n=         4              ,2,                 1       0
    x=n%2;//x=              0,             0,                   1
    s=s+x*multi;//s=       0,           0,                 100 
    multi=multi*10;//multi=10,     100
     n=n/2;//n=                2,            1,                  0
    i++;
}
printf("%d",s);
return 0;
}

