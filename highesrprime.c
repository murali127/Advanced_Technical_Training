/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n,b,i=2;
scanf("%d",&n);
while(i*i<=n)
    {
        while(n%i==0){
            n/=i;
        }
        i+=1;
    }
    b=(n>1)?n:(i-1);
    printf("%d",b);

    return 0;
}
