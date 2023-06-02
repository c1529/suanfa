#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
// 判断一个字符是不是元音
bool isVowelLetter(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

// 判断首尾字符是否是元音
bool isVowelString(char *word){
    int len = strlen(word);
    return isVowelLetter(word[0])&&isVowelLetter(word[len-1]);
}

int* vowelStrings(char words[][3], int wordsSize, int queries[][2], int queriesSize, int* queriesColSize, int* returnSize){
    int n = wordsSize;
    int perfixSums[n+1];
    //perfixSums = malloc(sizeof(int)*(n+1));
    memset(perfixSums,0,sizeof(perfixSums));
    for(int i=0;i<n;i++){
        int value = isVowelString(words[i])?1:0;
        perfixSums[i+1]=perfixSums[i]+value;
    }
    int *ans = malloc(sizeof(int)*queriesSize);
    for(int i=0;i<queriesSize;i++){
        int start = queries[i][0],end = queries[i][1];
        ans[i] = perfixSums[end+1]-perfixSums[start];
    }
    *returnSize = queriesSize;
    return ans;
}
int main(){
    char words[5][3] = {"aba","bcb","ece","aa","e"};
    int querises[3][2] = {{0,2},{1,4},{1,1}};
    int *a;
    int *b;
    int* ans = vowelStrings(words,5,querises,3,a,b);
    printf("%d,%d,%d",ans[0],ans[1],ans[2]);
    return 0;
}


