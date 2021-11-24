#include<stdio.h>

#define CANDIDATE_COUNT
// candidate names 


#define CANDIDATE1 "pruthvi"
#define CANDIDATE2 "shikar"
#define CANDIDATE3 "lakshmi sai"
#define CANDIDATE4 "kohli"
#define CANDIDATE5  "NARENDRA"
#define CANDIDATE6  "siva"

//start count =0;


int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, votesCount5=0, votesCount6=0 , spoiledtvotes=0;

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", CANDIDATE5);
printf("\n 6. %s", CANDIDATE6);
printf("\n 7. %s", "None of These");

printf("\n\n Input your choice (1 - 6):");
scanf("%d",&choice);

//counting operation

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: votesCount5++; break;
    case 6: votesCount6++; break;
    case 7: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

//initialising vote count 

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", CANDIDATE5, votesCount5);
printf("\n %s - %d ", CANDIDATE6, votesCount6);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

//main operation

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1 > votesCount2 && votesCount1 > votesCount3 && votesCount1 > votesCount4 && votesCount1 > votesCount5 && votesCount1 > votesCount6)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount1 && votesCount2 > votesCount5 && votesCount2 > votesCount6)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3 > votesCount4 && votesCount3 > votesCount2 && votesCount3 > votesCount1 && votesCount3 > votesCount5 && votesCount3 > votesCount6)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4 > votesCount1 && votesCount4 > votesCount2 && votesCount4 > votesCount3 && votesCount4 > votesCount5 && votesCount4 > votesCount6)
    printf("[%s]",CANDIDATE4);
    else if(votesCount5 > votesCount1 && votesCount5 > votesCount2 && votesCount5 > votesCount3 && votesCount5 > votesCount4 && votesCount5 > votesCount6)
    printf("[%s]",CANDIDATE5);
    else if(votesCount6 > votesCount1 && votesCount6 > votesCount2 && votesCount6 > votesCount3 && votesCount6 > votesCount4 && votesCount6 > votesCount5)
    printf("[%s]",CANDIDATE6);
    else
    printf("----- Warning !!! No-win situation----"); 
	}

int main()
{
int i;
int choice;

//screen console

do{
printf("\n\n ###### Welcome to Election/Voting 2021 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

getchar();

return 0;
}
