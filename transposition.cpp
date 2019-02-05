#include <iostream>
#include <iomanip>
using namespace std;

void encryption (char message[]);//prototype
void decryption (char message[]);//prototype

int main(){
    int ans=0;
    char message[100];

    while (ans!=3){
        cout << "1. Encrypt a message.\n2. Decrypt a message.\n3. Quit\n";
        cin >> ans;

        if (ans==1){
            encryption (message);
        }

        if (ans==2){
            decryption (message);
        }

        if (ans==3){
            break;
        }
    }
return 0;
}

void encryption (char message[]){
    int count=0;
    cout << "Please enter a message to be encrypted:\n\n";
    cin.get(message[count]);

    while (message[count]!='\n'){
        count++;
        cin.get(message[count]);
    }

}

void decryption (char message[]){
    int count=0;
    cout << "Please enter a message to be decrypted:\n\n";
    cin.get(message[count]);

    while (message[count]!='\n'){
        count++;
        cin.get(message[count]);
    }

}
