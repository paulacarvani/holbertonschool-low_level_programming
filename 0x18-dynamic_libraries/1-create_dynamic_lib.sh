#!/bin/bash
<<<<<<< HEAD
gcc -fPIC -c *.c
gcc *.o -shared -o liball.so
=======
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c
gcc -shared *.o -o liball.so
>>>>>>> 3aa3d8bd796cfdade289f326783d0746d981b56a
