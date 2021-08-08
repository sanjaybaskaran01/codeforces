#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //(c1*1)+(c2*2)=n
        //c2=(n-c2)/2
        //(i. e. you must minimize |c1−c2|)
        //3c1=n
        //c1=n/3
        //(n/3)+(2c2)=n
        //2c2=n-(n/3)
        //2c2=2n/3
        //c2=2n/6
        int c1=n/3;
        int c2=(2*n)/6;
        if(n%3==1)
        c1++;
        else if(n%3==2)
        c2++;
        cout<<c1<<' '<<c2<<'\n';
    } 
    return 0;
}