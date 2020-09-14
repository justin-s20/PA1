#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {

int testHelloWorld = syscall(333);

printf("Call to sys_helloworld hopefully returns a 0: %d\n", testHelloWorld);
return 0;


}
