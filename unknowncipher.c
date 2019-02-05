#include<stdio.h>
int main()
{
    int i,key,j;
    char msg[100];

    printf("Enter a message to encrypt: ");
    gets(msg);

     printf("\n\nEnter key: ");
    scanf("%d", &key);

    for (i=0;i<strlen(msg);i++){
        msg[i]=msg[i]+key;

                if(msg[i]>122){
            msg[i]=msg[i]-122+96;
        }
    }

     printf("\n\nThe Encrypted message: ");

    puts(msg);
      for(j=1;j<=25;j++)
      {
      for (i=0;i<strlen(msg);i++){
        msg[i]=msg[i]-1;

            if(msg[i]<97){
            msg[i]=msg[i]+26;
        }

    }

    printf("\n\nfor '%d' The Message After decrypted: ",j);
       puts(msg);
}



return 0;
}

