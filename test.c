#include <stdio.h>
#include "stack.h"


int main(){
	
	stack *s = init_stack(10);
	if(s == NULL){
		fprintf(stdout, "Init test failed\n");
		return -1;
	}

	push(s,1);
	if(pop(s) != 1){
		fprintf(stdout, "Push/Pop test problem\n");
	}

	fprintf(stdout, "Init test passed\n");
	remove_stack(s);
	
	return 0;
}
