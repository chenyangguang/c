#include <stdio.h>
int main(int argc, const char *argv[])
{
	// 定义遍历sum, number	
	int sum, number;
	sum = 0;
	for (number = 0; number < 10 ; number++ ) { //for循环条件与number的变化值
		sum += number;
	}
	printf("10以内数的和为:%d", sum);
	return 0;
}
