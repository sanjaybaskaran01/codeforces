#include <stdio.h>
 
int main(){
    int n,k,arr[100],flag=0;
    scanf("%d %d",&n,&k);
    for (int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for (int i=1;i<=n;i++)
    if (arr[i]>=arr[k] && arr[i]>0)
    flag++;
    printf("%d",flag);
    return 0;
}