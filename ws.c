#include <stdio.h>
#include <stdlib.h>

/* 
No program exists for sorting words within a file. Write such a program.
Given any number of files on the command line, the program should extract all words 
(delimited by whitespace) from the file, and print them to stdout, sorted lexicographically, one word per line.
With no arguments, it should read from stdin. No other output during normal operation is permitted.
*/

/* Function to open file and extract words delimited by whitespace*/
// TODO:: use enum instead of define
#define MAX_SIZE 1064


 void ws(char *cmd_buff){
   char filename[MAX_SIZE];
    FILE *f = fopen(filename, "r");
    if(!f){
      perror("File not found\n");
      exit(EXIT_FAILURE);
    }
    // create array to store words
    char *word_array[MAX_SIZE][MAX_SIZE];

    // While loop with getline, strtok delimiting by whitespace and newline

   // scanf FIXME: maybe don't use sscanf....use fgets?
   if(sscanf(cmd_buff, "%s", filename) == 0){

   }
   

 }



 /* Function to print words*/
 void print_sorted(){
   // print array

 }
   

 /* Function to free memory */
 void cleanup(){
   // free stuff
 }

/* -r reverse function*/
void reverse(){
   // take array, add to new array starting from -1 and decrementing until end
   // return reverse array
}

/* - n numeric function*/
void numerical(){
   // what does this mean, how is it different from ASCII? -a ???
}

/* -l length function*/
void len(){
   // strlen and sort to sort words based on lenght from smallest to largest
}

/* -s Scrabble function*/
void scrabble(){
   // Create enum of letters and assign them scrabble values
   // add values for score
   // print words sorted with their scrabble score 
}

/* -u unique words function*/
void unique(){
   // Think of most efficient way to do this so array isn't iterated over a million times....
   // sort first, then strcmp and place word in unique array,do not add matches
}

/* -h Help function*/
void help(){
   puts(" ####### Implementation ####### \n" 
   "\tUsage:boi\n\t <filename> -c <n> to print only the first n results of the sorted list of words\n"
   "\t\t-r to sort in reverse order\n"
   "\t\t-n to sort the words numerically\n"
   "\t\t-l to sort the words by length (short to large by default, use -r to reverse)\n"
   "\t-s to sort the words by their score in Scrabble\n"
   "\t-a to sort the program lexicographically by ASCII (also the default function with no flags\n"
   "\t-u to print only unique words\n"
   "\t-h to reprint this impelemtation\n");
}