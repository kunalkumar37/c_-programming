 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a,b;
     printf("enter the number from keyboard:\n");
     scanf("%d",&a);
     a<<=3;
     b=a;
     printf("the left shifted digit:%d\n",b);
     return 0;

 }