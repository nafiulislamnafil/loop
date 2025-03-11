#include <stdio.h>
int main() {
int n,ld,s;
scanf("%d", &n);
s=0;
    while(n!=0){                     //12345  ,1234  ,123   ,12   ,1 , 0 X
        ld=n%10;                   //5        ,4      ,3    ,2    ,1
        n=n/10;                 //1234        ,123    ,12   ,1    ,0
s=s*0+ld;//s=ld;              //5             ,4      ,3    ,2    ,1
        printf("%d,",s);
    }
return 0;
}
