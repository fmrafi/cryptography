#include<stdio.h>
int main()
{
    int i,k=3;
    char m[100],op;

    printf("Enter a message to encrypt: ");
    gets(m);

    /* printf("\n\nEnter key: ");
    scanf("%d", &k);*/
    printf("\nEnter an operator : ");
    scanf("%c", &op);

    switch(op)
    {
        case '+':
            for (i=0;i<strlen(m);i++)
            {
               m[i]=m[i]+k;

               if(m[i]>122)
            {
             m[i]=m[i]-122+96;
            }

           }

          printf("\n\nThe Encrypted message: ");

          puts(m);
          break;

        case '-':
            for (i=0;i<strlen(m);i++){
        m[i]=m[i]-k;
        if(m[i]>122)
        {
            m[i]=m[i]-122+96;
        }
    }

    printf("\n\nThe Message After decrypted: ");
       puts(m);
            break;

    }
return 0;
}



