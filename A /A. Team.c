#include <stdio.h>
 
int main(){
    int n,t,p,v,flag=0;
    scanf("%d",&n);
    while (n--){
        scanf("%d %d %d",&t,&p,&v);
        if (t==1 && p==1)
        flag+=1;
        else if(t==1 && v==1)
        flag+=1;
        else if(p==1 && v==1)
        flag+=1;
    }
    printf("%d",flag);
    return 0;
}