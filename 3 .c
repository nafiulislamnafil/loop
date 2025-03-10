#include<stdio.h>
int main(){
int i,m,n;
scanf ("%d%d",&m,&n);
if(m<n){
        i=m;
while(i<=n){
        printf("%d ",i);
    i++;
}
}
else if(n<m){
        i=m;
while(i>=n){
        printf("%d ",i);
    i--;
}
}
return 0;
}
