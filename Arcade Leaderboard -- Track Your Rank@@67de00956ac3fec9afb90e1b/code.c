// Your code here...
void trackPlayerRanks(int ranked[],int n;int player[],int m;int result[]){
    int uniqueRanked[200000],ranksize =0;
    uniqueRanked[ranksize++]=ranked{0};
    for(int i=1;i<n;i++){
        if(ranked[i] != ranked[i-1]){
            uniqueRanked[ranksize++]=ranked[i];
        }
    }
    int index = ranksize -1;
    for(int i=0;i<m;i++){
        while(index>=0 && player[i] >= uniqueRanked[index]){
            index--;
        }
        result[i]=index+2;
    }
    }