#include<stdio.h>
int main(){
    int arr[20]= {10,20,30,40,50};
    int size = 5;
    printf("%d\n",size);
    int item = 15;
    int pos = 1;
    if(pos < 0 || pos>size){
        printf("invalid Position");
    }
    for(int i= size;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = item ;
    size++;
    for( int j = 0;j<size;j++){
        printf("%d\t",arr[j]);
    }
}