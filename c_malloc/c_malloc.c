#include <stdio.h>
#include <stdlib.h>
// https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
// 
int main(void)
{
	// code ...
	char *str;
	str = (char *) malloc(15);
	strcpy(str,"tutorialspoint");
	printf("String = %s,  Address = %u\n", str, str);	
	return 0;
}
