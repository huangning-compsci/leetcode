#include <stdio.h>

int numIdenticalPairs(int* nums, int numsSize) {
    
    int count=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
    }    
    return count;
}

int main(){
    int nums[]={1,2,3,1,1};
    int a=5;
    int c=numIdenticalPairs(nums,a);
    printf("%d",c);
}