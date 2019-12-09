#include<stdio.h>
main()
{
int i,j,k,m,n,p;
int sum=0;
printf("size of first array\n");
scanf("%d %d %d",&m,&n,&p);
int a[m][n],b[n][p],mul[m][p];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}}
for(i=0;i<n;i++)
{
for(j=0;j<p;j++)
{
scanf("%d",&b[i][j]);
}
}for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
for(k=0;k<n;k++)
{
sum=sum+a[i][k]*b[k][j];}
mul[i][j]=sum;
sum=0;
}
}

for(i=0;i<m;i++)
 {for(j=0;j<p;j++)
   {printf("%d\t",mul[i][j]);}
   printf("\n");
 }
 return 0;
}
