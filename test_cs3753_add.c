#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {

int result;
int testCs3753Add = syscall(334, 1, 2, &result);
printf("The result of cs3753_add is %d\n", result);
return 0;

}
