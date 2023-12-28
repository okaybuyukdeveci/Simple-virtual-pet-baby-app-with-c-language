SİMPLE VİRTUAL BABY/PET APP WİTH C LANGUAGE 

General Description:

The steps in the virtual baby application will be as follows:
Virtual baby's satiety, sleep, love, socialization, health, education, hygiene, toilet and
They have needs such as entertainment. To improve each of these needs,
You must define a function. For example; Eat();, sleep(); etc. Each of these needs is rated 0-10
It will have a removal level between . Additional needs depending on your creativity
must be defined.
When each of the functions defined to meet the needs listed is called, the other
The level of needs should be reduced by 1 unit. Note: Health value should not decrease with each 
action.
Certain situations (such as non-vital needs falling to 0) can reduce the health value.
Below is an example. Some actions may increase or decrease more than one need
may affect need more than once. For example, the act of drinking water may reduce the need for 
toilet by other factors.
It will decrease more than the actions (2 units more, total of 3 units). The relevant function in the 
called function
The level should be increased according to the value of meeting the need. A need by default
The elimination action should meet that need by increasing it by 3 units. Note: Some actions may 
depend on the situation
Depending on the situation, this rule may be violated. For example, eating an apple and eating bread 
have the same amount of energy.
It may not satisfy. Such situations are left to your creativity. from basic needs
If any of the (satiety, sleep, health) reaches a value equal to or below 0, the virtual baby
will die. When the baby dies, the game will be exited by saying the baby is dead. eating too much
If it eats (satiety value exceeds 10), the virtual baby will die again, here too the virtual baby
You can write that it died because it exploded and the game will be exited. Virtual baby doesn't go to 
the toilet
over time it will decrease and the hygiene value will be 0. However, its hygiene value is not fatal.
It will constantly reduce the health value. Increasing the number of such chain reactions is yours.
It is in your hand.
Your virtual baby's name, age, names of people he socializes with or their activities, hygiene
the relevant action in the section (combing hair, cutting nails, taking a shower, changing diapers…), 
food
The actions that will take place in functions such as cooking meals and drinking health potions are 
yours.
You need to determine. There must be at least 3 items in each requirement function.
action(eating_apple, making_breakfast_, shower_taking, nail_cutting...) should be included. So one
There must be at least 3 alternatives to meet the need. 
Technical details:
1) At the entrance, you will find us with a welcome text, the virtual baby's name, need levels and 
menu.
must meet the to-do list.
3) The user should be allowed to choose the need to be met with the switch-case structure. Each
After the process, the menu should be printed on the screen again.
4) The user should not exit the program unintentionally.
5) After each choice is made, optional notification message and needs
It should be printed entirely on the screen. For example; The baby slept. All needs list:
Sleep: 4, Hunger: 3, Hygiene: 8 etc.
6) All the needs of the virtual baby should be kept in series. Functions in the first array, in the second
The level of need satisfaction should be written in the series. Relevant indices correspond to each 
other
will come. For example; If needs[0]=”satiety”, level[0]=5. So, virtual
The baby's satiety level is 5.
7) All functions should take all needs as pointer parameters. As a pointer
value according to the operation performed within the function on the assigned need level array.
will be changed.
8) The sleep function must run recursively at least 3 times . This approach can also be used optionally 
for different need functions.
available.
9) When eating is selected, the user is asked how many and what to eat
should be selected. All of these must be received as strings. Depends on the number you choose
The fasting value should be changed to . For example, when "2 apples" is entered, it is entered twice.
The hunger level will be changed as much as the effect of the apple. (In this section, the input 
character string
Since it is taken as and mathematical operation will be applied on the number, it must be
atoi will be used.) Similar operations are optional in other functions.
available. For example, if it is soaped twice, its hygiene value will increase even more.
