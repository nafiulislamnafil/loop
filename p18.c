///this is right one
#include <stdio.h>
int main() {
    int n,i,ld;
scanf("%d",&n);
i=1;
while(n!=0){     /////n=123
ld=n%10;          //     3  2 1
      if(n<10){
      printf("%d",ld);
      break;
    }
     else if(n>=10){
     n=n/10;          ///      12  1
     printf("%d, ",ld);   // 3, 2, 1
   }
  i++;
}
return 0;
}

//another way
#include <stdio.h>
int main() {
    long long int i, N;
    scanf("%lld", &N);
i = 1;
while (N > 0) {
        i = N % 10;
        printf("%lld", i);
        N = N / 10;
        if (N > 0) {
            printf(",");
        }
    }
    return 0;
}







