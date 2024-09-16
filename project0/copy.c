#include <linux/kernel.h>
#include <linux/uaccess.h> 
#include <linux/syscalls.h> 
#include <linux/errno.h>

SYSCALL_DEFINE3(copy, unsigned char __user *to, unsigned char *from, size_t size){

    char buf[6]= {'a','b','c','d','e'};
    char x;
    
    for(int i = 0; (i < (sizeof(buf)/sizeof(buf[i]) && (access_ok(VERIFY_READ, &buf[i], size)); ++i ){
	get_user(x, &from[i]);
	if (access_ok(VERIFY_WRITE, &to[i], size){
		      put_user(y, &to[i]));
	}
		      from + 1; to + 1;
    }
   
    return 0;
}

