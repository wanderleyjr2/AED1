#include <stdio.h>
#define stack_max 100
#include <stdbool.h>

int tp= -1;
int stack[stack_max];

bool stk_empty(){
    return tp == -1;
}

int stk_push(int i){
    if(tp +1 < stack_max){
        tp++;
        stack[tp] = i;
    return 1; 
}
return 0;
}

int stk_pop(int *i){
    if(!stk_empty()){
        *i = stack[tp];
        tp--;
    return 1;
    }
return 0;
}

int stk_top(int *i){
    if(!stk_empty()){
        *i = stack[tp];
    return 1;
    }
return 0;
}

int main() {
    valid

    
    return 0;
}