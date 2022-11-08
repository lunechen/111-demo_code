#include <stdio.h>
#include <stdlib.h>

int main(){
	int game_eachRound = 180;
	int amount_money = 100, amount_earned = 0;
	int amount_speed = 15, amount_taste = 30;
	int amount_speedCost = 50, amount_tasteCost = 100;
	int amount_hotdog;
	int go_on = 1;
	int selection = 1;
	
	// initial message
	printf("Welcome, young boss!\n");

	// game start
	while(go_on == 1){

		// beginning of each day
		printf("Chop chop, It's dawn.\n");
		amount_earned = 0;

		// the four area
		for (int i = 1; i <= 4; i++){
			amount_hotdog = game_eachRound / amount_speed;
			printf("You are at Area %d.\n", i);
			printf("You have %d dollars.\n", amount_money);
			printf("You need %d minutes to make a hotdog.\n", amount_speed);
			printf("The price of a hotdog is $%d.\n", amount_taste);
			
			// input action
			while(1){
				printf("Please choose which action you want to take:\n");
				printf("  [1] Sell the hotdogs (+ $%d)\n", amount_hotdog * amount_taste);
				printf("  [2] Improve your cooking speed (- $%d / - 1 min for making a hotdog)\n", amount_speedCost);
				printf("  [3] Improve your hotdog flavor (- $%d / + $10 for each hotdog)\n", amount_tasteCost);
				printf("Enter the number: ");
				scanf("%d", &selection);

				// invalid
				if (selection >= 1 && selection <= 3) break;
				printf("Invalid input!!!!\n");
			}

			// different situation
			if ((selection == 2 && amount_money < amount_speedCost) || (selection == 3 && amount_money < amount_tasteCost)){
				printf("Can't you tell how poor you are?\n");
				printf("Go vending your hotdogs instead of thinking about self-improvement!\n");
				selection = 1;
			}
			if (selection == 2 && amount_speed == 1){
			    printf("Do you want to travel through time?\n");
			    printf("GO WORK!!\n");
			    selection = 1;
			}
			if (selection == 1){
				amount_earned += amount_hotdog * amount_taste;
				amount_money += amount_hotdog * amount_taste;
				printf("You make %d hotdogs here!\n", amount_hotdog);
				printf("You earn $%d!\n", amount_hotdog * amount_taste);
			}
			else if (selection == 2){
				printf("You glimpse the secret of wind.\n");
				printf("Your hands can move faster now.\n");
				amount_speed--;
				amount_money -= amount_speedCost;
				amount_speedCost *= 2;
			}
			else if (selection == 3){
				printf("You feel the soul of the ingredients.\n");
				printf("Your hotdogs are more appetizing now.\n");
				amount_taste += 10;
				amount_money -= amount_tasteCost;
				amount_tasteCost *= 2;
			}
		}

		// end of day
		printf("Well done, you earn $%d today.\n", amount_earned);

		// continue or not
		while(1){
			printf("Do you want to continue or exit?\n");
			printf("  [1] Continue\n");
			printf("  [2] Exit\n");
			printf("Enter the number: ");
			scanf("%d", &go_on);

			// invalid
			if (go_on == 1 || go_on == 2) break;
			printf("Invalid input!!!!\n");
		}
	}

	// end of game 
	printf("We will miss you. Bye!");
	return 0;
}