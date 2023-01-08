
#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> //for memcpy

//Regular swap fuction for int 
void int_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int regular_swap_main()
{
    int a = 10, b = 20;
    printf("A = %d B = %d \n",a,b);
    int_swap(&a, &b);
    printf("A = %d B = %d \n",a,b);
    return 0;
}


// You are never supposed to derefrence the void* because its not aware of pointer arithmetic(no size info is available) unless you tell it
void swap(void* vp1, void* vp2, int elem_size) {
    char* buffer = (char*) malloc(sizeof(char)*elem_size);
    memcpy(buffer, vp1, elem_size);
    memcpy(vp1, vp2, elem_size);
    memcpy(vp2, buffer, elem_size);
    free(buffer);
}

// To test various different data types
int generic_main() {
    float a = 10.45, b = 20.08;
    printf("A = %f B = %f \n",a,b);
    swap(&a, &b, sizeof(float));
    printf("A = %f B = %f \n",a,b);
    return 0;
}

// How to swap a sting using a generic swap
int sting_main() {
    char* husband = _strdup("chandan");
    char* wife = _strdup("jagruti");
    // This does not work
    //printf("husband = %s , wife = %s \n", husband, wife);
    //swap(&husband, &wife, sizeof(*char));
    //printf("husband = %s , wife = %s \n", husband, wife);

    // Do not try to copy the contents of the char* (ie strings) just swap the pointers pointing
    printf("husband = %s , wife = %s \n", husband, wife);
    swap(&husband, &wife, sizeof(char*));
    printf("husband = %s , wife = %s \n", husband, wife);
    return 0;
}

int main() {
    
    return 0;
}


























