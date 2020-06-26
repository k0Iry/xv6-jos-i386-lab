# xv6-jos-i386-lab
part of my lab implementation of xv6 2018 course of MIT

# Get Started
I built a [docker image](https://hub.docker.com/r/kljsandjb/6.828) for this course, welcome to use :)

`docker run --name=6.828 -v /local/path/to/6.828/:/usr/src/app --rm -it kljsandjb/6.828:i386`

to attach and debug:
`docker exec -it 6.828 /bin/bash`

# Results:
JOS:

## LAB 2:

irytu@Irys-MBP ~/D/6/lab (lab2)> cat ../../grade-lab2.txt
/Applications/Xcode.app/Contents/Developer/usr/bin/make clean
rm -rf obj .gdbinit jos.in qemu.log
./grade-lab2
+ as kern/entry.S
+ cc kern/entrypgdir.c
+ cc kern/init.c
+ cc kern/console.c
+ cc kern/monitor.c
+ cc kern/pmap.c
+ cc kern/kclock.c
+ cc kern/printf.c
+ cc kern/kdebug.c
+ cc lib/printfmt.c
+ cc lib/readline.c
+ cc lib/string.c
+ ld obj/kern/kernel
+ as boot/boot.S
+ cc -Os boot/main.c
+ ld boot/boot
+ mk obj/kern/kernel.img
running JOS: (1.2s)
  Physical page allocator: OK
  Page management: OK
  Kernel page directory: OK
  Page management 2: OK
Score: 70/70

## LAB 3:

root@3083d04d2a44:/usr/src/app/lab# make grade
make clean
make[1]: Entering directory '/usr/src/app/lab'
rm -rf obj .gdbinit jos.in qemu.log
make[1]: Leaving directory '/usr/src/app/lab'
./grade-lab3 
make[1]: Entering directory '/usr/src/app/lab'
+ as kern/entry.S
+ cc kern/entrypgdir.c
+ cc kern/init.c
+ cc kern/console.c
+ cc kern/monitor.c
+ cc kern/pmap.c
+ cc kern/env.c
+ cc kern/kclock.c
+ cc kern/printf.c
+ cc kern/trap.c
+ as kern/trapentry.S
+ cc kern/syscall.c
+ cc kern/kdebug.c
+ cc lib/printfmt.c
+ cc lib/readline.c
+ cc lib/string.c
+ cc[USER] lib/console.c
+ cc[USER] lib/libmain.c
+ cc[USER] lib/exit.c
+ cc[USER] lib/panic.c
+ cc[USER] lib/printf.c
+ cc[USER] lib/printfmt.c
+ cc[USER] lib/readline.c
+ cc[USER] lib/string.c
+ cc[USER] lib/syscall.c
+ ar obj/lib/libjos.a
ar: creating obj/lib/libjos.a
+ cc[USER] user/hello.c
+ as[USER] lib/entry.S
+ ld obj/user/hello
+ cc[USER] user/buggyhello.c
+ ld obj/user/buggyhello
+ cc[USER] user/buggyhello2.c
+ ld obj/user/buggyhello2
+ cc[USER] user/evilhello.c
+ ld obj/user/evilhello
+ cc[USER] user/testbss.c
+ ld obj/user/testbss
+ cc[USER] user/divzero.c
+ ld obj/user/divzero
+ cc[USER] user/breakpoint.c
+ ld obj/user/breakpoint
+ cc[USER] user/softint.c
+ ld obj/user/softint
+ cc[USER] user/badsegment.c
+ ld obj/user/badsegment
+ cc[USER] user/faultread.c
+ ld obj/user/faultread
+ cc[USER] user/faultreadkernel.c
+ ld obj/user/faultreadkernel
+ cc[USER] user/faultwrite.c
+ ld obj/user/faultwrite
+ cc[USER] user/faultwritekernel.c
+ ld obj/user/faultwritekernel
+ ld obj/kern/kernel
ld: warning: section `.bss' type changed to PROGBITS
+ as boot/boot.S
+ cc -Os boot/main.c
+ ld boot/boot
boot block is 390 bytes (max 510)
+ mk obj/kern/kernel.img
make[1]: Leaving directory '/usr/src/app/lab'
divzero: OK (13.4s) 
softint: OK (9.8s) 
badsegment: OK (10.8s) 
Part A score: 30/30

faultread: OK (14.2s) 
faultreadkernel: OK (9.8s) 
faultwrite: OK (8.4s) 
faultwritekernel: OK (11.0s) 
breakpoint: OK (11.5s) 
testbss: OK (11.6s) 
hello: OK (9.9s) 
buggyhello: OK (10.7s) 
buggyhello2: OK (10.3s) 
evilhello: OK (9.4s) 
Part B score: 50/50

Score: 80/80
root@3083d04d2a44:/usr/src/app/lab# 


XV6:

see homework folder
