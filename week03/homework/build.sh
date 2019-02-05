#!/bin/bash
gcc -Wall helloworld.c -o hello
echo "Hello, World!" > testfile
./hello
./hello > newfile
if [diff testfile newfile != ""]
then
    echo "All tests passed."
else
    echo "Test failed. Expected output >>Hello, World!<<, got output >>"
    cat newfile
    echo "<<"
fi
