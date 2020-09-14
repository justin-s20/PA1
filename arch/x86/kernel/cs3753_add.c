#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int number1, int number2, int * result) {

int sum;
printk(KERN_ALERT "number 1 is: %d\n", number1);
printk(KERN_ALERT "number 2  is: %d\n", number2);

sum = number1 + number2;
printk(KERN_ALERT "Sum of sys_cs3753_add is %d\n", sum);
copy_to_user(result, &sum, sizeof(int));
return 0;

}
