# Take Memory
Malloc and memset a certain amount of memory, in a loop, by chunk of 500 MiB.

It takes one argument, the number of 500 MiB chunk you want to try to allocate.
The default value (if no argument) is 7 (3.5 GiB).

Check how much memory is available before you run it ; if your physical memory
is alreay allocated and you have enough swap enable... well, it will swap!

## Linux
It should just work!

## Solaris
On Solaris 10, gcc produces a 32 bit executable by default, use `-m64`:

    export CC=gcc
    export CFLAGS='-m64'
    gmake takememory


