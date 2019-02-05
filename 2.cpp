#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    char str[30];
    char str1[3]={'X','Y','Z'};
    char transposition[9][9];
    char print_string[9][9];

    int i,j,l,m,n,length,key,key_count,row,number;
    printf("Enter PlainText:\n");
    gets(str);

    printf("Enter key");
    scanf("%d",&key);

    length=strlen(str);
    cout<<length<<endl;

     for(i=0;i<length;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] =toupper(str[i]);
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i] =toupper(str[i]);}
    }
    printf("\n\n");

    if(length%key==0){
        n=length/key;
        cout<<n;

    }
    else {
        n=(length/key)+1;
        cout<<n;
    }

    l=0;
    m=0;
    for(i=0;i<n;i++){
        for(j=0;j<key;j++){

           if(str[l]!='\0'){
            transposition[i][j]=str[l];
            l++;
           }
           else{
                transposition[i][j]=str1[m];
                m++;
        }
            printf("%c\t",transposition[i][j]);
        }
        printf("\n");
    }

   printf("OUTPUT\n\n");

   for(i=0;i<key;i++){
       for(j=0;j<n;j++){
            if(transposition[j][i]!='\0'){
            printf("%c\t",transposition[j][i]);}}
   }
   printf("\n");

   return 0;
}



