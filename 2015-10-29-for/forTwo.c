#include <stdio.h>
int num, hd, td, sd;
int main()
{
for(num = 100;num<1000;num++)

 {

  sd = num%100%10;//可简化为sd=num%10，获取三位数字num个位上的数字

  td = (num%100-sd)/10;  //获取三位数字num十位上的数字

  hd = (num-num%100)/100;//获取三位数字num百位上的数字

  if(num == hd*hd*hd + td*td*td + sd*sd*sd) 

  {

    printf("水仙花数字：%d\n", num);    

  }

   }

    return 0;    

}
