#include <linux/kernel.h>
#include <stdlib.h>
#include <stdio.h>

asmlinkage long sys_qotd(void)
{
	const char* quotes[] = {"All that we are is the result of what we have thought", "I have no special talent. I am only passionately curious.", "If you judge people, you have no time to love them.", "Wisely, and slow. They stumble that run fast."};
	const size_t cquotes = sizeof(quotes)/sizeof(quotes[0]);
        printk("%s\n", quotes[rand() % cquotes]);
        return 0;
}

