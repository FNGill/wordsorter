#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

// WELCOME MESSAGE
 puts(" ####### Welcome to WORDSORTER ####### \n" 
   "Given any number of files on the cmd line, Wordsorter should extract all words and sort them as requested:\n"
   "\tUsage:\n\t <filename> -c <n> to print only the first n results of the sorted list of words\n"
   "\t  -r to sort in reverse order\n"
   "\t  -n to sort the words numerically\n"
   "\t  -l to sort the words by length\n"
   "\t  -s to sort the words by their score in Scrabble\n"
   "\t  -a to sort the program lexicographically by ASCII (also the default function with no flags\n"
   "\t  -u to print only unique words\n"
   "\t  -h for help\n");
}