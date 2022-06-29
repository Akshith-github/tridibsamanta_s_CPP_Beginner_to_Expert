Do the following steps:

Open your terminal (or) command-line window.

Type the following command and then press ENTER

>sudo apt-get update

It will ask for the password. Type your sudo user password and press ENTER

Then type the following command and then press ENTER again.

>sudo apt-get install g++

This will install the g++ compiler in Ubuntu










------
After that the system want to restart? 

No need. After installation type the command 
>dpkg --list | grep compiler 

and then press ENTER. If g++ is installed successfully it will be shown on the compiler list. In case it does not show then restart the system and try again. 



The terminal shows something like ii gcc. 

>ii gcc-4.6 etc..


Yes, that's good then. g++ is installed successfully. 

