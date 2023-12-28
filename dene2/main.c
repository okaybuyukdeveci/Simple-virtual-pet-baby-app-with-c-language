#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int love;
int sociability;
int entertainment;
int sleep;
int health;
int hygiene;
int toilet;
int education;
int satiety;
int peace;

char *names[10] = {"satiety", "love", "toilet", "hygiene", "education","sleep","entertainment","sociability","health","peace"};
int levels[10] = {5,5,5,5,5,5,5,5,5,5};

void CheckIt(int *levels) {
  for(int i = 0; i < 10; i++) {
    if (levels[i] > 10) {
      levels[i] = 10;
    } else if (levels[i] < 0) {
      levels[i] = 0;
    }
  }
}
void BeingLovedbytheOwner(int *pnumbers){
    printf("I'm really happy now!!\n\n");

    pnumbers[1]=pnumbers[1]+3;
    pnumbers[6]=pnumbers[6]+2;
    pnumbers[9]=pnumbers[9]+2;

    for(int i=0;i<10;i++){
        if(i==8 || i==1){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}
void BeingLovedbyaStranger(int *pnumbers){
    printf("He looks like a good guy.\n\n");

    pnumbers[1]=pnumbers[1]+3;
    pnumbers[6]=pnumbers[6]+1;
    pnumbers[9]=pnumbers[9]+1;

    for(int i=0;i<10;i++){
        if(i==8 || i==1){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}

void BeingLovedbytheOppositeGender(int *pnumbers){
    printf("I think he liked me:)\n\n");

    pnumbers[1]=pnumbers[1]+3;
    pnumbers[6]=pnumbers[6]+2;
    pnumbers[7]=pnumbers[7]+2;
    pnumbers[9]=pnumbers[9]+3;


        for(int i=0;i<10;i++){
        if(i==8 || i==1){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}

void TimetoSleep(int *pnumbers) {

    if (pnumbers[5] < 10) {

    printf("Time to sleep for Talya!!\n");
    printf("Talya slept very well.\n");
    printf("I guees Talya is really hungry right now!!\n\n");
    pnumbers[5]=pnumbers[5]+3;
    pnumbers[0]=pnumbers[0]-2;
    pnumbers[2]=pnumbers[2]+2;

     TimetoSleep(pnumbers);
    }


    else
    {
    pnumbers[5]=10;
    }

CheckIt(levels);
}


void ForcetoWakeUp(int *pnumbers){
    printf("Why did you wake me up?\n\n");
    int sec7;

    printf("This sofa is not your bed!!\n");
    printf("1-Sleep with the owner\n2-sleep at the dog club\n3-Get into bed next to the fireplace\n");
    scanf("%d",&sec7);

switch(sec7){

case 1:
    printf("Ok I'm coming to you:(((\n.");

    break;

    case 2:
        printf("OK, I'm going to my club.\n");
    break;

    case 3:
        printf("Sleeping in a warm bed is good for me:)))\n");


    break;
    }
           pnumbers[5]= pnumbers[5]+2;
           pnumbers[9]=pnumbers[9]-2;

        for(int i=0;i<10;i++){
        if(i==8){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}

void TimetoTrip(int *pnumbers){
    printf("I think we are going a trip again.I'm already yawning...\n");
    pnumbers[3]=pnumbers[3]-2;
    pnumbers[6]=pnumbers[6]+2;
    pnumbers[7]=pnumbers[7]+2;
    pnumbers[5]=pnumbers[5]-1;
    pnumbers[9]=pnumbers[9]+1;

        for(int i=0;i<10;i++){
        if(i==8 || i==5){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);

}


void MealTime(int *pnumbers) {
    int choice, piece;
    char str[10];

    printf("Menu:\n");
    printf("1-Bone\n2-Wet food\n3-Eat from the trash\n\n");
    printf("Choose the food:");
    scanf("%d", &choice);

    printf("How many do you want to eat?");
    scanf("%s", str);

    piece = atoi(str);

    switch (choice) {
        case 1:
            pnumbers[0] = pnumbers[0] + (1 * piece);
            pnumbers[5] = pnumbers[5] + 2;
            pnumbers[2] = pnumbers[2] + 2;
            pnumbers[8] = pnumbers[8] + 2;

            printf("Talya ate the bone with pleasure.\n\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    pnumbers[i] = pnumbers[i];
                } else {
                    pnumbers[i] = pnumbers[i] - 1;
                }
            }

            break;

        case 2:
            pnumbers[0] = pnumbers[0] + (0.5 * piece);
            pnumbers[5] = pnumbers[5] + 1;
            pnumbers[2] = pnumbers[2] + 1;
            pnumbers[8] = pnumbers[8] + 1;
            printf("Talya ate the wet food with pleasure.\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    pnumbers[i] = pnumbers[i];
                } else {
                    pnumbers[i] = pnumbers[i] - 1;
                }
            }
            break;

        case 3:
            pnumbers[0] = pnumbers[0] + 1;
            pnumbers[5] = pnumbers[5] + 1;
            pnumbers[2] = pnumbers[2] + 2;
            pnumbers[8] = pnumbers[8] - 4;
            printf("Talya went through the garbage and ate something. I think she has something wrong with her stomach.\n\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    pnumbers[i] = pnumbers[i];
                } else {
                    pnumbers[i] = pnumbers[i] - 1;
                }
            }
            break;
    }
        CheckIt(levels);

}

void DrinkWater(int *pnumbers){
    printf("Ice cold water!! How good is this summer day\n\n");

    pnumbers[0]=pnumbers[0]+1;
    pnumbers[2]=pnumbers[2]+3;
    pnumbers[8]=pnumbers[8]+1;

        for(int i=0;i<10;i++){
        if(i==8 || i==0){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void TryingNewfood(int *pnumbers){
    int choice2;

    printf("I guess we are open to new and different tastes! But be careful, you are a little sensitive.\n");
    printf("What would you like to try?\n1-Pineapple\n2-Far East local dog food\n");
    scanf("%d",&choice2);

    switch(choice2){
case 1:
    printf("This is a great thing. Why didn't we try it before?\n\n");

    pnumbers[0]= pnumbers[0]+3;
    pnumbers[8]= pnumbers[8]+1;

    break;

case 2:
    printf("Oh my God, DISASTER. I think I'm going to vomit.\n");

    pnumbers[0]= pnumbers[0]-1;
    pnumbers[8]= pnumbers[8]-2;

    break;


    }

       for(int i=0;i<10;i++){
        if(i==8 || i==0){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }

    CheckIt(levels);
}

void GototheDogPark(int *pnumbers){

    int choice4;
    int choice5;
    int choice6;
    printf("1-COCO\n2-BUDDY\n3-BELLA\n");
    printf("Which friend would you like to play with?\n");
    scanf("%d",&choice4);

        switch(choice4){
            case 1:
                printf("Talya spends time with her best friend COCO.\n");
                pnumbers[1]=pnumbers[1]+3;
                pnumbers[7]=pnumbers[7]+4;
                pnumbers[6]=pnumbers[6]+3;
                pnumbers[5]=pnumbers[5]-1;
                pnumbers[9]=pnumbers[9]+2;
                break;

            case 2:
                printf("Talya spends time with the dog she likes.\nShe was very dressed up beforehand.\n");
                pnumbers[1]=pnumbers[1]+5;
                pnumbers[7]=pnumbers[7]+4;
                pnumbers[6]=pnumbers[6]+3;
                pnumbers[5]=pnumbers[5]-1;
                pnumbers[9]=pnumbers[9]+2;
                break;

            case 3:
                printf("Talya doesn't like Bella. Are you sure you want Talya to spend time with her?\n");
                printf("1-YES\n2-NO\n");
                scanf("%d",&choice5);

          if (choice5==1){
                printf("Talya is willing to spend time with Bella.\n");
                pnumbers[1]=pnumbers[1]+2;
                pnumbers[7]=pnumbers[7]+4;
                pnumbers[6]=pnumbers[6]+2;
                pnumbers[5]=pnumbers[5]-1;
          }
            else if(choice5==2){
                printf("Talya remembered that she didn't want to spend time with Bella.\n");
                printf("1-COCO\n2-BUDDY\n");
                printf("Which friend would you like to play with?\n");

                scanf("%d",&choice6);

                   if(choice6==1){
                    printf("Talya spends time with her best friend COCO.\n");
                    pnumbers[1]=pnumbers[1]+3;
                    pnumbers[7]=pnumbers[7]+4;
                    pnumbers[6]=pnumbers[6]+3;
                    pnumbers[5]=pnumbers[5]-1;
                    pnumbers[9]=pnumbers[9]+2;
                   }


                    else if(choice6==2) {
                    printf("Talya spends time with the dog she likes.\nShe was very dressed up beforehand.\n");
                    pnumbers[1]=pnumbers[1]+5;
                    pnumbers[7]=pnumbers[7]+4;
                    pnumbers[6]=pnumbers[6]+3;
                    pnumbers[5]=pnumbers[5]-1;
                    pnumbers[9]=pnumbers[9]+2;


                }}

    break;
    }



    for(int i=0;i<10;i++){
        if(i==8 || i==7){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);


}

void StayatHome(int *pnumbers){


    printf("I think today will be a boring day:(\n\n");
    pnumbers[7]=pnumbers[7]-3;
    pnumbers[6]=pnumbers[6]-1;
    pnumbers[5]=pnumbers[5]+2;
    pnumbers[9]=pnumbers[9]-3;

        for(int i=0;i<10;i++){
        if(i==8 || i==7){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}


void FallinLove(int *pnumbers){
    int choice7;
    printf("I think someone has fallen in love. Is there something you want to tell me?\n\n");
    printf("1-YES\n2-NO");
    scanf("%d",&choice7);
    switch(choice7){
case 1:
    printf("I think I've been caught. I may have had a bit of a crush on Buddy the other day we were playing in the park.\n");
     pnumbers[1]=pnumbers[1]+3;
      pnumbers[9]=pnumbers[9]+2;
    break;
case 2:
        printf("Unfortunately, I'm not in love with anyone. I'm trying, but it doesn't work. This might bother me a little. And I want chocolate.\n");
        pnumbers[1]=pnumbers[1]-2;
        pnumbers[9]=pnumbers[9]-2;
        pnumbers[0]=pnumbers[0]-2;

    break;

    }

        for(int i=0;i<10;i++){

        if(i==8 || i==7){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}

void GototheVet(int *pnumbers){
    printf("Are we going to doctor again?\n\n");
        pnumbers[3]=pnumbers[3]-2;
        pnumbers[8]=pnumbers[8]+3;
        pnumbers[9]=pnumbers[9]-2;

        for(int i=0;i<10;i++){


        if(i==8){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);

}

void toPunish(int *pnumbers){
    int choice8;

    printf("You are grounded.!!!\n");
    printf("1-You have made all the rooms mud, you are not allowed to enter the house today. You will stay in the garden.\n2-Why did you spill the food bowl? No food for you today!!\n");
    scanf("%d",&choice8);
    switch(choice8){
case 1:
    printf("Talya got sick because she stayed in the garden. She should drink the elixir quickly.\n");
    pnumbers[0]= pnumbers[0]-3;
    pnumbers[8]= pnumbers[8]-2;
    pnumbers[9]= pnumbers[9]-2;
    break;

case 2:
    printf("Talya is not feeling well because she is hungry. She needs to drink a quick satiety elixir.\n");
    pnumbers[0]= pnumbers[0]-2;
    pnumbers[8]= pnumbers[8]-3;
    pnumbers[9]= pnumbers[9]-2;


    break;
    }
        for(int i=0;i<10;i++){
        if(i==8){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);

}


 void ElixirofYouth(int *pnumbers){
     int Elixir;
        printf("I think I need some reinforcements.\n\n");
        printf("Which elixir do you want to drink?\n");
        printf("1-Health elixir\n2-Powerfull elixir\n3-Satiety elixir\n");
        scanf("%d",&Elixir);

        switch(Elixir){
        case 1:
        printf("The health elixir was drunk. Health, hygiene and peace levels were increased.\n");

        pnumbers[3]=10;
        pnumbers[8]=10;
        pnumbers[9]=10;

        break;

        case 2:
        printf("The powerfull elixir was drank. Health, hygiene, peace, satiety, love and sleep levels were increased. Toilet levels were reset.\n");
        pnumbers[0]=10;
        pnumbers[1]=10;
        pnumbers[2]=0;
        pnumbers[3]=10;
        pnumbers[4]=10;
        pnumbers[5]=10;
        pnumbers[9]=10;
        break;

        case 3:
            printf("The satiety elixir was drank. The satiety and peace levels were full.\n");
        pnumbers[0]=10;
        pnumbers[9]=10;

        break;

        }
    CheckIt(levels);
}

void PlayingwiththeOwner(int *pnumbers){
    printf("There is no one happier than me in the world right now!!\n\n");
   pnumbers[5]=pnumbers[5]+2;
        pnumbers[0]=pnumbers[0]-2;
        pnumbers[6]=pnumbers[6]+3;
        pnumbers[1]=pnumbers[1]+3;
        pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){

        if(i==8 || i==6){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void SpendingTimewithOtherPets(int *pnumbers){
    printf("I'll catch you.That bone is mine!!\n\n");

        pnumbers[5]=pnumbers[5]+2;
        pnumbers[0]=pnumbers[0]-1;
        pnumbers[6]=pnumbers[6]+2;
        pnumbers[1]=pnumbers[1]+2;
        pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){

        if(i==8 || i==6){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void SwimmingintheSea(int *pnumbers){
    printf("I'm really good at this sport:)\n\n");

        pnumbers[1]=pnumbers[1]+2;
        pnumbers[6]=pnumbers[6]+3;
        pnumbers[0]=pnumbers[0]-2;
        pnumbers[5]=pnumbers[5]+3;
        pnumbers[3]=pnumbers[3]-1;
        pnumbers[9]=pnumbers[9]+2;


        for(int i=0;i<10;i++){
        if(i==8 || i==6){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
CheckIt(levels);
}

void TakeaShower(int *pnumbers){
    printf("I was really dirty.The shower was really good.\n\n");
        pnumbers[5]=pnumbers[5]+2;
        pnumbers[3]=pnumbers[3]+2;
        pnumbers[8]=pnumbers[8]+2;
        pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
   CheckIt(levels);
}

void SelfCare(int *pnumbers){
    printf("I feel younger!!\n\n");
            pnumbers[3]=pnumbers[3]+5;
            pnumbers[8]=pnumbers[8]+3;
            pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void PlayinginMud(int *pnumbers){
    printf("This time I'm letting you play in the mud. But just this once!! Sometimes it's good to get dirty!!\n\n");
            pnumbers[3]=pnumbers[3]-2;
            pnumbers[8]=pnumbers[8]-2;
            pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
   CheckIt(levels);
}

void WalkofNeed(int *pnumbers){
    int choice9;
    printf("We need to go for a short walk!!\n");
    printf("1-Is the bottom of the tree suitable for you to use the toilet?\n3-There is a sandy area over there, how is it there?\n");
    scanf("%d",&choice9);
    switch(choice9){
   case 1:
       printf("Talya went to the toilet under the tree.\n");

        pnumbers[2]=pnumbers[2]-5;
        pnumbers[9]=pnumbers[9]+2;
        pnumbers[3]=pnumbers[3]-3;


    case 2:
    printf("Talya went to the toilet in the sandy area.\n");
    }

        pnumbers[2]=pnumbers[2]-5;
        pnumbers[9]=pnumbers[9]+2;
        pnumbers[3]=pnumbers[3]-3;



        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void GototheToilet(int *pnumbers){
    printf("I think Talya needs to go to the toilet.\n");
        pnumbers[2]=pnumbers[2]-4;
        pnumbers[3]=pnumbers[3]+2;
        pnumbers[9]=pnumbers[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }

CheckIt(levels);
    printf("I feel better.\n\n");
}

void ToiletEducation(int *pnumbers){
    printf("Talya needs this training. She must learn not to go to the toilet everywhere.\n\n");

        pnumbers[2]=pnumbers[2]-3;
        pnumbers[4]=pnumbers[4]+3;


        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }
    CheckIt(levels);
}

void EducationwithTutor(int *pnumbers){
    printf("Let's see what we will learn today.:)\n\n");
       pnumbers[4]=pnumbers[4]+3;
       pnumbers[5]=pnumbers[5]-1;
       pnumbers[0]=pnumbers[0]-1;
       pnumbers[6]=pnumbers[6]-1;
       pnumbers[7]=pnumbers[7]+1;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }

   CheckIt(levels);
}

void GuidanceTraining(int *pnumbers){
     printf("Today, there is guidance training for disabled individuals so that Talya can become a sensitive dog.\n");
      pnumbers[4]=pnumbers[4]+3;
      pnumbers[6]=pnumbers[6]-1;
      pnumbers[7]=pnumbers[7]+1;
      pnumbers[5]=pnumbers[5]-1;
      pnumbers[0]=pnumbers[0]-1;

     pnumbers[3]=pnumbers[3]-3;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }

    CheckIt(levels);
}

void SecurityTraining(int *pnumbers){
    printf("No one can touch my owner while I'm around!!\n\n");

      pnumbers[4]=pnumbers[4]+3;
      pnumbers[6]=pnumbers[6]-1;
      pnumbers[7]=pnumbers[7]+1;
      pnumbers[5]=pnumbers[5]-1;
      pnumbers[0]=pnumbers[0]-1;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           pnumbers[i]= pnumbers[i];
}
        else{
            pnumbers[i]= pnumbers[i]-1;
        }
    }

CheckIt(levels);
}

void drawBox(int width, int height, const char* text) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("*");
            } else if (i == height / 2 && j == (width - strlen(text)) / 2) {

                printf("%s", text);
                j += strlen(text) - 1;
            } else {
                printf(" ");
            }
        }
        printf("\n");
}
}


int main()
{
    system("color 5");



int width = 80;
    int height =  20;

    char welcomeText[] = "WELCOME TO VIRTUAL PET GAME";


    drawBox(width,height,welcomeText);

   printf("\n\nName of the virtual pet is TALYA.\n\n");


    int levels[10] = {5,5,5,5,5,5,5,5,5,5};
    int *pnumbers[10] = { &levels[0], &levels[1], &levels[2], &levels[3], &levels[4],&levels[5],&levels[6] ,&levels[7],&levels[8],&levels[9]};

    char names[10][30] = {"satiety", "love", "toilet", "hygiene", "education","sleep","entertainment","sociality","health","peace"};


    char requirement[28][100] = {"Being Loved by Its Owner","Being Loved by a Stranger","Being Loved by the Opposite Gender","Time to Sleep","Force to Wake up","Trip Time","Meal Time","Drink Water","Try New Foods","Spending Time at the Dog Park","Stay at Home","Fall in Love","GototheVet","to Punish","Drink Elixir","Spending Time with the Owner","Spending Time with Other Pets","Swimming int the Sea","Take a Shower ","Self Care","Playing in the Mud","Walk of Need ","Go to the Toilet","Toilet Education","Education with the Tutor","Guidance Training","SecurityTraining","EXIT"};
while(1){

printf("\n\n");

        printf("LEVELS\n");
        for(int i=0;i<10;i++){
            printf("%s duzeyi= %d\n",names[i],levels[i]);
        }

printf("\n\n");
    for (int i = 0; i <=27; i++) {
        printf("%d. choice = %s\n", i+1,requirement[i] );

    }

    int index;


    printf("Please make a selection. Enter a value between 1-28. (Press 28 to exit.)");
    scanf("%d", &index);

      if (index == 28) {
            printf("Take care of yourself.I will miss you...\n");
            return 0;
        } else if (index < 1 || index > 28) {
            printf("Unvalid choice.Please try again.\n");
            continue;
        }


    switch(index-1) {
        case 0:

            printf("%d. Choice : %s\n",index,requirement[0]);
            BeingLovedbytheOwner(levels);
             CheckIt(levels);
            break;

            case 1:
            printf("%d. Choice : %s\n",index,requirement[1]);
            BeingLovedbyaStranger(levels);
             CheckIt(levels);
            break;

            case 2:
            printf("%d. Choice : %s\n",index,requirement[2]);
            BeingLovedbytheOppositeGender(levels);
            CheckIt(levels);

            break;

            case 3:
            printf("%d. Choice : %s\n",index,requirement[3]);
            int sayac1=0;
            TimetoSleep(levels);
            CheckIt(levels);

            break;

            case 4:
            printf("%d. Choice : %s\n",index,requirement[4]);
            ForcetoWakeUp(levels);
            CheckIt(levels);

            break;

            case 5:
            printf("%d. Choice : %s\n",index,requirement[5]);
            TimetoTrip(levels);
            CheckIt(levels);
            break;

            case 6:
            printf("%d. Choice : %s\n",index,requirement[6]);
            MealTime(levels);
            CheckIt(levels);
            break;

            case 7:
            printf("%d. Choice : %s\n",index,requirement[7]);
            DrinkWater(levels);
            CheckIt(levels);
            break;

            case 8:
            printf("%d. Choice : %s\n", requirement[8]);
            TryingNewfood(levels);
            CheckIt(levels);
            break;

            case 9:
            printf("%d. Choice : %s\n",index,requirement[9]);
            GototheDogPark(levels);
            CheckIt(levels);
            break ;

            case 10:
            printf("%d. Choice : %s\n",index,requirement[10]);
            StayatHome(levels);
            CheckIt(levels);
            break;

            case 11:
            printf("%d. Choice : %s\n",index,requirement[11]);
            FallinLove(levels);
            CheckIt(levels);
            break;

            case 12:
            printf("%d. Choice : %s\n",index,requirement[12]);
            GototheVet(levels);
            CheckIt(levels);
            break;

            case 13:
            printf("%d. Choice : %s\n",index,requirement[13]);
            toPunish(levels);
            CheckIt(levels);
            break;

            case 14:
            printf("%d. Choice : %s\n",index,requirement[14]);
            ElixirofYouth(levels);
            CheckIt(levels);
            break;

            case 15:
            printf("%d. Choice : %s\n",index,requirement[15]);
            PlayingwiththeOwner(levels);
            CheckIt(levels);
            break;

            case 16:
            printf("%d. Giderilecek : %s\n",index,requirement[16]);
            SpendingTimewithOtherPets(levels);
            CheckIt(levels);
            break;

            case 17:
            printf("%d. Choice : %s\n",index,requirement[17]);
            SwimmingintheSea(levels);
            CheckIt(levels);
            break;

            case 18:
            printf("%d. Choice : %s\n",index,requirement[18]);
            TakeaShower(levels);
            CheckIt(levels);
            break;

            case 19:
            printf("%d. Choice : %s\n", requirement[19]);
            SelfCare(levels);
            CheckIt(levels);
            break;

            case 20:
            printf("%d. Choice : %s\n",index,requirement[20]);
            PlayinginMud(levels);
            CheckIt(levels);
            break;

            case 21:
            printf("%d. Choice : %s\n",index,requirement[21]);
            WalkofNeed(levels);
            CheckIt(levels);
            break;

            case 22:
            printf("%d. Choice : %s\n",index,requirement[22]);
            GototheToilet(levels);
            CheckIt(levels);
            break;

            case 23:
            printf("%d. Choice : %s\n",index,requirement[23]);
            ToiletEducation(levels);
            CheckIt(levels);
            break;

            case 24:
            printf("%d. Choice : %s\n",index,requirement[24]);
            EducationwithTutor(levels);
            CheckIt(levels);
            break;

            case 25:
            printf("%d. Choice : %s\n",index,requirement[25]);
            GuidanceTraining(levels);
            CheckIt(levels);
            break;

            case 26:
            printf("%d. Choice : %s\n",index,requirement[26]);
            SecurityTraining(levels);
            CheckIt(levels);
            break;

            case 27:
            printf("Check out has been made. Goodbye... We look forward to seeing you again.\n",index,requirement[27]);
            CheckIt(levels);
            break;



}





          if (levels[8]<=0){
                     for(int i=0;i<9;i++){
            printf("%s level= %d\n",names[i],levels[i]);
        }
            printf("Talya lost her life functions. The game is over.\n");

            return 0;
        }

          if(levels[0]>=10){

            for(int i=0;i<9;i++){
            printf("%s level= %d\n",names[i],levels[i]);
        }

            printf("Talya was poisoned by eating too much and died..The game is over.\n ");
            return 0;


        }

                 if(levels[0]==0 && levels[5]<=0){

            for(int i=0;i<9;i++){
            printf("%s level= %d\n",names[i],levels[i]);
        }

            printf("Talya died of hunger and lack of sleep. The game is over.\n ");
            return 0;


        }


             if(levels[0]==0){

            for(int i=0;i<9;i++){
            printf("%s level= %d\n",names[i],levels[i]);
        }

            printf("Talya died of starvation. The game is over.\n ");
            return 0;


        }


          if(levels[5]<=0 ){
                     for(int i=0;i<9;i++){
            printf("%s level= %d\n",names[i],levels[i]);
        }
            printf("Talya died of insomnia. The game is over.\n ");

            return 0;

        }

}

return 0;}

