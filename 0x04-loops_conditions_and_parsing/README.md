# alx-system_engineering-devops
This repository contains Bash scripts for the 0x04-loops_conditions_and_parsing project.

## Task 0: Create a SSH RSA key pair
To set up your own servers hosted on remote data centers, you need to create an RSA key pair.

- Read the task description for instructions on how to generate the RSA key pair.
- Store your RSA public key in the file [0-RSA_public_key.pub](0x04-loops_conditions_and_parsing/0-RSA_public_key.pub).
- Remember to fill the SSH public key field of your intranet profile with the generated public key.
- Keep the private key safe in a secure location, as you will use it later to connect to your servers using SSH. Consider using storage options like Dropbox, Google Drive, password manager, or USB key. Make sure to save any passphrase you add to your key securely as well.

## Task 1: For Best School loop
This Bash script [1-for_best_school](0x04-loops_conditions_and_parsing/1-for_best_school) displays "Best School" ten times using a for loop.

## Task 2: While Best School loop
This Bash script [2-while_best_school](0x04-loops_conditions_and_parsing/2-while_best_school) displays "Best School" ten times using a while loop.

## Task 3: Until Best School loop
This Bash script [3-until_best_school](0x04-loops_conditions_and_parsing/3-until_best_school) displays "Best School" ten times using an until loop.

## Task 4: If 9, say Hi!
This Bash script [4-if_9_say_hi](0x04-loops_conditions_and_parsing/4-if_9_say_hi) displays "Best School" ten times, but for the 9th iteration, it displays "Hi" on a new line.

## Task 5: 4 bad luck, 8 is your chance
This Bash script [5-4_bad_luck_8_is_your_chance](0x04-loops_conditions_and_parsing/5-4_bad_luck_8_is_your_chance) loops from 1 to 10 and displays "bad luck" on the 4th loop iteration, "good luck" on the 8th loop iteration, and "Best School" for the other iterations.

## Task 6: Superstitious numbers
This Bash script [6-superstitious_numbers](0x04-loops_conditions_and_parsing/6-superstitious_numbers) displays numbers from 1 to 20 and shows specific messages for the 4th, 9th, and 17th loop iterations.

## Task 7: Clock
This Bash script [7-clock](0x04-loops_conditions_and_parsing/7-clock) displays the time in a 12-hour format with hours ranging from 0 to 12 and minutes ranging from 1 to 59 using a while loop.

## Task 8: For ls
This Bash script [8-for_ls](0x04-loops_conditions_and_parsing/8-for_ls) displays the content of the current directory in a list format. It only displays the part of the name after the first dash in each filename.

## Task 9: To file, or not to file
This Bash script [9-to_file_or_not_to_file](0x04-loops_conditions_and_parsing/9-to_file_or_not_to_file) checks for the existence of a file named "school" and provides information about it. It indicates whether the file exists, if it's empty, and if it's a regular file.

## Task 10: FizzBuzz
This Bash script [10-fizzbuzz](0x04-loops_conditions_and_parsing/10-fizzbuzz) displays numbers from 1 to 100 with specific conditions. It displays "FizzBuzz" for numbers that are multiples of both 3 and 5, "Fizz" for multiples of 3, "Buzz" for multiples of 5, and the number itself for other cases.

## Task 11: Read and cut
This Bash script [100-read_and_cut](0x04-loops_conditions_and_parsing/100-read_and_cut) displays the content of the file /etc/passwd. It only displays the username, user id, and home directory path for each user.

## Task 12: Tell the story of passwd
This Bash script [101-tell_the_story_of_passwd](0x04-loops_conditions_and_parsing/101-tell_the_story_of_passwd) tells a story based on the content of the file /etc/passwd. It displays information about each user in a specific format.

## Task 13: Let's parse Apache logs
This Bash script [102-lets_parse_apache_logs](0x04-loops_conditions_and_parsing/102-lets_parse_apache_logs) parses the Apache log access file and displays the visitor IP along with the HTTP status code.

## Task 14: Dig the data
This Bash script [103-dig_the-data](0x04-loops_conditions_and_parsing/103-dig_the-data) groups visitors by IP and HTTP status code, displaying the number of occurrences for each combination. The data is ordered from the greatest to the lowest number of occurrences.

