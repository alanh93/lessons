---
theme: seriph
background: https://source.unsplash.com/collection/94734566/1920x1080
class: 'text-center'
highlighter: shiki
lineNumbers: false
drawings:
  persist: false
---

# Basic Shell Usage and Navigation

Alan Hung


<div class="abs-br m-6 flex gap-2">
  <a href="https://github.com/slidevjs/slidev" target="_blank" alt="GitHub"
    class="text-xl icon-btn opacity-50 !border-none !hover:text-white">
    <carbon-logo-github />
  </a>
</div>

---

# What is a Shell?
Terminal vs. GUI


In **Unix**-like operating systems like **Linux**, we often use a **shell** to execute programs in a **text-based** terminal as oposed to using a graphical user interface (GUI).


<div class="grid grid-cols-2">
  <p>Window's GUI</p>
  <p>Linux's Terminal Emulator</p>
  <img style="width: 18vw" border="rounded" src="https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Ftoastytech.com%2Fguis%2Fwin10start.png&f=1&nofb=1" />
  <img style="width: 18vw" border="rounded" src="https://upload.wikimedia.org/wikipedia/commons/2/29/Linux_command-line._Bash._GNOME_Terminal._screenshot.png" />
</div>

---

# The Shell for Programing
Why?

<div class="grid grid-cols-2 gap-2">
  <div>
  <p>Programmers are more likely to use the shell because it is more:</p>
    <ul>
      <li>simple - easier to navigate </li>
      <li>productive - faster program execution </li>
      <li>programmable - combine program though pipes e.g. ls | less </li>
    </ul>
  </div>

  <div>
    <p>Shell in Repl.it</p>
    <img src="https://storage.googleapis.com/replit/images/1599748485434_87c2717ac618b841b503c23d4e20afa9.png"/>
  </div>
</div>

---

# Executing a Program
Running a Program

<img style="width: 18vw" src="https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Fnews.softpedia.com%2Fimages%2Freviews%2Flarge%2Fbash_tutorial-img1-large.png&f=1&nofb=1" />

The **texts** on the left side until the dollar sign ($) is called the **prompt**.

The **box** is the **cursor** where text appear as you type

Programs can be executed by typing the **name** of the program and then press **enter**

---

# Sample Programs 
Try These

<div class="grid grid-cols-2">
  <div>
    <li>date - get current time and date</li>
    <li>uname - prints system information</li>
    <li>pwd - print current directory name</li>
    <li>ls - list files in current directory</li>
    <li>clear - clears the screen</li>
  </div>
  <img src="https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2Fnews.softpedia.com%2Fimages%2Freviews%2Flarge%2Fbash_tutorial-img1-large.png&f=1&nofb=1" />

</div>

---

# Arguments
Programs can also accept arguments, and they can be entered by placing them on the right side of the program name, seperated by spaces

<div class="grid grid-cols-3 gap-2">
  <div>
    <p>Positional Argument</p>
      <code>echo I want to swing</code>
      <p>prints: I want to swing</p>
      <code>cp main.cpp hi.cpp</code>
      <p>copies <code>main.cpp</code> to <code>hi.cpp</code></p>
  </div>
  <div>
    <p>Short Flags and Optional Parameters</p>
    <p><code>ls -l -a</code> or <code>ls -la</code> or <code>ls -al</code></p>
    <p>list files in current directory</p>
    <code>gcc main.c -o main</code>
    <p>complie main.c code</p>
  </div>
  <div>
    <p>Long Flags</p>
    <code>ls --help</code>
    <p>prints help of <code>ls</code></p>
  </div>
</div>

---

# Short Cuts
Key bindings and tab completion

<div class="grid grid-cols-2">
  <div>
    <p>Short Cuts</p>
    <p><b>up arrow key</b> or <b>ctrl-p</b> for last command in history</p>
    <p><b>botton arrow key</b> or <b>ctrl-n</b> for next command in history</p>
    <p><b>ctrl-b</b> to move cursor back a character</p>
    <p><b>ctrl-f</b> to move cursor forward a character</p>
    <p><b>ctrl-a</b> to move the cursor to the beggining of the line</p>
    <p><b>ctrl-e</b> to move the cursor to the ending of the line</p>
  </div>
  <div>
    <p>Tab completion</p>
    <p>Pressing tab or ctrl-i can sometimes autocomplete what you want </p>
    <code>ls /us</code>
    <p>press tab</p>
    <code>ls /usr/</code>
  </div>
</div>

---

# Linux Directories
Directories and paths

Linux works on **files** and **directories**, and everything can be found under the **root** directories.
<p>Files can be referenced using <b>paths</b></p>
<ul>
  <li>absolute path - /usr/lib/libc.so</li>
  <li>relative path - ./file.txt, ../../file.txt</li>
</ul>

<div class="grid grid-cols-2">
  <div>
    <p>Important Directories</p>
    <p>/usr/bin - system executable</p>
    <p>/usr/lib - system libraryies</p>
    <p>/tmp/ - temporary files</p>
    <p>/home/ - user home directories</p>
    <p>/proc/ - files about running processes</p>
  </div>
  <div>
    <p>Using Paths as Arguments</p>
    <code>ls /usr/bin/</code>
    <p>list files in /usr/bin</p>
    <code>ls ./file</code>
    <p>list file in current directory</p>
    <code>ls ../dir</code>
    <p>list dir in parent's directory</p>
  </div>
</div>

---

# Chaning directories
cd

The command `cd` can be used to change directories

`cd /usr/bin`
Go to /usr/bin

`cd ..`
Go to the parent directory

`cd ../home`
Go to the home directory in the parent directory

`cd runner/`
Go to the runner directory

---

# File Types
files types

Linux works on files, and there are a lot of differen file types.

excutable files:
`file /usr/bin/bash`

ascii texts:
`file ./slides.md`

---

# Challenges

[comand line challenge](https://cmdchallenge.com/)

[commands reference 1](https://www.hostinger.com/tutorials/linux-commands)

[commands reference 2](https://linuxconfig.org/linux-commands-cheat-sheet)

---


# References
Sources

## Slidev
https://sli.dev/

## Shell Piping
https://www.geeksforgeeks.org/piping-in-unix-or-linux/
