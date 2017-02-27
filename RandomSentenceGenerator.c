/*THIS PROGRAM DISPLAYS A NUMBER(X) OF RANDOM GENERATED SENTENSES(THEY DO NOT NECESSARILY MAKE SENSE)*/
/************************************ FINISHED ON 5-5-14 *********************************************/
/***************************THE SENTENCES GENERATED ARE SAVED TO DISK*********************************/
#include<stdio.h>
#include<time.h>

int main(){
int one , two , three , four , five , six , seven , eight , x , y , gen , gin;

FILE *savesentences; 
savesentences = fopen("Generated_Sentences.txt","w+"); 

struct word {
char wordo[14];
};
 
struct word oneword[20] = { "i" , "you" , "he" , "she" , "people" , "animals" , "dogs" , "cats" , "hamsters" , "rabbits" , "jesus" , "god" , "elephants" , "mice" , "turtles" , "cows" , "sheep" , "horses" , "spiders" , "snakes"};

struct word twoword[20] = { "drink" , "eat" , "sleep" , "look" , "fight" , "dance" , "stare" , "slide" , "bounce" , "fall" , "fly" , "cry" , "scream" , "shout" , "drive" , "cycle" , "walk" , "run" , "roll" , "read"};

struct word threeword[20] = { "like" , "horribly" , "fast" , "slowly" , "steadily" , "quickly" , "powerfully" , "amazingly" , "surprizingly" , "respectfully" , "casualy" , "responsively" , "horrificly" , "hysterically" , "joyfully" , "calmly" , "peacefully" , "dangerously" , "extremely" , "faithfully"};

struct word fourword[20] = { "potatoes" , "chips" , "vodka" , "coke" , "water" , "chrisps" , "apples" , "cheese" , "vine" , "pie" , "pork" , "lamb" , "soup" , "soap" , "sponge" , "cake" , "pancake" , "bun" , "nun" , "priest"};

struct word fiveword[10] = { "and" , "then" , "somehow" , "someway" , "before" , "later" , "after" , "previously" , "somewhere" , "just"};

struct word sixword[20] = { "lie" , "watch" , "sleep" , "look" , "fight" , "dance" , "stare" , "slide" , "bounce" , "fall" , "fly" , "cry" , "scream" , "shout" , "drive" , "cycle", "walk" , "run" , "roll" , "read"};

struct word sevenword[13] = { "on", "in" , "at" , "inside" , "into" , "at" , "outside" , "the" , "beside" , "next" , "over" , "under" , "behind"};

struct word eightword[20] = { "couch" , "sofa" , "fridge" , "table" , "chair" , "wardrobe" , "kitchen" , "fireplace" , "computer" , "terminal" , "windows" , "walls" , "doors" , "rooms" , "floor" , "roof" , "airplane" , "rocket" , "homer" , "car"};

printf("enter how many sentences you want to generate: ");
scanf("%d",&y);
for(x=0;x<y;x=x+1){	
/*for(x=0;x<10;x=x+1){*/     //use this if you dont want to run the program in the teminal.
				 //the only bad thing is i cant have any user input.	
if(x == 0){srandom((unsigned)time(NULL));
gen = random();}

if(x != 0){srandom((unsigned)gen);
gen = random();}

if(gen<1000){gen=gen * 12342;}

srandom((unsigned)gen);
one = random() % 20;
printf("%s ",oneword[one].wordo);
fprintf(savesentences,"%s ",oneword[one].wordo);

srandom(gen);
gen = random();

if(gen<1000){gen=gen * 78539;}

srandom((unsigned)gen);
two = random() % 20;
printf("%s ",twoword[two].wordo);
fprintf(savesentences,"%s ",twoword[two].wordo);

srandom(gen);
gin = random();

if(gin<1000){gin=gin * 42819;}

srandom((unsigned)gin);
three = random() % 20;
printf("%s ",threeword[three].wordo);
fprintf(savesentences,"%s ",threeword[three].wordo);

srandom(gin);
gin = random();

if(gin<1000){gin=gin * 53820;}

srandom((unsigned)gin);
four = random() % 20;
printf("%s ",fourword[four].wordo);
fprintf(savesentences,"%s ",fourword[four].wordo);

srandom(gen);
gin = random();

if(gen<1000){gen=gen * 73182;}

srandom((unsigned)gin);
five = random() % 10;
printf("%s ",fiveword[five].wordo);
fprintf(savesentences,"%s ",fiveword[five].wordo);

srandom(gin);
gen = random();

if(gen<1000){gen=gen * 49294;}

srandom((unsigned)gen);
six = random() % 20;
printf("%s ",sixword[six].wordo);
fprintf(savesentences,"%s ",sixword[six].wordo);

srandom(gen);
gin = random();

if(gin<1000){gin=gin * 62108;}

srandom((unsigned)gin);
seven = random() % 13;
printf("%s ",sevenword[seven].wordo);
fprintf(savesentences,"%s ",sevenword[seven].wordo);

srandom(gin);
gen = random();

if(gen<1000){gen=gen * 27545;}

srandom((unsigned)gen);
eight = random() % 20;
printf("%s \n",eightword[eight].wordo);
fprintf(savesentences,"%s \n",eightword[eight].wordo);
}                                                                                                          
fclose(savesentences);
return(0);
}
