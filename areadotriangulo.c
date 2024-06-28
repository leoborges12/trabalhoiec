/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
     float C,b,h;
    printf("Digite o primeiro valor");
    scanf ("%f", &b);
     
    printf("Digite o segundo valor");
    scanf("%f", &h);
    
    C=b*h/2;
    printf("A área desse triangulo é %f ",C);
    return 0;
}