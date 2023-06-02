// 判断一个字符是不是元音
bool isVowelLetter(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

// 判断首尾字符是否是元音
bool isVowelString(char *word){
    int len = strlen(word);
    return isVowelLetter(word[0])&&isVowelLetter(word[len-1]);
}

int* vowelStrings(char ** words, int wordsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize){
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
