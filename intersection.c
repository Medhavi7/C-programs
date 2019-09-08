#include<stdio.h>
#include<conio.h>
int main()
{
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,4,5};
int x=0,i,j,s1,s2;
printf(“Enter size1 : ”);
scanf(“\n %d”,&s1);
printf(“Enter size2 : ”);
scanf(“\n %d”,&s2);
printf(“Enter array1 : ”);
for(i=0;i<s1;i++)
scanf(“\n %d”,&a[i]);
printf(“Enter array2 : ”);
for(j=0;j<s2;j++)
scanf(“\n %d”,&b[j]);
printf(“Intersection is :”)
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==b[j])
{
x=1;
}
}
if(x==1)
{
printf(“\n %d”,a[i]);
}
x=0;
}
getch();
return 0;
}