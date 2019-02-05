#include<stdio.h>
int main()
{
    int i,k;
    char c[17];\
    printf("input the plaintext");
    gets(c);
    for (i=0;i<strlen(c);i++){
        c[i]=c[i]+3;
                if(c[i]==35){
                    c[i]=32;
                }
                if(c[i]>122){
            c[i]=c[i]-122+96;
        }
    }
    puts(c);
      for (i=0;i<strlen(c);i++){
        c[i]=c[i]-3;
                if(c[i]==29){
                    c[i]=32;
                }
                if(c[i]>122){
            c[i]=c[i]-122+96;
        }
    }
       puts(c);
    return 0;
}

