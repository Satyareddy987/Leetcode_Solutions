bool checkDivisibility(int n) {
    int sum=0,prod=1;
    int r;
    int a=n;
    while(n>0){
        r=n%10;
        sum+=r;
        prod*=r;
        n=n/10;
    }
    int res=sum+prod;
    if(a%res==0){
        return true;
    }
    else{
        return false;
    }
}