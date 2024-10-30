/*--------------------------------------------
* This program will sort the user into a 
* Hogwarts House.
* Class: CS 107, Fall 2024
* Author: Aditi Roddom
* Date: September 23, 2024
--------------------------------------------- */
#include <stdio.h>

int main() {
   
   //Initializing 3 string variables which will 
   //store the choice the user makes for each of
   //the three questions.
   char choice1;
   char choice2;
   char choice3;
   
   //Initializing 4 integar variables that will
   //store points for each Hogwarts House.
   int g = 0;
   int h = 0;
   int r = 0;
   int s = 0;
   
   //Initializing integar variable that stores
   // the max score out of all of the houses.
   int maxScore;
   
   //Initializing integar variable that will
   // hold the user's birthday date.
   int date;

   //Quiz Title
   printf("Welcome to the Hogwarts House Sorting Quiz\n\n");
   
   //Question 1
   printf("Question 1:\n");
   printf("You have a decision to make. How do you make your decision?\n");
   printf("a. After briefly weighing all options, I go with my gut and choose the answer that intuitively feels right to me in the moment.\n");
   printf("b. I analyze each of the options carefully and pick the one that will have the best outcome or have the fewest drawbacks.\n");
   
   printf("\n");
   
   //User inputs answer for Question 1
   scanf("%c",&choice1);
   //If the user inputs 'a' then Gryffindor and Hufflepuff will add 4 to itself.
   if(choice1 == 'a'){
      g+=4;
      h+=4;
   }
   
   //If the user inputs 'b' then Slytherin and Ravenclaw will add 4 to itself.
   else if (choice1 == 'b'){
      s+=4;
      r+=4;
   }
   
   //If an invalid response is inputted the program will exit.
   else{
      printf("Invalid response. House sorting cannot be completed.\n");
      printf("\n");
      return 1;
   }
   
   
   //Question 2
   printf("Question 2:\n");
   printf("You walk into a room to find someone berating your best friend, when your friend didn't do anything wrong! The person yelling at your friend has been unkind to you and your friend in the past. The two people are angry, but leave the room through separate doors. Who is the FIRST person you follow?\n");
   printf("a. My friend\n");
   printf("b. The unkind person\n");
   
   printf("\n");
   
   //User inputs answer for Question 2
   scanf(" %c", &choice2);
   //If the user inputs 'a' then Ravenclaw and Hufflepuff will add 4 to itself.
   if(choice2 == 'a'){
      r+=4;
      h+=4;
   }
   //If the user inputs 'b' then Gryffindor and Slytherin will add 4 to itself.
   else if (choice2 == 'b'){
      g+=4;
      s+=4;
   }
   //If an invalid response is inputted the program will exit.
   else{
      printf("Invalid response. House sorting cannot be completed.\n");
      printf("\n");
      return 1;
   }
   
   // If any of the house scores equal 8 then the user gets a preliminary house match.
   if(g == 8){
      printf("After two questions, your preliminary house match is Gryffindor!\n");
      printf("\n");
   }
   else if (h ==8){
      printf("After two questions, your preliminary house match is Hufflepuff!\n");
      printf("\n");
   }
   else if (r == 8) {
      printf("After two questions, your preliminary house match is Ravenclaw!\n");
      printf("\n");
   }
   else if (s == 8) {
      printf("After two questions, your preliminary house match is Slytherin!\n");
      printf("\n");
   }
   
   //Question 3
   printf("Question 3:\n");
   printf("Which of the following animals fits your personality best?\n");
   printf("a. lion\n");
   printf("b. eagle\n");
   printf("c. snake\n");
   printf("d. badger\n");
   
   printf("\n");
   
   //User inputs answer for Question 3
   scanf(" %c",&choice3);
   //If the user inputs 'a' then Gryffindor will add 7 to itself.
   if(choice3 == 'a'){
      g+=7;
   }
   //If the user inputs 'b' then Ravenclaw will add 7 to itself.
   else if (choice3 == 'b'){
      r+=7;
   }
   //If the user inputs 'c' then Slytherin will add 7 to itself.
   else if (choice3 == 'c'){
      s+=7;
   }
   //If the user inputs 'd' then Hufflepuff will add 7 to itself.
   else if (choice3 == 'd'){
      h+=7;
   }
   //If an invalid response is inputted the program will exit.
   else{
      printf("Invalid response. House sorting cannot be completed.\n");
      printf("\n");
      return 1;
   }

   //Question 4
   printf("Questions 4:\n");
   printf("What is your birthdate? (e.g. if you were born on October 14th, then enter 14; if your birthday is April 27th, then enter 27; etc.)\n");
   
   printf("\n");
   //User inputs answer for Question 4
   scanf("%d",&date);
   
   //If an invalid date is inputted the program will exit.
   if(!((date >= 1) && (date <= 31))){
      printf("Invalid response. House sorting cannot be completed.\n");
      printf("\n");
      return 1;
   }
   
   //If the date/4 equals a remainder of 1 it adds 5 to Gryffindor.
   if(date%4 == 1){
      g+=5;
   }
   //If the date/4 equals a remainder of 2 it adds 5 to Hufflepuff.
   else if (date%4 == 2){
      h+=5;
   }
   //If the date/4 equals a remainder of 3 it adds 5 to Ravenclaw.
   else if (date%4 == 3){
      r+=5;
   }
   //If the date/4 equals a remainder of 4 it adds 5 to Slytherin.
   else if(date%4 == 4 || date == 28 || date == 16){
      s+=5;
   }
   
   //Whichever house has the greatest score that will be the house the user
   // is sorted in.The maxscore variable will equal the house score. 
   if ((g >= h) && (g >= r) && (g >=s)){
      maxScore = g;
      printf("You have been sorted into Gryffindor!\n");
   }
   else if ((h >= g) && (h >= r) && (h >=s)){
      maxScore = h;
      printf("You have been sorted into Hufflepuff!\n");
   }
   else if ((r >= g) && (r >= h) && (r >=s)){
      maxScore = r;
      printf("You have been sorted into Ravenclaw!\n");
   }
   else if ((s >= g) && (s >= r) && (s >=h)){
      maxScore = s;
      printf("You have been sorted into Slytherin!\n");
   }
   
   //The program will print out the score and if it is a perfect, close or moderate match.
   if(maxScore == 20){
      printf("Your match score is 20, which is a perfect match.\n");
      printf("\n");
      
   }
   else if((maxScore >=13) && (maxScore <= 19)){
      printf("Your match score is %d, which is a close match.\n",maxScore);
      printf("\n");
   }
   else if((maxScore >=8) && (maxScore <= 12)){
      printf("Your match score is %d, which is a moderate match.\n",maxScore);
      printf("\n");
   }
   
   
   return 0;
}
