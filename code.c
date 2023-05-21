#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "code.h"

/* Author: Newton Tan */
int sum(int a, int b){
 return (a+b);
}

int product(int a, int b){
 return (a*b);
}

// Ausgabe des von EntwicklerHeld sinnfrei geposteten Quellcode auf Facebook
void output1(int min, int max){
printf("function sum(a, b){\n");
printf(" let sum;\n");
for(int i=min; i < max; i++){
 for(int j=min; j < max; j++){
  printf(" if((a==%d) && (b==%d)) sum = %d;\n", i, j, sum(i, j));
 }
}
printf("}\n");
}

// Einfache Summenausgabe zweier Zahlen von min bis max
void output2(int min, int max){
 for(int i=min; i < max; i++){
  for(int j=min; j < max; j++){
   printf("%d + %d = %d\n", i, j, sum(i,j));
  }
 }
}

void output3(int min, int max){
for(int i=min; i < max; i++){
 for(int j=min; j < max; j++){
  printf("%d * %d = %d\n", i, j, product(i, j));
 }
}
}

int main(int argc, char* argv[]){
int min=0;
int max=min;
printf("Definieren Sie einen Zahlenbereich von min bis max.\n");
printf("Geben Sie min ein.\n");
scanf("%d", &min);
printf("Geben Sie max ein.\n");
scanf("%d", &max);
if(OPTION==1){
 output1(min, max);
}else if(OPTION==2){
 output3(min, max);
}else{
 output2(min, max);
}
 return EXIT_SUCCESS;
}
