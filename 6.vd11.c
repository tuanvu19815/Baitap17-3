#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char vatpham[20];
    int partno;
    float cost;
    printf ("nhap ten vat pham : \n "); 
    gets(vatpham); 
    printf ("Vui long so luong vat pham %s /1Kg \n",vatpham); 
    scanf("%d",&partno);
    printf ("gia/Kg:  ",partno); 
    scanf("%f",&cost);
    printf("cai gia phai tra la: %0.0f USD",partno*cost);
    return 0;
} 




