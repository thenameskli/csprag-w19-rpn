# EECS 201 HW 3
uniqname:  khli

## Question 1
``` 1
ls used to work, but now doesnt
```

## Question 2
``` 2
you have to add the "ls" command to the PATH environment variable in order for it to run properly. 
```

## Question 3
``` 3
echo is a command that works even with an empty PATH.
```

## Question 4
``` 4
"$?" is the exit status of the last executed command. By convention, an exit status of 0 means success, and a non-zero return status means failure. An example of where this value is useful could be in understanding if your last command exited properly or exited with an error that didn't display on the console output.
```

## Question 5
``` 5
"$1" is a way to reference the positional arguments of a script in bash. For example, running "./script.sh Hello World" in a command line will set $0 = ./script.sh, $1 = Hello, $2 = World. This $ + integer access can be useful in a variety of situations, most obviously if we wish to use one of the arguments from the previous script but not the entire script.
```

## Question 6
``` 6
khli@DESKTOP-M2RBE2C:/mnt/c/Users/khli2/OneDrive/Documents/Academics/W2019/EECS 201/eecs201_khli/week03/homework$ cat ./build.sh
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
```

## Question 7
``` 7
I would update the /etc/profile script, which executes every time I login. This would allow me to add a custom path to the current path and not have to manually change it every time I open a new terminal window.
```

### Question 8
``` 8
1 hour
```