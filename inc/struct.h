#ifndef STRUCT_H
#define STRUCT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 100

struct question_paper{
    int question_id;
    int num_of_option;
    int correct_ans;
};

struct answer_sheet{
    char participant_name[50];
    int question_id;
    int option_chosen;
};

//Declaration of functions

int evaluate(FILE *, FILE *);
int output_csv(char*, int, int, int);

#endif