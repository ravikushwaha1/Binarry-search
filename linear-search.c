#include <stdio.h>
int linearsearch (int arr[],int size ,int element){
for (int i = 0; i<size; i++){
    if(arr [i] == element){
        return i;
    }
}
    return -1;
}

int main(){
    int arr [] = {3,76,8,98,5,45,6,55,90,32};
    int size = sizeof(arr)/sizeof(int);
    int element = 8;
    int searchindex  = linearsearch(arr,size,8);
    printf("The element %d was found at index %d \n",element,searchindex);
    
}
