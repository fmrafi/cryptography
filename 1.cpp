#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;


int s(int e, int p)
{
    int i, r=1;

    for(i=1; i<=p; i++)
    {
        r=r*e;
    }

    return r;

}

int main()
{

    int q, a;
    int xa, xb;
    int ya, yb;
    int ka, kb;


    printf("Enter q, a: ");
    scanf("%d %d", &q, &a);

    printf("Enter Xa, Xb: ");
    scanf("%d %d", &xa, &xb);


    ya = s(a, xa)%q;
    yb = s(a, xb)%q;

    printf("Ka = %d and Kb= %d\n", ya, yb);

    ka = s(yb, xa) % q;
    kb = s(ya, xb) % q;

    if(ka==kb)
    {
        printf("Secret Key: %d\n", ka);
    }
    else
    {
        printf("Secret key does not match\n");
    }
    return 0;
}

