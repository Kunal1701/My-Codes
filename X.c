#include <stdio.h>
int main()
{
    int a;
    int arr[100];
    printf("enter a");
    scanf("%d", &a);   

   for (int  i = 0; i<a; i++)
   {
    scanf("%d", &arr[i]);   
       
   }
    
   for (int  i = 0; i<a; i++)
   {
    if (arr[0]>arr[i])
    {
        arr[0]=arr[i];
    }
      
       
   }
   printf("smallest is %d",arr[0]);


 for (int  i = 0; i<a; i++)
   {
    if (arr[0]<arr[i])
    {
        arr[0]=arr[i];
    }
      
       
   }
   printf( "\nlargest is %d",arr[0]);
      
    return 0;

}