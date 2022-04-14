---
theme: seriph
background: https://source.unsplash.com/collection/94734566/1920x1080
class: 'text-center'
highlighter: shiki
lineNumbers: false
drawings:
  persist: false
---

# Shell Piping

Alan Hung

---

# Recall
Excuting programs

Passing arguments:
```
# posotional arguments
echo I want 
# short flags
ls -la
# long flags
ls --help
```
Using file paths:
```
# go to 'directory' under the current working directory
cd ./directory
# using absolute paths
cd /usr/bin
# go to the parent directory
cd ..
```

---

# Standard Stream
stdout, stderr, stdin

**Standard steams** are like water streams that connects **two ends**, a source and a sink.
A program can take in input from **stdin**, and sent output to **stdout** or **stderr**

Output and input can be chained between multiple commands, the last output will go to the terminal
We call this **piping**, and they can be done in the command line by seperating commands with a '|'

*cmd1* | *cmd2* *arg1* *arg2* | *cmd3* | ...

---

# Less
Best Fried #1

Sometimes output of commands can be long, and `less` can help to provide a way to scroll on that output

```
# view files under /usr/bin
ls -la /usr/bin | less
# list system installed packages
apt list | less
# list running proccess
ps aux | less
```

Keymap:
- j - scrolling down
- k - scrolling up
- h - help

---

# Grep 
Best Friend #2

`grep` is used to search text based on some input.

Sample uses:

```
# search executables in /usr/bin that has zz as a substring
ls /usr/bin | grep zz --color
# search for locally istalled package
apt list | grep png --color
# search process name 
ps aux | grep bash --color
```

`grep` can also be used on files instead from stdin

```
grep "hi" slides.md .replit replit.nix
```

`grep` can also be used with regular expression

```
ls -la | grep "[0-9]+" --color
```

---

# Head, Tail, Wc
Other comands

`head`

```
# get first 5 lines of slides.md
head slides.md -n 5
# get first 5 lines of stdin
ls -la | head -n 5
```

`tail`

```
# get last 5 lines of slides.md
tail slides.md -n 5
# get last 5 lines of stdin
ls -la | tail -n 5
```

`wc`
```
wc slides.md 
ls -la | wc
```

---

# File Redirection (Output)
File Redirection

By default, output of a program or series of pipes is sent to ther **termina**.

However, output can also be redirected to a **file**

syntax:

*cmd* > *file_name*

example:

```
ls -la > output.txt
apt list > packages
ls -la /usr/bin | grep zz > bins_with_zz
```

---

# File Redirection (Input)
File Redirection

Programs like `less` and `grep` takes input, and you can do the following if you want to execute based on the contents of some file:
```
cat slides.md | less
cat slides.md | grep title --color
```

The more "correct" to do this using file redirection is

syntax:

*cmd* < *file_name*


```
less < slides.md
grep "file" --color < slides.md
```

---

# Using < and >
File Redirection

Combining
```
# get all lines containing the word "file" from slides.md and put the content in a file called out
grep "file" < slides.md > out
```

The order at which yout put the shell redirection does not matter
```
grep "file" > out < slides.md

> out grep "file" < slides.md

< slides.md grep "file" > out

< slides.md > out grep "file"

> out < slides.md grep "file"
```

---

# Thank You for Listening

## Instaling Linux today to get a your shell and terminal on your computer
https://itsfoss.com/best-linux-beginners/

## Shell Command Challenge
https://cmdchallenge.com/
