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
///more accurate 
#include <stdio.h>
int main() {
    int n,s,i;
    scanf("%d", &n);
    i=1;
    while (n!=0) {
        s=n%10;
        n=n/10;
        printf("%d,", s);
        i++;
     }
    return 0;
}
