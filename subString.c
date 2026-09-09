#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool not_repeat(char* s,int start,int end){
    for(int temp=start-1;temp>=end;temp--){
        if(s[start]==s[temp]){
            return false;
        }
    }
    return true;
}

int lengthOfLongestSubstring(char* s) {
    int len=strlen(s);
    int max_len=1;
    for(int i=0;i<len;i++){
        int in_max_len=1;
        for(int j=i+1;j<len;j++){
            if(not_repeat(s,j,i)){
                in_max_len++;
            }else{
                break;
            }
        }
        if(in_max_len>max_len){
            max_len=in_max_len;
        }
    }
    return max_len;
}

int main(){
    char s[]="pwwkew";
    int len=lengthOfLongestSubstring(s);
    printf("%d",len);
}