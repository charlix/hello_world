
#include <stdio.h>
#include <stdlib.h>

#include "turn_num.h"

int main(int argc, char *argv[])
{
	int test_num = 12321;
	int test_num_2 = 12;
	printf("hello github!\n");
	printf("this is del_test branch!\n");
	printf("this is del_test branch 2!\n");
	printf("this is del_test branch 3!\n");
	printf("this is del_test branch 4!\n");

	printf("is turn %d\n", is_turn_num(test_num));
	printf("is turn %d\n", is_turn_num(test_num_2));

	return 1;
}
