#include<stdio.h>
#include<string.h>
int main()
{
int i,j,max,a,arr[132],pe=1;
char str[1010];
while(gets(str))
{
    i=0;
    j=0;
    j=strlen(str);

   for(i=32;i<127;i++)
   {
       arr[i]=0;
   }
   for(i=0;i<j;i++)
   {

       arr[str[i]]++;
   }
   max=0;
   for(i=32;i<127;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
       }
   }


   if(pe!=1)
   printf("\n");
   for(a=1;a<=max;a++)
   {
       for(i=126;i>=32;i--)
       {
           if(a==arr[i])
           {
               pe++;
               printf("%d %d\n",i,a);
           }
       }
   }

}
return 0;
}
