#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <unistd.h>
#include <cmath>


using namespace std;
string n;
int numberr;
vector <int> vec;
void tikrinimas(int b1, int b2, int b3){
    int bScore=0, mScore=0;
    if(b1<vec[0]){
        mScore++;
    } else if(b1>vec[0]){
        bScore++;
    }
    if(b2<vec[1]){
        mScore++;
    } else if(b2>vec[1]){
        bScore++;
    }
    if(b3<vec[2]){
        mScore++;
    } else if(b3>vec[2]){
        bScore++;
    }
    if(mScore>bScore){
        cout << "LAIMEJAI PRIES BOSAAAAAAHHHH";
    } else if(mScore<bScore){
        cout << "deja pralaimejai, gal nereikejo tu koju skippinti";
    } else {
        cout << "nu ant lygiuju isejai, bet tipo nesgirk cia draugas";
    }

}
int GuessTheNumber()
{
    srand(static_cast<unsigned int>(time(0)));

    int GuessTheNumber = rand() % 21;
    int spejimas, score=10;
    bool right=false;
     cout << "Spek skaiciu nuo 1 iki 20 ir surink kuo daugiau tasku " << endl << "Spejimas: " ;
    while(right!=true)
    {

        cin >> spejimas;
        if(GuessTheNumber==spejimas)
        {
            right=true;
            cout << "Atspejai surinktas tasku kiekis - " << score << endl;
        }
        else if(spejimas>GuessTheNumber)
        {
            score--;
            cout <<"Turimas tasku kiekis - " << score << endl << "Neatspejai skaicius yra mazesnis spek is naujo" << endl << "Spejimas: ";

        }
        else if (spejimas<GuessTheNumber)
        {
            score--;
            cout <<"Turimas tasku kiekis - " << score << endl << "Neatspejai skaicius yra didesnis spek is naujo" << endl << "Spejimas: ";
        }
    }
    if(score>=8){
            vec[2]=vec[2]+30;
        cout << "Padidinai savo Deadlift 30 kg" << endl;

    } else if(score<8){
        vec[2]=vec[2]+15;
    cout << "Padidinai savo Deadlift 15 kg" << endl;

    }
string input; // Variable to hold the input

    cout << "Press Enter to continue..." << endl;
    getline(cin, input); // Wait for Enter key
}

int generateRandomNumber(int round) {

     int lower_bound = pow(10, round - 1);
    int upper_bound = pow(10, round) - 1;
    return rand() % (upper_bound - lower_bound + 1) + lower_bound;
}

bool checkGuess(int number, int guess) {

    return number == guess;
}


int RememberTheNumber(){
    srand(time(0));

    int score = 0;
    int round = 1;
    int maxTime = 5;

    while (true) {
        int numberToRemember = generateRandomNumber(round);


        cout << "Round " << round << ": Remember the number: " << numberToRemember << std::endl;
        Sleep(3000);
        system("cls");


        int playerGuess;
        cout << "Enter the number you remembered: ";
        cin >> playerGuess;


        if (checkGuess(numberToRemember, playerGuess)) {
            cout << "Correct! Your score: " << ++score << std::endl;
        } else {
            cout << "Incorrect! Game Over. Your final score: " << score << std::endl;
            break;
        }
        ++round;

    }

    if(score<6){
            cout<<"You have not added any kg to your strength."<<endl;

    }

    if(score>=6){
            cout<<"You have added 40 kg to your strength."<<endl;
        vec[1]=vec[1]+40;

    }
string input; // Variable to hold the input

    cout << "Press Enter to continue..." << endl;
    getline(cin, input); // Wait for Enter key
    }




int DiceRoll()
{
    string temp;
    srand(static_cast<unsigned int>(time(0)));
    int dice = rand() % 7;
    int bum, result=0;

    for(int i=1; i<=3; i++)
    { cout<<"To bench press you will have to play Dice Roll."<<endl;
        cout << "Round " << i << ": Enter 1 if you think the number will be lower than 4, if higher than 3 enter 2." << endl;
        cin >> bum;

        if(bum==1 && dice<=3)
        {
            result+=1;
        }
        else if(bum==2 && dice>3)
        {
            result+=1;
        }
    }

if(result==1){
vec[0]=vec[0]+10;
cout << "You've increased your BP by 10 kilograms" << endl;

} else if(result==2){
    vec[0]=vec[0]+20;
cout << "You've increased your BP by 20 kilograms" << endl;
}
else if(result==0){
    vec[0]=vec[0]+0;
cout << "You've increased your BP by 0 kilograms" << endl;

}
 else if(result==3){
cout << "You've increased your BP by 30 kilograms" << endl;
vec[0]=vec[0]+30;
}
string input;
    cout << "Press Enter to continue..." << endl;
    getline(cin, input);

}


void stats(string name){

cout << name <<" stats:"<<endl;

    cout << "Bench press strength: " << vec[0] << " "<< endl;

    cout << "Squat strength: " << vec[1] << endl;

    cout << "Deadlift strength: " << vec[2] << endl << endl;

}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = (rand() % 5) * 10;
    int arandomNumber = (rand() % 5) * 10;
    int aarandomNumber = (rand() % 5) * 10;
vec.push_back(randomNumber);
vec.push_back(arandomNumber);
vec.push_back(aarandomNumber);

    cout<< R"(
        $$$$$$$\ $$\ $$\ $$\ $$\ $$\
        $$ __$$\ $$ | $$ | \__|$$ | $$ |
        $$ | $$ | $$$$$$\ $$$$$$$ |$$\ $$\ $$$$$$$\ $$\ $$\ $$\ $$ | $$$$$$$ | $$$$$$\ $$$$$$\
        $$$$$$$\ |$$ __$$\ $$ __$$ |$$ | $$ |$$ __$$\ $$ | $$ |$$ |$$ |$$ __$$ |$$ __$$\ $$ __$$\
        $$ __$$\ $$ / $$ |$$ / $$ |$$ | $$ |$$ | $$ |$$ | $$ |$$ |$$ |$$ / $$ |$$$$$$$$ |$$ | \__|
        $$ | $$ |$$ | $$ |$$ | $$ |$$ | $$ |$$ | $$ |$$ | $$ |$$ |$$ |$$ | $$ |$$ ____|$$ |
        $$$$$$$ |\$$$$$$ |\$$$$$$$ |\$$$$$$$ |$$$$$$$ |\$$$$$$ |$$ |$$ |\$$$$$$$ |\$$$$$$$\ $$ |
        \_______/ \______/ \_______| \____$$ |\_______/ \______/ \__|\__| \_______| \_______|\__|
        $$\ $$ |$$$$$$\ \$$$$$$ |$$\ $$\$$ __$$\ \______/ $$ | \__|
        $$ / $$ | $$$$$$$\ $$$$$$\ $$\ $$$$$$\ $$$$$$$\
        $$$$$$$$ |$$ _____|\_$$ _| $$ |$$ __$$\ $$ __$$\
        $$ __$$ |$$ / $$ | $$ |$$ / $$ |$$ | $$ |
        $$ | $$ |$$ | $$ |$$\ $$ |$$ | $$ |$$ | $$ |
        $$ | $$ |\$$$$$$$\ \$$$$ |$$ |\$$$$$$ |$$ | $$ |
        \__| \__| \_______| \____/ \__| \______/ \__| \__|


        )" << '\n';





    cout<< R"(



                                         :+***+-.
                                        =#++===+++
                                        +*=-:::-=#.
                                        -***+-***+
                                        =+--=-=-=+
                                         +++*****:
                                         +*=-==+=
                                         +%%%%##:
                                      .:=**%@%#*+-.
                           .-=++=+++=--+++*####**=--===+++++=:
                          :+--========-=+********+--+=======-==
                     .=+*++++++**#**+=----=+**++-:--=++*#**++=+*=-:.
                    -*+=+===+=-+%@@@%%*++=--*+*=++*###%@@%*==+=+=*#*=
                  -**==+*%#####@@%##%%%###*+==++***#%%##%@%####***++++-
                 -*-+*+=+*#=-:#*==*#***=--===+++=-=+++*#*=#@#*%@%*+==**+
                  +#*++==+*.  *#++*%##+--+##%%%#**=-+*#%*+*#.  :#+===+=*-
                   :###**==+-. -###%%###%%%%%%%%%%%%#*#%#**.  .+*===*##:
                     -*#####+++: -#%#%%%%%######%%%%%%%%#:  :=+=+*###=
                        .-===**++:.-#+*****###**+****+=:  -===*##*+-
                              .:+=====+*###******##*+==--=+++=:.
                                 =+##+###**++***++#%#=--=+-
                                    -%%*###*++****#%%+=:
                                    =#***#******#%###.
                                   +%#*+=*#*****#***#+
                                  :%%%%%#**+++*+:--%#%.
                                  :*+##%%%%%####=-+#%*+
                                 :+==+++%%%%%%##%%*+*===
                                 *+=-+++**%@%##%#*+=*=-+=
                                -**:-===*=+%@@@*=++=+==-+.
                               .+-*=+*==+=+*@@#====-+---+=.
                               +*++++-+=++*#@@%*++==++:-+=+
                               *+=----*=++*#=@%#**==#=+-++#
                               ##+==:-#*+#%= +#%**++#--*+*#.
                               *#%#+==#**%*   =###+##==+%*#
                               =##%+******.    -%%*%+*#*##+
                                #####*+#*       =#*#***+*#
                                :*+###%%=        =#%%##*+:
                                 *==%@@%.         +%%##=+:
                                 #**#+*:          :#+=+**:
                                 ##**#*           .#%*+*#
                                .#**#%*           -*%##*#.
                                =***##*:         .*=*#***:
                                =%#*#**+         =*+*##*#.
                                :%###*##.        *#######
                                 #%#####.        ######%-
                                 :%####+         -%%###=
                                  *%###.          *####
                                  :%##*           *###-
                                   ###*           #***.
                                   =+*+           ***+
                                   =*++           ++++
                                   =+==          .*+++=.
                                 .====+-         =###**--..
                                --:--==-         :-=---::::.

                                                                                          )" << '\n';

    string vardas;
    cout << "Type in your name"<<endl;
    cin >> vardas;

    cin.ignore();
    system("cls");



stats(vardas);
cout<<"Please press ENTER to continue...";
    cin.ignore();
    system("cls");

    srand(static_cast<unsigned int>(time(0)));
    int bossOneBP = (rand() % 9) * 10;
    int bossOneSQ = (rand() % 9) * 10;
    int bossOneDL = (rand() % 9) * 10;
    if (bossOneBP==0 || bossOneBP==10 || bossOneBP==20)
    {
        bossOneBP=30;
    }
    if (bossOneDL==0 || bossOneDL==10 || bossOneDL==20)
    {
        bossOneDL=30;
    }
    if (bossOneSQ==0 || bossOneSQ==10 || bossOneSQ==20)
    {
        bossOneSQ=30;
    }
    cout << "Your boss stats: " << endl;

    cout << "Bench press strength: " << bossOneBP << endl;
    cout << "Squat strength: " << bossOneSQ << endl;
    cout << "Deadlift strength: " << bossOneDL << endl;



    cout << R"(
                ### ##   ### ##                                        ## ##    ## ##                                       ### ##   ####
                ##  ##   ##  ##                                      ##   ##  ##   ##                                       ##  ##   ##
                ##  ##   ##  ##                                      ####     ##   ##                                       ##  ##   ##
                ## ##    ##  ##                                       #####   ##   ##                                       ##  ##   ##
                ##  ##   ## ##                                           ###  ##   ##                                       ##  ##   ##
                ##  ##   ##                                          ##   ##  ##  ##                                        ##  ##   ##  ##
                ### ##   ##                                            ## ##    ##  ##                                      ### ##   ### ###


                                                                                           -=:
                                                                      .=.    ...........:::#%-                               -*##*+.
                               =*##**-                                :+:...               *%-                              -:..=++*:
     .:::.                    =######*-                               =#.                  *%-                              -:. .::--
    +##%**=                  :+#+*@%%++.                              :*.                  #%-                              :   ...-
   +####@**=..           .-=--:###%#%#*                               :+.                  +=-                              :..:--.-...:.
   +*+%%#%++---:             : -####%#:                               -=.                  +.-                               .-=:......:==-
  :=#*%#%@##-:               :   .::.                         -***-   :-.                  +:= .+*+.                         ::--:::....::===:
    +##%@%%# :               :                               =*%%@%= .+*.                  **- *#%@+                        -:.:--=::-:...:==:=
     :=+++-  :              .+=.                             ++%%%%*-#*+:  .. .... .......-#+-:+*#%#..                     ::..=- :::=-:. ..+::-
             -:.            .##:                             +#%%%%-  -=.                 :%*:.#%%%*..                    .+-::==:.=::=:  .:=-=+:
            :#*-            .#*                               :===:   -+.                  +=: #%%@-                      ::-:..::-==-:-:--:.:===+==.
             #%+            .#*                                       -+:                  +=: -+++                       .-. .:  .:++=-++: .:=..-:=#-
             ##-            :#*                                       -+:                  +=.                            :-:..-=####+--==:.. =#%#+++#.
             *%=            :#*                                      .++-                  *=.                            : :-+#++*+:::::-=.. *###%#*#:
             *%+     .....  :#*                                --=+*#%%#:                 .*+.                 -+*#**=.  .::.:++==:.. .:-+=.. -##*+**#.
             *%+ -=+=========%#.                               .+=:  .**:              ..=*%*.               =%%%%%%%%%+ .-: .:-:----===+=:..:-++*##+:
             *#= ..:**++++==+@%=---::..                               -=:             =%#==%*             ..+%%%%%%%%%%%=.--. .:===::::.:.::. -+*-.
             +#+..:-+%#*=:-=+**++=--------:..                         :+:              :. .*=             -*%%%%%%###%%%#:::: :====-     : -..::
             +##+=--:.      :#+:-=+++++=---====--::                   :=-                 .+=              =%%%%%#++*###*-. ::.+===+      -.-..+        -+##**=.
             =%*        =*=.-%*    .::-==+++++==--:                  -+%*=.               .=-              :%%%%%%%%%%%%:...+++****+      +:::.+:     :#%%%%%%%%+
             =%*        :-=*#%#=:.      .+*=:...                    ::-%+-#**+==-:..      .==               +%%%%%%%%%#.       ::=+==+==--=+-:.-.    -%%%%%%%%%%%=
         -=-.=%*             .-=*#%#+    :%+.                      :: =#*=:......::-=======%*:-:             :+#%%%#*-          ..:-    ..:=-...=--::%%%%%%%%%%%%%
         -+*##%*:.                .:      %*:                     .++*+**:                -%##**=                               . .=        ::-:..::#%%%%%%%#%%%%%
             :=*##*+=:                    **-                    =*=:.                    -##=:.                              .::..::       ..:.    *%%%%%%#******==-:.
                 .-++:                    =#=  .:             .-=*=.                     -#%%*.                             :--:....        :.::    *%%%%%%%%%%%#--==+**:
                                          =%+=*++              .::                     .+#*-:                                             :=---+    =%%%%%%%%%%%-      .
                                      :***+=-.                                         +*-.                                             :-=-=-:      +%%%%%%%%#:
                                       :.                                           .+*+#+                                                            :+*#%%*-
                                                                                     .:-=:


                                                                                                                                                                          )" << '\n';
     cout << "You will have 6 training sessions." << endl;
    cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
    DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
    GuessTheNumber();
    }
cin.ignore();
system("cls");
stats(vardas);

cout << "You have 5 training sessions remaining" << endl;
cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
vec[0]=DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
vec[1]=RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
        vec[2]=GuessTheNumber();
    }

    cin.ignore();
system("cls");

stats(vardas);

cout << "You have 4 training sessions remaining" << endl;
cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
vec[0]=DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
vec[1]=RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
        vec[2]=GuessTheNumber();
    }
cin.ignore();
system("cls");
stats(vardas);

cout << "You have 3 training sessions remaining" << endl;
cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
vec[0]=DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
vec[1]=RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
    vec[2]=GuessTheNumber();
    }

stats(vardas);
cin.ignore();
system("cls");
cout << "You have 2 training sessions remaining" << endl;
cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
vec[0]=DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
vec[1]=RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
        vec[2]=GuessTheNumber();
    }

stats(vardas);
cout << "as cia";
cin.ignore();
system("cls");
cout << "as taip pat cia";
cout << "You have 1 training sessions remaining" << endl;
cout << "Enter BP, SQ or DL to train certain exercise." << endl;
    cin >> n;
    if(n=="BP" || n=="bp" || n=="Bp" || n=="bP")
    {
DiceRoll();
    }
    if(n=="SQ" || n=="sq" || n=="Sq" || n=="sQ")
    {
RememberTheNumber();
    }
    if(n=="DL" || n=="dl" || n=="Dl" || n=="dL"){
      GuessTheNumber();
    }

stats(vardas);
cin.ignore();
system("cls");
cout<<"Please ENTER to continue...";
cin.ignore();
    system("cls");
    stats(vardas);
    cout<<endl;
    cout<<"Fight with your boss"<<endl;

    cout << "Your boss stats: " << endl;

    cout << "Bench press strength: " << bossOneBP << endl;
    cout << "Squat strength: " << bossOneSQ << endl;
    cout << "Deadlift strength: " << bossOneDL << endl;
int bum;
cout << "Type 1 to fight";
cin >> bum;
if(bum==1){
    tikrinimas(bossOneBP, bossOneSQ, bossOneDL);
} else {
    cout << "pasidavei, LOHE";
}
}
