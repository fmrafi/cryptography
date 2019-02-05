#include<stdio.h>

int main()
{

     int k1,PT1,i;
     char k[6],PT[6],k2[6],Encr[6],new;

     printf("Keyword = ");
     gets(k);

     k[i]='\0';

     int l1 = strlen(k);
     printf("\nkeyword length %d \n",l1);

     printf("Plaintext = ");
     gets(PT);
     PT[i]='\0';

     int l = strlen(PT);

     printf("\nPlaintext length = %d",l);
    int j=0;
     for(i=0;i<l;i++)
     {
          k2[i] = k[j];
          if(j>=2)
          {
               j=0;
          }
          j++;

     }
     printf("\nKeyword = ");

     for(i=0;i<l;i++)
     {
        printf("%c",k2[i]);
     }
     printf("\n");
     printf("\nPlaintext = ");
     for(i=0;i<PT1;i++)
     {
        printf("%c",PT[i]);
     }
     printf("\n\nEncrypted Message = ");

      /*Encr[1]=k2[1]-PT[1];
      printf("%c",PT[0]);*/

     for(i=1;i<PT1;i++)
     {
        new=(k2[i])+(PT[i]);
        Encr[i]=new-65;
     }
     for(i=1;i<PT1;i++)
     {
        printf("%c",Encr[i]);
     }
return 0;
}
