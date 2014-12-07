#include <stdio.h>
#include "generated/autoconf.h"

void test1(void);
void test2(void);
void test3(void);

int main(int argc, char *argv[])
{
	printf("First success\n");

#ifdef CONFIG_TEST1
	test1();
#endif

#ifdef CONFIG_TEST2
	test2();
#endif

#ifdef CONFIG_TEST3
	test3();
#endif

	return 0;
}
