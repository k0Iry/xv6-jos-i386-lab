# xv6-jos-i386-lab
part of my lab implementation of xv6 2018 course of MIT

# Get Started
I built a [docker image](https://hub.docker.com/r/kljsandjb/6.828) for this course, welcome to use :)

`docker run -d --name=6.828 -v /local/path/to/6.828/:/usr/src/app --rm -it kljsandjb/6.828:latest`

to attach and debug:

`docker exec -it 6.828 /bin/bash`

Recommend to use **remote container** of Visual Studio Code.

# Results:
JOS:

## LAB 2:

irytu@Irys-MBP ~/D/6/lab (lab2)> cat ../../grade-lab2.txt
/Applications/Xcode.app/Contents/Developer/usr/bin/make clean
```
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
```
## LAB 3:

```
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
```

## LAB 4:

```
root@c32df0e58761:/usr/src/app/lab# make grade
make clean
make[1]: Entering directory '/usr/src/app/lab'
rm -rf obj .gdbinit jos.in qemu.log
make[1]: Leaving directory '/usr/src/app/lab'
./grade-lab4 
make[1]: Entering directory '/usr/src/app/lab'
+ as kern/entry.S
+ cc kern/entrypgdir.c
+ cc kern/init.c
+ cc kern/console.c
+ cc kern/monitor.c
+ cc kern/pmap.c
+ cc kern/env.c
+ cc kern/kclock.c
+ cc kern/picirq.c
+ cc kern/printf.c
+ cc kern/trap.c
+ as kern/trapentry.S
+ cc kern/sched.c
+ cc kern/syscall.c
+ cc kern/kdebug.c
+ cc lib/printfmt.c
+ cc lib/readline.c
+ cc lib/string.c
+ as kern/mpentry.S
+ cc kern/mpconfig.c
+ cc kern/lapic.c
+ cc kern/spinlock.c
+ cc[USER] lib/console.c
+ cc[USER] lib/libmain.c
+ cc[USER] lib/exit.c
+ cc[USER] lib/panic.c
+ cc[USER] lib/printf.c
+ cc[USER] lib/printfmt.c
+ cc[USER] lib/readline.c
+ cc[USER] lib/string.c
+ cc[USER] lib/syscall.c
+ cc[USER] lib/pgfault.c
+ as[USER] lib/pfentry.S
+ cc[USER] lib/fork.c
+ cc[USER] lib/ipc.c
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
+ cc[USER] user/idle.c
+ ld obj/user/idle
+ cc[USER] user/yield.c
+ ld obj/user/yield
+ cc[USER] user/dumbfork.c
+ ld obj/user/dumbfork
+ cc[USER] user/stresssched.c
+ ld obj/user/stresssched
+ cc[USER] user/faultdie.c
+ ld obj/user/faultdie
+ cc[USER] user/faultregs.c
+ ld obj/user/faultregs
+ cc[USER] user/faultalloc.c
+ ld obj/user/faultalloc
+ cc[USER] user/faultallocbad.c
+ ld obj/user/faultallocbad
+ cc[USER] user/faultnostack.c
+ ld obj/user/faultnostack
+ cc[USER] user/faultbadhandler.c
+ ld obj/user/faultbadhandler
+ cc[USER] user/faultevilhandler.c
+ ld obj/user/faultevilhandler
+ cc[USER] user/forktree.c
+ ld obj/user/forktree
+ cc[USER] user/sendpage.c
+ ld obj/user/sendpage
+ cc[USER] user/spin.c
+ ld obj/user/spin
+ cc[USER] user/fairness.c
+ ld obj/user/fairness
+ cc[USER] user/pingpong.c
+ ld obj/user/pingpong
+ cc[USER] user/pingpongs.c
+ ld obj/user/pingpongs
+ cc[USER] user/primes.c
+ ld obj/user/primes
+ ld obj/kern/kernel
+ as boot/boot.S
+ cc -Os boot/main.c
+ ld boot/boot
boot block is 415 bytes (max 510)
+ mk obj/kern/kernel.img
make[1]: Leaving directory '/usr/src/app/lab'
dumbfork: OK (13.3s) 
Part A score: 5/5

faultread: OK (12.8s) 
faultwrite: OK (11.9s) 
faultdie: OK (10.6s) 
faultregs: OK (10.8s) 
faultalloc: OK (10.7s) 
faultallocbad: OK (12.9s) 
faultnostack: OK (11.7s) 
faultbadhandler: OK (11.9s) 
faultevilhandler: OK (10.6s) 
forktree: OK (13.2s) 
Part B score: 50/50

spin: OK (13.1s) 
stresssched: OK (12.3s) 
sendpage: OK (11.2s) 
pingpong: OK (9.7s) 
primes: OK (13.3s) 
Part C score: 25/25

Score: 80/80
```


XV6:

see homework folder
