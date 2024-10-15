template <typename T> int quick_sort(T* array, int right_border, int left_border=0) {
	if (left_border - right_border > -2 ) return 0;

	T temp;
	T pivot = array[right_border - 1];
	int wall = left_border;
	
	for (int i = left_border; i < right_border; i++) {
		if (array[i] <= pivot) {
			temp = array[wall];
			array[wall] = array[i];
			array[i] = temp;
			wall++;
		}
	}

	quick_sort(array, wall - 1, left_border);
	quick_sort(array, right_border, wall - 1);
}