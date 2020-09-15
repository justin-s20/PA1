# PA1: Justin Sperry jusp3510@colorado.edu
### Programming Assignment 1 (CS 3753 Operating Systems)


# Build

Each of these files needs to be put in their respective path beginning at the directory **/home/kernel/linux-hwe-4.15.0**

```./arch/x86/kernel/helloworld.c``` Creates a system call that will print "hello world" to **/var/sys/syslog**``

```./arch/x86/kernel/cs3753_add.c``` Creates a system call that takes in three int arguments -> number1, number2, and a pointer result.
Prints number1 and number2 to console then adds them together and prints the sum.

```./arch/x86/kernel/Makefile``` These are instructions that tell the build system about kernel calls. **obj-y+=helloworld.o** and **obj-y+=cs3753_add.o** 
have been added near the end of the file.

```./arch/x86/entry/syscalls/syscall_64.tbl``` This is the table of system calls.
**sys_helloworld** and **sys_cs3753_add** have been placed at the end of the file at entries 333 and 334 respectively.

```./include/linux/syscalls.h``` Header file for system calls. Both **asmlinkage long sys_helloworld(void)** and 
**asmlinkage long sys_cs3753_add(int number1, int number2, int * result)** have been added to the end of the file.

```test_helloworld.c``` Program that performs system call on sys_helloworld. Output shown in **dmesg.txt**.

```test_cs3753_add.c``` Program that performs system call on sys_cs3753_add. Output shown in **dmesg.txt**.

```dmesg.txt``` Is a text file showing the output from the kernel. The output of **test_helloworld.c** and **test_cs3753_add.c** are shown at the end of the output log.


# Testing

```gcc test_helloworld.c -o test_helloworld```
```./test_helloworld```
This shows output of test program **test_helloworld.c**, dmesg will show the kernel output of **./arch/x86/kernel/helloworld.c**

```gcc test_cs3753_add.c -o test_cs3753_add```
```./test_cs3753_add```
This shows output of test program **test_3753_add.c**, dmesg will show the kernel output of **./arch/x86/kernel/cs3753_add.c**
