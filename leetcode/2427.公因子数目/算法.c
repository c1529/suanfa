int gcd(int x,int y){
    while(x%y!=0){
        int temp;
        temp = x%y;
        x = y;
        y = temp; 
    }
    return y;
}

void swap(int *a,int *b){
    int *temp;
    temp = a;
    a = b; 
    b = temp;
}

int commonFactors(int a, int b){
    int sum =0;
    if(b>a){
        swap(&a,&b);
    }
    int c = gcd(a,b);
    for(int i=1;i*i<=c;i++){
        if(c%i==0){
            sum++;
            if(i*i!=c){
                sum++;
            }
        }
    }
    return sum;
}
