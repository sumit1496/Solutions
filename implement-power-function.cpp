//https://www.interviewbit.com/problems/implement-power-function/

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int ans=1;
    int flag=0;
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(x<0){
        x=abs(x);
        if(n%2 != 0){
            flag=1;
        }
    }
    long long int temp=x%d;
    while(n!=0){
        if(n%2!=0){
            ans=(ans*temp)%d;
        }
        temp=temp*temp;
        temp=temp%d;
        n=n/2;
        if(ans>d){
            ans=ans%d;
        }
    }
    if(flag==1){
        return d-(int)ans;
    }
    return (int)ans;
    
}

