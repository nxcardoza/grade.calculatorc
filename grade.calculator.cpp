#include <stdio.h>
//Cardoza, Nick Gabriel B.
//BSIS - 1

main(){
	int inputQuiz;
	int inputExam;
	int calculateFinalGrade;
	
	//Input Score Function
	printf("Enter Quiz Score(1-100):");
	scanf("%d", &inputQuiz);
	
	printf("Enter Exam Score(1-100):");
	scanf("%d", &inputExam);
	
	//Calculate Final Grade Function
	calculateFinalGrade = (inputQuiz * 0.4) + (inputExam * 0.6);
	
	//Display Report Function
	 printf("\nThe Grades are in!\n");
 printf("Quiz Score: %d\n", inputQuiz);
	 printf("Exam Score: %d\n", inputExam);
	 printf("Final Grade: %d\n", calculateFinalGrade);
		
	//Get Letter Grade Function
		if (calculateFinalGrade > 90 ){
		printf("Letter Grade: A\n");
	}
		else if (calculateFinalGrade > 80 && calculateFinalGrade <= 89){
		printf("Letter Grade: B\n");
	}
		else if (calculateFinalGrade > 70 && calculateFinalGrade <= 79){
		printf("Letter Grade: C\n");
	}
		else if (calculateFinalGrade > 60 && calculateFinalGrade <= 69){
		printf("Letter Grade: D\n");
	}
		else{
		printf("Letter Grade: F\n");
	}
			
	return 0;
}
