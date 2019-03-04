#include "henrik.h"

void structTester(){


	
}



void stringTester(){
	char word[] = "Hello mars";
	printf("This is a string: %s\n",word);
	
	int length = sizeof(word)/sizeof(char);

	printf("Length of word*: %d\n", length);

	for(int i = 0; i<(length-1); i++){
		printf("This is a letter: %c\n",word[i]);
	}

}


void length(int *arr){
	
	printf("Testing, = %d\n",arr[3]);


}


void just_printing(){
	printf("Will this work, I wonder?\n");
	printf("yea maaan\n");
}


