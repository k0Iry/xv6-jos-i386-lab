# xv6-jos-i386-lab
part of my lab implementation of xv6 2018 course of MIT

# Get Started
I built a docker image for this course, welcome to use :)

`docker run --name=6.828 -v /local/path/to/6.828/:/usr/src/app --rm -it kljsandjb/6.828:i386`

# Results:
JOS:

LAB 2:

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

LAB 3:

make[1]: Leaving directory '/usr/src/app/lab'
divzero: OK (8.0s) 
softint: OK (8.1s) 
badsegment: OK (7.1s) 
Part A score: 30/30

faultread: OK (6.7s) 
faultreadkernel: OK (5.8s) 
faultwrite: OK (6.7s) 
faultwritekernel: OK (7.2s) 
breakpoint: OK (6.0s) 
testbss: OK (7.0s) 
hello: OK (6.2s) 
buggyhello: OK (5.5s) 
buggyhello2: OK (5.6s) 
evilhello: OK (5.7s) 
Part B score: 50/50

Score: 80/80
root@6fc14dcf95ce:/usr/src/app/lab#

XV6:

see homework folder
