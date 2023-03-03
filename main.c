#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	 int arr[] = {5, 8, 4, 3, 9, 6, 7};
    int size = sizeof(arr[0]);
    int kucuk = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < kucuk) {
            kucuk = arr[i];
        }
    }
    printf("Dizideki en kucuk sayi: %d", kucuk);
	
	
	
	return 0;
}
