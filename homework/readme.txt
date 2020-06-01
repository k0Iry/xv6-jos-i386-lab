steps for homework syscall:

1. register syscall declaration in user.h
2. define syscall number in syscall.h
3. add sys_xxx wrapper in sysproc.c or somewhere else appropriate, where finally the syscall will be "trapped" in according to syscall number in step 2 :p
4. add syscall details in usys.S so linker will find memory reference for declaration in user.h
