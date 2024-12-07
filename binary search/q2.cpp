//now this question is based on the nth root of number 

//1st question is simply based on binary search on answer 
//find the square root of number
int func(int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans*=n;
    }
    return ans;
}
int func(int n){
    //find the middle element
    int m=(l+h)/2;
    //compare to traditional writing of way that we divide the logic in three
    //steps like if ans then two cases for omite the half part
    //here our condition is less than the required number 
    //then this candidate can be our answer 
    //m*m was our condition in the case of square root 
    //here what condition will be 
    int cd=func(m);
    if(cd<=n){
        //it is our potential answer 
        ans=m;
        //also seach for the perfect answer if it can be met 
        l=m+1;
    }
    else h=m-1;
    //so just by using two cases we can easily find the square root of number 
}