# Palindrome Detector

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

AIM

  A palindrome is a phrase that reads the same forwards as it does backwards. For example, “a man, a plan, a canal, Panama,” is a palindrome. Write a program that uses a stack to check for palindromes in each line of a text file. Try your program on the example text file,
•	Your program should output the palindromes that it finds in the document. 
•	For example: "a man, a plan, a canal, Panama" is a palindrome.
•	"Don’t nod" is a palindrome. "Taco Cat!" is a palindrome.
(A Data Structures project implemented in C to check whether a given phrase is a palindrome.  
The program ignores case and non-alphabetic characters during comparison.)

ABSTRACT

The Palindrome Detector project aims to develop a program that identifies palindromic phrases within a text file using a stack-based approach. A palindrome is a sequence of characters that reads the same forwards and backwards, disregarding punctuation, spaces, and capitalization. The program will process each line of the text file, filter out unnecessary characters, and verify if the cleaned phrase maintains symmetry. Upon detection, it will output the palindromic phrases found in the document. This implementation demonstrates the use of data structures such as stacks to efficiently check for palindromes in textual data.

ALGORITHM 

    Step 1:  Start:
                            ->Begin the program.
    Step 2:  Input Phase:
                            -> Prompt the user to enter a phrase.
    Step 3:  Preprocessing Phase:
                           - >Initialize an empty string to store the preprocessed result.
                           - >For each character in the input string:
                           - >If the character is alphabetic (use isalpha()):
                           - >Convert it to lowercase (use tolower()).
                           -> Append the lowercase character to the preprocessed string.
                           - >After processing all characters, the preprocessed string only contains lowercase alphabets.
       Step 4:   Palindrome Check Phase:
                           -> Initialize two pointers: left starting at the beginning (index 0) and right starting 
                                at the last character (index length - 1) of the preprocessed string.
                           - >While left is less than right:
                           ->Compare the characters at positions left and right in the string.
                           -> If the characters do not match, return false (the string is not a palindrome).
                           ->Otherwise, increment left and decrement right to move towards the center of the string.
                           ->If all characters match until left is greater than or equal to right, return true 
                              (the string is a palindrome).
      Step 5:   Output Phase:
                           -> If the result of the palindrome check is true, print that the phrase is a palindrome.
                           ->Otherwise, print that the phrase is not a palindrome.
      Step 6:  End:
                           ->Terminate the program. 


ADVANTAGES
•	 Simple to Implement – Easy to write using basic string functions or stacks.
•	 Fast Execution – Can check palindromes in O(n) time.
•	 Useful in Text Processing – Helps in spell checking and data validation.
•	 Educational – Helps understand data structures like stacks and recursion.

DISADVANTAGES
•	 Limited Scope – Mostly used for text-based applications.
•	 Memory Usage (Stack Approach) – Extra space needed to store stack elements.
•	 Case Sensitivity & Special Characters – Requires preprocessing.
•	 Performance Issues – Might slow down for very long strings.

FUTURE IMPLEMENTATION

•	Support for Sentences & Special Characters – Extend detection to full sentences with spaces and punctuation.
•	Multilingual Palindrome Checking – Check palindromes in different languages.
•	DNA Sequence Analysis – Identify palindromic patterns in genetics.
•	AI-Powered Detection – Use machine learning to predict palindromic structures.
•	 Mobile Apps & Browser Extensions – Develop real-time palindrome checkers

## How to Run
```bash
gcc palindrome.c -o palindrome
./palindrome
