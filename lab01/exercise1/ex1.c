// Copyright 2023 10X Engineers JUNAID
#include <string.h>
#include <stdio.h>
#include "/home/user3/C Language/su21-lab-starter/lab01/exercise1/ex1.h"
/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
int counter = 0;

for (int i = 0 ; i < strlen(str) ; i++) {
    if ( str[i] == letter ) {
       counter = counter+1;
    }
  }

/* TODO: implement num_occurances */
return counter; }

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
  /* TODO: implement compute_nucleotide_occurances */
  dna_seq->A_count = 0;
  dna_seq->C_count = 0;
  dna_seq->G_count = 0;
  dna_seq->T_count = 0;

int length = strlen(dna_seq->sequence);
  for (int i = 0; i < length; i++) {
      if (dna_seq->sequence[i] == 'A') {
         dna_seq->A_count++;
      } else if (dna_seq->sequence[i] == 'C') {
         dna_seq->C_count++;
      } else if (dna_seq->sequence[i] == 'G') {
         dna_seq->G_count++;
      } else if (dna_seq->sequence[i] == 'T') {
         dna_seq->T_count++;
      }
    }
}
