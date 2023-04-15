
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[201];
    for(int i=0;i<=n;i++)
    scanf("%c",&a[i]);
    int k=0;
    int max=0;
    for(int i=0;i<=n;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            k++;
        }
        if(k>max){
            max=k;
        }
        if(a[i]==' '){
            k=0;
            continue;
        }
    }
    printf("%d",max);
     return 0;
}
