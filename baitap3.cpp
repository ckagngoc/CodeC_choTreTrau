//in ra ma cac ky tu nhap tu ban phim
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void xuly() {
    char a;
    fflush(stdin);
    a = getchar();
    printf("%d",a);
}
void press() {
    printf("\nBam phim bat ky de tiep tuc");
    getch();
    system("cls");
}
int main() {
    while (true){
        xuly();
        press();
    }
    return 0;
}