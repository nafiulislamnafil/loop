#include <stdio.h>
int main ()
{
double x,x100,x50,x20,x10,x5,x2,c1,c50,c25,c10,c05,c01;
scanf("%lf",&x);
printf("NOTAS:\n");
x100=x/100;
x=fmod(x,100);
x50=x/50;
x=fmod(x,50);
x20=x/20;
x=fmod(x,20);
x10=x/10;
x=fmod(x,10);
x5=x/5;
x=fmod(x,5);
x2=x/2;
x=fmod(x,2);
printf("%lf nota(s) de R$ 100.00\n",x100);
printf("%lf nota(s) de R$ 50.00\n",x50);
printf("%lf nota(s) de R$ 20.00\n",x20);
printf("%lf nota(s) de R$ 10.00\n",x10);
printf("%lf nota(s) de R$ 5.00\n",x5);
printf("%lf nota(s) de R$ 2.00\n",x2);
printf("MOEDAS:\n");
c1=x/1;
x=fmod(x,1);
c50=x/.50;
x=fmod(x,.50);
c25=x/.25;
x=fmod(x,.25);
c10=x/.10;
x=fmod(x,.10);
c05=x/.05;
x=fmod(x,.05);
c01=x/.01;
printf("%lf moeda(s) de R$ 1.00\n",c1);
printf("%lf moeda(s) de R$ 0.50\n",c50);
printf("%lf moeda(s) de R$ 0.25\n",c25);
printf("%lf moeda(s) de R$ 0.10\n",c10);
printf("%lf moeda(s) de R$ 0.05\n",c05);
printf("%lf moeda(s) de R$ 0.01\n",c01);
return 0;
}
