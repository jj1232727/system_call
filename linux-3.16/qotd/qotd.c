#include <linux/kernel.h>
#include <linux/random.h>


asmlinkage long sys_qotd(void)
{
	const char* quotes[] = {"All that we are is the result of what we have thought", "I have no special talent. I am only passionately curious.", "If you judge people, you have no time to love them.", "Wisely, and slow. They stumble that run fast."};
	const size_t cquotes = sizeof(quotes)/sizeof(quotes[0]);
	
	int rChoice;
	get_random_bytes(&rChoice, sizeof(rChoice));

	if(rChoice < 0){
		rChoice = -rChoice;	
	}

        printk("%s\n", quotes[rChoice % cquotes]);
        return 0;
}

