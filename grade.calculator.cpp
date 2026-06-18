#include <stdio.h>
//Cardoza, Nick Gabriel B.
//BSIS - 1

main(){
	int quiz;
	int exam;
	int weight;
	
	//Input Score Function
	printf("Enter Quiz Score(1-100):");
	scanf("%d", &quiz);
	
	printf("Enter Exam Score(1-100): ");
	scanf("%d", &exam);
	
	//Calculate Final Grade Function
	weight = (quiz * 0.4) + (exam * 0.6);
	
	//Display Report Function
	 printf("\nThe Grades are in!\n");
 printf("Quiz Score: %d\n", quiz);
	 printf("Exam Score: %d\n", exam);
	 printf("Final Grade: %d\n", weight);
		
	//Get Letter Grade Function
		if (weight > 90 ){
		printf("Letter Grade: A\n");
	}
		else if (weight > 80 && weight <= 89){
		printf("Letter Grade: B\n");
	}
		else if (weight > 70 && weight <= 79){
		printf("Letter Grade: C\n");
	}
		else if (weight > 60 && weight <= 69){
		printf("Letter Grade: D\n");
	}
		else{
		printf("Letter Grade: F\n");
	}
			
	return 0;
}
