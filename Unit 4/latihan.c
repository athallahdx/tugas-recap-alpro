#include <stdio.h>

int cariKeliling(int s){
    return 4*s;
}

int cariLuas(int s){
    return s*s;
}

int cariVolume(int s){
    return s*s*s;
}

int main(){
    int sisi;
    scanf("%d", &sisi);
    
    int keliling=cariKeliling(sisi);
    int luas=cariLuas(sisi);
    int volume=cariVolume(sisi);

    printf("%d\n", keliling);
    printf("%d\n", luas);
    printf("%d\n", volume);

    return 0;
}