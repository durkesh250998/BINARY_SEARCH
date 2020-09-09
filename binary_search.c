#include<stdio.h>
int main(){
    int array[5]={10,20,30,40,50};
    int low,high,mid,flag=0;
    int key=70;
    low=0;
    high=4;
    while(low<high){
        mid=((low+high)/2);
        if(array[mid]==key){
            printf("ELEMENT FOUND");
            flag=1;
            break;
        }
        else if(array[mid]<key){
                low=mid+1;
        }
        else{
                high=mid-1;
        }
    }
    if(flag==0){
        printf("ELEMENT NOT FOUND");
    }
}