# include <stdio.h>

union value
{
  float length,weight,temp;
};
void printvalue(union value v,int ch);
void main()
{
 int ch;
 union value v;
 printf("1 for value of length\n2 for value of weight\n3 for value of temp\n ");
 printf("enter your choice ");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 printf("enter the length in meters");
 scanf("%f",&v.length);
 break;

 case 2:
 printf("enter the weight in kg");
 scanf("%f",&v.weight);
 break;

 case 3:
  printf("enter the temp in celcuis");
 scanf("%f",&v.temp);
 break;

  
  default:
  printf("invalid choice");
  break;
}
 

 void printvalue(union value v,int ch)
 {

   switch (ch)
   {
   case 1:
   printf("value of length in meters is %f",v.length);
   break;

   case2:
   printf("value of weight in kg is %f",v.weight);
   break;

   case3:
   printf("value of temp in celsius is %f",v.temp);
   break;

   default:
   printf("invalid choice");
   break;

   }

}
}







