#include<stdio.h>

int main()
{
     char PT[8];
     char B[5][5];
     int k=4,i,j,c=0,e,l;

     for(i=0;i<=7;i++)
     {
        scanf("%c",&PT[i]);
     }
     PT[i]='\0';

     l = strlen(PT);
     //l=l-1;

     printf("%d\n",l);


      if(l%k!=0)
          e=(l/k)+1;
      else
          e=l/k;

          printf("e = %d",e);


          for (i=0; i<=e; i++)
          {
            for (j=0; j<k; j++)
            {
               B[i][j]=PT[c];
               c++;
            }
            //printf(" i=%d e=%d k=%d j=%d ",i,e,k,j);


          }
  printf("\n");

          for (i=0;i<e;i++)
          {
            for (j=0;j<k;j++)
            {
              printf("[%d][%d] = ",i,j);
              printf("%c " ,B[i][j]);

            }
            printf("\n");

          }

           printf("\n");

          for (i=0;i<k;i++)
          {
            for (j=0;j<e;j++)
            {
               //printf("[%d][%d] = ",j,i);
              printf(" %c ",B[j][i]);

            }


          }
          return 0;
}


