/* Code by Stephan "stepi0" Trettin */

#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *array, int elemente) {
	int index, index_klein, wert, wert_klein;

	for(index = 0; index < elemente; index++) {
		
		/* Aktuelle Position */
		wert = index;

		/* Schleife läuft durch, bis kleinste Element als akt. Position gefunden ist */
		for(index_klein = index + 1; index_klein <= elemente; index_klein++) {

			/* Ein kleineres Element gefunden? */
			if(array[index_klein] < array[wert]) {
				wert = index_klein;
			}
		}

		/* Kleinste Element an akt. Position */
		if(wert != index) {
			wert_klein = array[wert];
			array[wert] = array[index];
			array[index] = wert_klein;
		}
	}
} 

int main(void) {
	int i;

	int test_array[] = { 5, 2, 43, 12, 3, 312, 32, 4, 8 };
	int N  = sizeof(test_array) / sizeof(int);

	selectionSort(test_array, N - 1);

	for(i = 0; i < N; i++) {
		printf("%d ", test_array[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
