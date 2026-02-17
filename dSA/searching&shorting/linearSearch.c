#include<stdio.h>

int arr[10];
int i;
int lineraSearch( int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i; //element found
        }
        }
    return -1;
}
    void display(int tar)
    {
        if(tar != -1)
         printf("element found at %d",tar);
        else
         printf("elemennt is missing");
    }




int main(){
    int arr[5]={3,4,5,1,6};
    int tar = lineraSearch(arr,5,5);
    
    display(tar);

    return 0;
}