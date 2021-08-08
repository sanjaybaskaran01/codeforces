#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    int n;
    char s[110];
    cin>>n;
    while(n--){
        int l;
        cin>>s;
        l=strlen(s);
        if (l>10)
            cout<<s[0]<<l-2<<s[l-1]<<'\n';
        else
            cout<<s<<'\n';
    }
    return 0;
}