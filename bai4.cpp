#include <stdio.h>
#include <stdbool.h>

    int inputs(int i, int j){
        return i * j;
}
    void menu() {
        int n;
        char ch;
        printf("Chon bang cuu chuong : ");
        scanf("%d", &n);


        if (ch = 'Y') {
            printf("\nBANG CUU CHUONG\n");

            for (int i = n; i < 10; i++) {
                printf("\nBANG NHAN %d\n", i);
                for (int j = 0; j <= 10; j++) {
                    printf("\t%d x %d = %d\n", i, j, i * j);
                }

                printf("\nBam (Y) se tiep tuc, bam (N) se ket thuc: ");
                printf("\nCHON : ");
                scanf(" %c", &ch);

                if (ch == 'N') {
                    break;
                } else if (ch == 'Y'){
                    continue;
                }
            }
        }
    }

    int main(){
      menu();
        return 0;
} 

