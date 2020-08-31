#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapSize();
extern int heapDelete();

int main(int argc, char * argv[])
{
  int value;
  while (scanf("%d\n", &value) != EOF) {
    printf("READING INPUT: %d\n", value);
    //

addHeap(value);
  }

printf("\nDeleted values: \n");
while(heapSize()!=0){
int q = heapDelete();
push(q);
    printf("%d\n", q);

}
printf("Popping the stack: \n");

while(!isEmpty()){

    printf("%d\n", pop());
}



  exit(0);
}
