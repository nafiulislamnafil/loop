#include<stdio.h>
int main (){
    int n,s;
    scanf("%d",&n);
    s=0;
    for(int i=1;s<n;i+=2){
            printf("%d ",i);
            s++;
    }
  return 0;
}

/////another way===>
#include <stdio.h>
int main() {
int n,i;
scanf("%d", &n);
i=1;
while(i<=n*2){
        if(i%2==0){
              printf("%d ",i);
        }
      i++;
    }
    return 0;
}
/////////another way 
#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
for(i=2;i<=2*n;i+=2){
    printf("%d ",i);
}
return 0;
}


