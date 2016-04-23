



int is_turn_num(int num)
{
	int reverse_num = 0;
	int last_val = 0;
	int input_num = num;

	while(num != 0) {
		last_val = (num)%10;
		num = num/10;
		reverse_num = reverse_num*10+last_val;
	}
	
	if (reverse_num == input_num) return 1;

	return 0;
}
