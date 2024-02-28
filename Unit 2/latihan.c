#include <stdio.h>

int main(){
    int n;
    int sum=0;
    int temp;

    scanf("%d", &n);

    if(n<=0){
        printf("Tidak ada transaksi hari ini");
    } else{
        for(int i=1; i<=n; i++){
            scanf("%d", &temp);
            sum+=temp;
        }
        printf("%d", sum);
    }

    return 0;
}