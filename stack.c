#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stack *init_stack(int sz){
	stack  *s = (stack *)malloc(sizeof(stack));
	if(s == NULL){
		fprintf(stderr, "OOM");
		return NULL;
	}
	s -> size = sz;
	s -> crt = 0;
	s -> arr = (int *)malloc(sz * sizeof(int));
	if (s-> arr == NULL){
		free(s);
		fprintf(stderr, "OOM");
		return NULL;
	}
	return s;
}

void remove_stack(stack *s){
	if(s != NULL){
		if(s -> arr != NULL){
			free(s->arr);
		}
		free(s);
	}
	s = NULL;
}
