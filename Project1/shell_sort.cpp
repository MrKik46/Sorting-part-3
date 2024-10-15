#include <iostream>
template <typename T> int shell_sort(T* array, int array_size) {
	int step = array_size;
	T current;
	while (step) {
		if (!(step % 2)) { 
			step /= 2; 
		}
		else if (step == 1) { 
			step = 0;
			continue;
		}
		else { 
			step = step / 2 + 1;
		}
		for (int i = step; i < array_size; i++) {
			int j;
			current = array[i];
			
			for (j = i; current < array[j - step] and j - step >= 0; j -= step) {
				array[j] = array[j - step];
			}
			array[j] = current;
		}
	}
	return 1;
}
