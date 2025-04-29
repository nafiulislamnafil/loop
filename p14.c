#include<stdio.h>
int main(){
int i,n,m;
scanf ("%d%d",&n,&m);
i=1;
int a= 0;
while(i<=m&&i<=n){
        if(n%i==0&&m%i==0){
          a=i;
       }
    i++;
  }
   printf("%d\n",a);
return 0;
}

