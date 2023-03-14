0-The script "0-alias" creates an alias named "ls" which is set to execute the command "rm *" when called. This means that when the user types "ls" in the terminal, it will actually execute the command "rm *" and delete all files in the current directory. The script can be sourced using the "source" command, which makes the alias available for use in the current shell session.

1-hello_you: This script prints "hello" followed by the current Linux user. It determines the current user by executing the id command and parsing the output. The script is executed by running ./1-hello_you.

2-path: This script adds the /action directory to the end of the PATH environment variable. The script is executed by sourcing the script using the command source ./2-path or . ./2-path.

3-paths: This script counts the number of directories in the PATH environment variable. It does this by splitting the PATH variable into directories using the : character as a delimiter and counting the number of resulting strings. The script is executed by running . ./3-paths.

4-global_variables: This script lists all environment variables defined in the current shell session. It is executed by sourcing the script using the command source ./4-global_variables or . ./4-global_variables.

5-local_variables: This script lists all local variables, environment variables, and functions defined in the current shell session. It is executed by running . ./5-local_variables.

6-Local variable: This script creates a new local variable named "BEST" and assigns the value "School" to it.

7-Global variable: This script creates a new global variable named "BEST" and assigns the value "School" to it.

8-Every addition to true knowledge is an addition to human power: This script prints the result of adding 128 to the value stored in the environment variable "TRUEKNOWLEDGE", followed by a new line.

9-Divide and rule: This script prints the result of dividing the value stored in the environment variable "POWER" by the value stored in the environment variable "DIVIDE", followed by a new line.

10-Love is anterior to life, posterior to death, initial of creation, and the exponent of breath: This script displays the result of raising the value stored in the environment variable "BREATH" to the power of the value stored in the environment variable "LOVE", followed by a new line.

11-There are 10 types of people in the world -- Those who understand binary, and those who don't: This script converts the number stored in the environment variable "BINARY" from base 2 to base 10 and displays the result, followed by a new line.

12-Combination: This script prints all possible combinations of two letters, except "oo", in alpha order, starting with "aa". One combination is printed per line.

13-Floats: This script prints the value stored in the environment variable "NUM" with two decimal places, followed by a new line.


