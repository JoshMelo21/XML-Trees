#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

 static int heap[100];
 static int size =0;


int heapDelete(){

if(size!= 0){
    int temp = heap[1];
    heap[1] = heap[size];
    size--;
    heap[size+1] =0;
    maxHeapify(1);
    return temp;

}

printf(stderr, "Heap is empty. \n");
return -1;

}

/*Printing the stack*/
void print(int n){

if(n<=size){
    printf("<node id=\"%d\">", heap[n]);
}

if(n*2<=size){

    print(n*2);
}
if((n*2 +1)<= size){

    print(n*2 +1);
}


printf("</node>");
}

/*method to swap to nodes*/
void swap(int n1, int n2){

int temp;
temp = heap[n1];
heap[n1] = heap[n2];
heap[n2] = temp;

}

/*method to swap check to see if a node is a leaf*/
int isLeaf(int n){

if(heap[2*n]==0 && heap[(2*n) +1]==0){
    return 1;
}
return 0;

}

/*max heap method which moves the largest integers to the top of the heap*/
 void maxHeapify(int n){

if(!isLeaf(n)){

    if(heap[n]<heap[2*n] || heap[n]<heap[(2*n) +1]){
        if(heap[2*n]>heap[(2*n) +1]){
            swap(n, 2*n);
            maxHeapify(2*n);

        }
        else{
            swap(n, (2*n)+1);
            maxHeapify((2*n)+1);

        }



    }



}


}


/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add){
 heap[0] = INT_MAX;
    if(size<99){
size = size+1;
heap[size] = thing2add;

int temp = size;

while(heap[temp]>heap[temp/2]){
swap(temp, temp/2);
temp = temp/2;
}
print(1);

    }
else{

    printf(stderr, "Heap is full \n");
}


}


/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize(){

return size;  //A dummy return statement
}
