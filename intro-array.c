#include <stdio.h>

int main() {
	int average, grades[3];
		/*I
	 * ts an array containing the list of same kind of variables.
	 * In C an array contain same data types.
	 * 3 denotes number of items in array
	 */
	grades[0] = 80;
	grades[1] = 85;
	grades[2] = 90;
	average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}
