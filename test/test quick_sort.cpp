#include "catch.hpp"
#include "quick_sort.h"


TEST_CASE("QuickSort") {
	int flag1 = 1;
	int flag2 = 1;
	int flag3 = 1;
	int flag4 = 1;
	int flag5 = 1;
	int flag6 = 1;

	int array1_size = 1;
	int array2_size = 5;
	int array3_size = 5;
	int array4_size = 5;
	int array5_size = 16;
	int array6_size = 13;

	float array1[1] = {};
	float array2[] = { 6, 3.56, 5, 6.66, 12 };
	int   array3[] = { 6, 5, 4, 3, 1 };
	int   array4[] = { 6, 6, 6, 6, 8 };
	int   array5[] = { 18, 22, 41, 44, 52, 55, 59, 60, 64, 67, 75, 76, 76, 82, 85, 93 };
	int   array6[] = { 52, 18, 93, 6, 53, 75, 41, 24, 81, 9, 8, 54, 28 };

	quick_sort(array1, array1_size);
	quick_sort(array2, array2_size);
	quick_sort(array3, array3_size);
	quick_sort(array4, array4_size);
	quick_sort(array5, array5_size);
	quick_sort(array6, array6_size);


	for (int i = 0; i < array1_size - 1; i++) {
		if (array1[i] > array1[i + 1]) {
			flag1 = 0;
			break;
		}
	}

	for (int i = 0; i < array2_size - 1; i++) {
		if (array2[i] > array2[i + 1]) {
			flag2 = 0;
			break;
		}
	}

	for (int i = 0; i < array3_size - 1; i++) {
		if (array3[i] > array3[i + 1]) {
			flag3 = 0;
			break;
		}
	}

	for (int i = 0; i < array4_size - 1; i++) {
		if (array4[i] > array4[i + 1]) {
			flag4 = 0;
			break;
		}
	}

	for (int i = 0; i < array5_size - 1; i++) {
		if (array5[i] > array5[i + 1]) {
			flag5 = 0;
			break;
		}
	}

	for (int i = 0; i < array6_size - 1; i++) {
		if (array6[i] > array6[i + 1]) {
			flag6 = 0;
			break;
		}
	}

	REQUIRE(flag1);
	REQUIRE(flag2);
	REQUIRE(flag3);
	REQUIRE(flag4);
	REQUIRE(flag5);
	REQUIRE(flag6);

}