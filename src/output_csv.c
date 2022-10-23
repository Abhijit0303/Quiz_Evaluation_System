#include "struct.h"
//#include "logic.c"

int output_csv(char* name,int total_marks,int scored_marks,int invalid_ans){
	FILE *output;

	if(fopen("../files/output.csv", "r") == NULL)
	{
		output = fopen("../files/output.csv", "w+");
		fprintf(output, "Participant_name, Total_marks, scored_marks, invalid_answers\n");
		fprintf(output, "%s, %d, %d, %d\n", name, total_marks, scored_marks, invalid_ans); 
    }
	output = fopen("../files/output.csv", "a");
	fprintf(output, "%s, %d, %d, %d\n", name, total_marks, scored_marks, invalid_ans);
	fclose(output);

	//printf("Total Questions: %d\nCorrect Answers Selected: %d\nInvalid Answers: %d\n",total_marks, scored_marks, invalid_ans);

	return 0;
}
