
#include <lib/semihosting.h>

void SystemInit(void)
{
}

void _start(void)
{
	sys_puts("Hello, World!\n");
	sys_exit();
	for (;;) ;
}
