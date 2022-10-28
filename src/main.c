#include "qes.h"



int main(int argc, char *argv[]){
	if(argc == 3) {
		FILE *questionPaper = fopen(argv[1], "r");

    		FILE *answerSheet = fopen(argv[2], "r");
    
    		evaluate(questionPaper,answerSheet);

    		return 0;
	}

	return 1;    
}
