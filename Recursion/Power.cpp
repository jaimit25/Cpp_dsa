#include<iostream>
using namespace std;


//version 1
int power(int m, int n){
if(n==0){
    return 1;
}else{
    return power(m,n-1)*m;
}
}


//version2
int power2(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        if(n%2==0){
            //even
            return power2(m*m,n/2);
        }else{
            //odd
            return m*power2(m*m,(n-1)/2);
        }
    }
}

int main(){
cout<<power(2,9)<<endl;
cout<<power2(2,9)<<endl;
}