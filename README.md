# xv6-jos-i386-lab
My lab implementation of 6.828 **2018** OS course of MIT.

All labs are finished. *(Lab 4 & Lab6 without challenge questions)*.

Check complete source code here: https://github.com/k0Iry/6.828_2018_mit_jos

# Get Started
Build a docker image for this course:

`docker build --tag 6.828 .`

`docker run -d --name=6.828 -v /local/path/to/6.828/:/usr/src/app --rm -it kljsandjb/6.828:latest`

Recommend to use **remote container** of Visual Studio Code.

## Please note!
**On macOS or Windows, the performance of IO in docker container is really bad, so the compile & run time could be much longer than on the host.**

On macOS, I built the tool chain, to use:

```
brew tap k0Iry/i386-jos-toolchains
brew install i386-jos-elf-gcc i386-jos-elf-gdb
```

But still you need to compile the 6.828 QEMU here: https://pdos.csail.mit.edu/6.828/2018/tools.html

# Results (ALL LABS finished):
JOS: ![CI](https://github.com/k0Iry/6.828_2018_mit_jos/workflows/CI/badge.svg?branch=lab6)

## LAB 2:

irytu@Irys-MBP ~/D/6/lab (lab2)> cat ../../grade-lab2.txt
/Applications/Xcode.app/Contents/Developer/usr/bin/make clean
```
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

## LAB 5:

```
+ mk obj/fs/clean-fs.img
+ cp obj/fs/clean-fs.img obj/fs/fs.img
make[1]: Leaving directory '/usr/src/app/lab'
internal FS tests [fs/test.c]: OK (18.3s) 
  fs i/o: OK 
  check_bc: OK 
  check_super: OK 
  check_bitmap: OK 
  alloc_block: OK 
  file_open: OK 
  file_get_block: OK 
  file_flush/file_truncate/file rewrite: OK 
testfile: OK (18.0s) 
  serve_open/file_stat/file_close: OK 
  file_read: OK 
  file_write: OK 
  file_read after file_write: OK 
  open: OK 
  large file: OK 
spawn via spawnhello: OK (14.5s) 
Protection I/O space: OK (15.3s) 
PTE_SHARE [testpteshare]: OK (15.3s) 
PTE_SHARE [testfdsharing]: OK (18.5s) 
start the shell [icode]: Timeout! OK (44.0s) 
testshell: OK (15.9s) 
primespipe: OK (22.6s) 
Score: 150/150
```

## LAB 6:

```
make[1]: Leaving directory '/home/runner/work/6.828_2018_mit_jos/6.828_2018_mit_jos'
testtime: OK (7.6s) 
pci attach: OK (0.7s) 
testoutput [5 packets]: OK (1.5s) 
testoutput [100 packets]: OK (1.1s) 
Part A score: 35/35

testinput [5 packets]: OK (1.1s) 
testinput [100 packets]: OK (1.1s) 
tcp echo server [echosrv]: OK (1.8s) 
web server [httpd]: 
  http://localhost:26003/: OK (1.0s) 
  http://localhost:26003/index.html: OK (1.8s) 
  http://localhost:26003/random_file.txt: OK (1.1s) 
Part B score: 70/70

Score: 105/105
```

XV6:

see homework folder
