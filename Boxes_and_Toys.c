/*Boxes and Toys
Tina and Rahul have 1 toy each. They are entering into an amusement park but it is not allowed to take the toys inside, 
so they have to keep it in the boxes provided by the park management. They want to keep the toys together in one box.
There are N boxes in total, at this moment there are ti toys present in ith box and the maximum capacity of the box is denoted by ci. 
Rahul and Tina want to know in how many boxes can they keep their toys such that both the toys are in the same box. 

Example
Input
4 1 2 2 4 5 6 6 10
Output
2  */

#include <stdio.h>
  
  int main()
  {
    int N,ti,ci,i;
    int count=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
     {
       scanf("%d %d",&ti,&ci);
       int k=ci-ti;
       if(k>=2)
       count++;
     }
    printf("%d",count);
    
    return 0;
  }
