#include<stdio.h>
 int main()

 {
     int array[20],search,c,n;// defining my variables

     printf("Enter the number of elements in the array.\n");
     scanf("%d", &n);
     printf("Enter %d the integer(s) in the array\n", n);

     for(c=0; c<n; c++)
     scanf("%d", &array[c]);

     printf("Enter number to search\n");
     scanf("%d", &search);

     for(c=0; c<n ; c++)
     {
         if (array[c]==search)
         {
             printf("%d is found at the location %d\n.", search, c+1);
             break;

         }
     }
     if (c==0)
     printf("%d is not present in the array", search);
     return 0;

 }