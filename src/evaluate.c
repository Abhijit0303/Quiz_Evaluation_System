#include "struct.h"
#include "output_csv.c"
//#include "main.c"

int evaluate(FILE *questionPaper,FILE *answerSheet)
{
	struct question_paper questions[MAX_SIZE];
    struct answer_sheet ans[MAX_SIZE];
    int count = 0;
    int total_marks;
    int scored_marks = 0, invalid_ans = 0;
    int i = 0;
    int found;

    for(; count < sizeof(questions)/sizeof(questions[0]); ++count) 
    {
       	found = fscanf(questionPaper, "%d,%d,%d", &questions[count].question_id, &questions[count].num_of_option, &questions[count].correct_ans);
        if (found != 3) break;
    }

    fclose(questionPaper);
    total_marks = count;
    
    count = 0;
    for(; count < sizeof(ans)/sizeof(ans[0]); ++count)
    {
        found = fscanf(answerSheet, "%[^,],%d,%d", ans[count].participant_name, &ans[count].question_id, &ans[count].option_chosen);
        if (found != 3) break;
    }
    fclose(answerSheet);

    for (; i < count; i++)
    {
        if(questions[i].correct_ans == ans[i].option_chosen) {
            scored_marks += 1;
        }
        if(ans[i].option_chosen > questions[i].num_of_option) {
            invalid_ans += 1;
        }
    }
	//printf("DONE");    
    
    char* name=ans[0].participant_name;
    output_csv(name,total_marks,scored_marks,invalid_ans);

    return 0;
}
