#include<stdio.h>

int main(void)
{
int Retu,Kaoru,Yujiro;

Retu = 23;
Kaoru = 17;
Yujiro =40;

if(Retu == 23)
printf("列海王は4000年の歴史を背負っています\n");
if(Kaoru != 20)
printf("花山薫は高校生に見えません\n");
if(Kaoru <= 20)
printf("花山薫は高校生ですです\n");
if(Yujiro > 20)
printf("範馬勇次郎は地球上最強です\n");

if(Retu < Yujiro)
printf("勇次郎は列海王よりも強いです\n");
if(Yujiro > Kaoru)
printf("勇次郎は花山薫よりも強いです\n");

return 0;
}