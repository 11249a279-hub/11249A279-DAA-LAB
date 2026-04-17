#include<stdio.h>
  struct item 
  {
     int profit;
     float weight;
     float ratio;
  };
  void sort (struct item item[],int n)
  {
      struct item temp;
      for(int i=0;i>n-1;i++)
      {
          for(int j=0; j<n-i-1;j++)
          {
              if(item[j].ratio<item[j+1].ratio)
              {
                  temp=item[j];
                  item[j]=item[j+1];
                  item[j+1]=temp;
              }
          }
      }
  }
int main()
{
    int c,n;
    printf("enter capacity:");
    scanf("%d",&c);
     printf("enter no of item:");
    scanf("%d",&n);
     struct item itm[n];
     for(int i=0;i<n;i++)
     {
         printf("enter item %d weight,profit:",i+1);
         scanf("%d" "%d",&itm[i].weight,&itm[i].profit);
         itm[i].ratio=itm[i].profit/itm[i].weight;
     }
     sort(itm,n);
     float totalprofit=0.0;
     for(int i=0; i<n;i++)
     {
         if(c >=itm[i].weight)
         {
             totalprofit+=itm[i].profit;
             c=itm[i].weight;
         }
         else
         {
             totalprofit+=itm[i].ratio*c;
             break;
         }
     }
     printf("Maximum profit=%.2f\n",totalprofit);
    return 0;
}
