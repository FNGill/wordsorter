#### Requirements

When passed a -c <n> flag, the program prints only the first n results of the sorted list of words
When passed a -r flag, the program sorts in reverse order. Multiple -r flags toggle the order.
When passed a -n flag, the program sorts the words as if they were numeric.
When passed a -l flag, the program sorts the words by length of the word.
When passed a -s flag, the program sorts the words by their score in English Scrabble
When passed a -a flag, the program sorts the words lexicographically by ASCII code point.
When passed a -u flag, the program only prints unique words, no duplicates.
When passed a -h flag, the program prints a brief help message

With no specific flags, the program should sort the words as if a -a had been passed.

When passed multiple flags, the program should generally apply all of them to the results.

If passed a combo of -a, -n, -s, and -l the order of the results is the last flag in the cmd line.

