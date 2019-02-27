# EECS 201 HW 6
uniqname:  khli

## Question 1
``` 1
The carat (^) means "not the following" when inside and at the start of [].
When it's inside [] but not at the start, it means the actual carat (^) character.
In all other cases, it means the start of the string/line
```

## Question 2
``` 2
The dollar sign ($) means it matches the end of a line if it is at the end of a regular expression.
```

## Question 3
``` 3
The period (.) matches any character except the newline character.
```

## Question 4
``` 4
The command could be "grep -o -w '\w\{1,3\}' cracklib-small"
```

## Question 5
``` 5
The commmand could be "grep -cE "^[A-Az-z]{3}" cracklib-small"
```

## Question 6
``` 6
For every vowel, grep the cracklib-small file for character matches, then sort the output in reverse order by numerical quantity.
```

## Question 7
``` 7
a sample command could be 
"grep for word in british-english; do "$(grep -c ^$word american-english) done | sort -rn"
```

## Question 8
``` 8
a sample command could be 
"grep for word in cracklib-small; do "$(grep -c ^$word american-english) done | sort -rn"
```

## Question 9
``` 9
search for matches of \* and return all non-matching lines
```

## Question 10
``` 10
just "git grep" does not search untracked files. you can manually change this by grep 'search' $(git ls-files etc....)
```

## Question 11
``` 11
just "git grep" does not search new files that are staged but not committed. 
```