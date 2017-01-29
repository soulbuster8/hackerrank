#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int a[100001];
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //vector<int>
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        long long int sum=0,result=0;
        for(i=0;i<n;i++)
        {
            sum = (((i+1)%2)*((n-i)%2))%2;
            if(sum%2==1)
            result=result^(a[i]);
            else
            result=result;
        }
        cout<<result<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

