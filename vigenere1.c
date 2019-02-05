#include<stdio.h>

int main()
{

     int k1,PT1,i;
     printf("K = ");
     scanf("%d",&k1);
     printf("P = ");
     scanf("%d",&PT1);
     char k[k1],PT[PT1],k2[PT1],Encr[PT1],new;

     printf("Keyword ? = ");
     for(i=0;i<=k1;i++)
     {
        scanf("%c",&k[i]);
     }

     k[i]='\0';

     int l1 = strlen(k);
     l1=l1-1;
     printf("\nkeyword length %d \n",l1);

     printf("\nPlaintext ? = ");
     for(i=0;i<=PT1;i++)
     {
        scanf("%c",&PT[i]);
     }

     PT[i]='\0';

     int l = strlen(PT);
     l=l-1;

     printf("\nPlaintext length = %d",l);
    int j=0;
     for(i=0;i<=l;i++)
     {
          k2[i] = k[j];
          if(j>=l1)
          {
               j=0;
          }
          j++;

     }
     printf("\nKeyword = ");

     for(i=0;i<=l;i++)
     {
        printf("%c",k2[i]);
     }
     printf("\n");
     printf("\nPlaintext = ");
     for(i=0;i<=PT1;i++)
     {
        printf("%c",PT[i]);
     }
     printf("\n\nEncrypted Message = ");

      /*Encr[1]=k2[1]-PT[1];
      printf("%c",PT[0]);*/

     for(i=1;i<=PT1;i++)
     {
        new=(k2[i])+(PT[i]);
        Encr[i]=new-65;
     }
     for(i=1;i<=PT1;i++)
     {
        printf("%c",Encr[i]);
     }
return 0;
}
