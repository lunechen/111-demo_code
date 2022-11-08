#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct gameSets{    // basic setting
    int timeRound;
    int costFactor;
    int tasteFactor;
    int numArea;
};

struct gameVars{    // game variables
    int earnGame, earnDay;
    int speed, price;
    int costSpeed, costTaste;
    int selling;
    int atArea;
};

// all print message
void printChoice(char *situation, struct gameVars vars);
void printAction(char *situation, struct gameVars vars);
void printInvalid(char *situation);
void printMessage(char *situation, struct gameVars vars);

// game procedure
void gameInitial(struct gameSets *setting, struct gameVars *vars);
void areaEach(struct gameSets setting, struct gameVars *vars);
void dayEach(struct gameSets setting, struct gameVars *vars);

// input
int input(char *situation, struct gameVars vars);
int inputValidate(char *situation, int selection);



int main(){
    int go_on = 1;
	struct gameSets setting;
    struct gameVars vars;
	
    // initial setting
    gameInitial(&setting, &vars);

    //start
    printMessage("gameStart", vars);
	while(go_on == 1){
        dayEach(setting, &vars);
        go_on = input("game", vars);
	}

    //end
	printMessage("gameEnd", vars); 
	return 0;
}



void gameInitial(struct gameSets *setting, struct gameVars *vars){
    // setting initial
    setting -> timeRound = 180;
    setting -> costFactor = 2;
    setting -> tasteFactor = 10;
    setting -> numArea = 4;

    // variable initial
    vars -> earnDay = 0;
    vars -> earnGame = 100;
    vars -> speed = 15;
    vars -> price = 30;
    vars -> costSpeed = 50;
    vars -> costTaste = 100;
    vars -> selling = 0;
    vars -> atArea = 0;
}
void dayEach(struct gameSets setting, struct gameVars *vars){
    int numArea = setting.numArea;

    printMessage("dayStart", *vars);
    vars -> earnDay = 0;

    // each day
    for (int i = 0; i < numArea; i++){
        vars -> atArea = i + 1;
        areaEach(setting, vars);
    }

    printMessage("dayEnd", *vars);
}
void areaEach(struct gameSets setting, struct gameVars *vars){
    int areaIdx = vars -> atArea;
    int timeRound = setting.timeRound;
    int speed = vars -> speed;
    int price = vars -> price;
    int earnGame = vars -> earnGame;
    int selling = timeRound / speed;
    int costSpeed = vars -> costSpeed;
    int costTaste = vars -> costTaste;
    int costFactor = setting.costFactor;
    int tasteFactor = setting.tasteFactor;
    int selection;

    // action
    printMessage("areaStart", *vars);
    vars -> selling = selling;
    selection = input("area", *vars);

    // result
    if ((selection == 2 && earnGame < costSpeed) || (selection == 3 && earnGame < costTaste)){
        printInvalid("moneyLack");
        selection = 1;
    }
    if (selection == 2 && speed == 1){
        printInvalid("speedLimit");
        selection = 1;
    }
    if (selection == 1){
        printAction("sellHotdog", *vars);
        vars -> earnDay += selling * price;
        vars -> earnGame += selling * price;
    }
    else if (selection == 2){
        printAction("speedUpgrade", *vars);
        vars -> speed--;
        vars -> earnGame -= costSpeed;
        vars -> costSpeed *= costFactor;
    }
    else if (selection == 3){
        printAction("tasteUpgrade", *vars);
        vars -> price += tasteFactor;
        vars -> earnGame -= costTaste;
        vars -> costTaste *= costFactor;
    }
}

int input(char *situation, struct gameVars vars){
    int selection;
    while(1){   // until valid
        printChoice(situation, vars);
        scanf("%d", &selection);
        if (inputValidate(situation, selection)) return selection;
        printInvalid("inputLimit");
    }
}
int inputValidate(char *situation, int selection){
    if (strcmp("area", situation) == 0){
        if (selection >= 1 && selection <= 3) return 1;
    }
    if (strcmp("game", situation) == 0){
        if (selection >= 1 && selection <= 2) return 1;
    }
    return 0;
}


void printChoice(char *situation, struct gameVars vars){
    if (strcmp("area", situation) == 0){
        printf("Please choose which action you want to take:\n");
        printf("  [1] Sell the hotdogs (+ $%d)\n", vars.selling * vars.price);
        printf("  [2] Improve your cooking speed (- $%d / - 1 min for making a hotdog)\n", vars.costSpeed);
        printf("  [3] Improve your hotdog flavor (- $%d / + $10 for each hotdog)\n", vars.costTaste);
    }
    if (strcmp("game", situation) == 0){
        printf("Do you want to continue or exit?\n");
        printf("  [1] Continue\n");
        printf("  [2] Exit\n");
    }
    printf("Enter the number: ");
}
void printAction(char *situation, struct gameVars vars){
    if (strcmp("sellHotdog", situation) == 0){
        printf("You make %d hotdogs here!\n", vars.selling);
        printf("You earn $%d!\n", vars.selling * vars.price);
    }
    if (strcmp("speedUpgrade", situation) == 0){
        printf("You glimpse the secret of wind.\n");
		printf("Your hands can move faster now.\n");
    }
    if (strcmp("tasteUpgrade", situation) == 0){
        printf("You feel the soul of the ingredients.\n");
		printf("Your hotdogs are more appetizing now.\n");
    }
}
void printInvalid(char *situation){
    if (strcmp("moneyLack", situation) == 0){
        printf("Can't you tell how poor you are?\n");
        printf("Go vending your hotdogs instead of thinking about self-improvement!\n");
    }
    if (strcmp("speedLimit", situation) == 0){
        printf("Do you want to travel through time?\n");
        printf("GO WORK!!\n");
    }
    if (strcmp("inputLimit", situation) == 0){
        printf("Invalid input!!!!\n");
    }
}
void printMessage(char *situation, struct gameVars vars){
    if (strcmp("gameStart", situation) == 0){
        printf("Welcome, young boss!\n");
    }
    if (strcmp("dayStart", situation) == 0){
        printf("Chop chop, It's dawn.\n");
    }
    if (strcmp("areaStart", situation) == 0){
        printf("You are at Area %d.\n", vars.atArea);
        printf("You have %d dollars.\n", vars.earnGame);
        printf("You need %d minutes to make a hotdog.\n", vars.speed);
        printf("The price of a hotdog is $%d.\n", vars.price);
    }
    if (strcmp("dayEnd", situation) == 0){
        printf("Well done, you earn $%d today.\n", vars.earnDay);
    }
    if (strcmp("gameEnd", situation) == 0){
	    printf("We will miss you. Bye!");
    }
}
