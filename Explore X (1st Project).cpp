#include <iostream>
#include <string>
#include <conio.h> 
#include <thread>
#include <chrono>
using namespace std;

//  MAIN INTERFACE FUNCTIONS PROTOTYPE  //
int Menu(), Settings(), Explore(), game(), TitleScreenB();
void TitleScreenA();

//  TYPING ANIMATION PROTOTYPE  //
void Animate(const std::string& text, int delay);

//  SETTINGS COMPONENTS FUNCTIONS PROTOTYPE  //
void Tutorial(), iExploreX(), TermsAndConditions();
int Settings(), AboutLocation(), Translator(), Language();



// - -  CENTRAL FUNCTION  - - //
int main() {
    while (true) {
        TitleScreenA();
        cout << "Press [Y] To Continue\n\n";
        char choice = _getch();
        if (choice == 'Y' || choice == 'y') {
            Animate("PROCEEDING", 80);
            Animate(".  .  .  ", 100);
            system("cls");
            Menu();
        }
        else if (choice == 'N' || choice == 'n') {
            Animate("GOODBYE", 80);
            Animate(".  .  .  ", 100);
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else {
            system("cls");
            TitleScreenB();
            return 0;
        }
        break;

    }
    return 0;
}

// - - - TYPING ANIMATION FUNCTION - - - //
void Animate(const string& text, int delay) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}


// - - - - - MAIN MENU FUNCTION - - - - //
int Menu() {

    string top_ = R"(

                       ___________________________________________________________________________________
                      /                                                                                  /
                     /                                                                                  /
                    /__________________________________________________________________________________/
                    |                                                                                  |
                    |        /~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~        |
                    |        |                                                                |        |
                    |        |     )";
    string bottom_ = R"(     |        |
                    |        |                                                                |        |
                    |        ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~/        |
                    |                                                                                  |
                    |__________________________________________________________________________________|
                   /                                                                                   /
                  /     )";
    string bottom2_ = R"(            /
                 /___________________________________________________________________________________/
)";

    // main menu text sequence //
    cout << top_;
    Animate("Welcome To ExploreX : The Virtual Exploring Experience", 1);
    cout << bottom_;
    Animate("[A] Start Exploring\t\t[M] Settings\t\t[Esc] Exit", 4);
    cout << bottom2_;

    char choice = _getch();

    while (true) {
        if (choice == 'A' || choice == 'a') {
            cout << "\n\n\t\t\t\t  ";
            Animate("PROCEEDING TO START EXPLORING INTERFACE", 25);
            Animate(". . . . ", 100);
            Explore();
            break;
        }
        else if (choice == 'M' || choice == 'm') {
            cout << "\n\n\t\t\t\t\t";
            Animate("PROCEEDING TO SETTINGS INTERFACE", 25);
            Animate(". . . . ", 100);
            system("cls");
            Settings();
            break;
        }
        else if (choice == 27) {
            cout << "n\n\t\t\t\t\t";
            Animate("Do you wish to Exit?  [Y] Yes\t[N] No", 10);
            choice = _getch();
            if (choice == 'Y' || choice == 'y') {
                system("cls");
                string Goodbye = R"(

                       ___________________________________________________________________________________
                      /                                                                                  /
                     /                                                                                  /
                    /__________________________________________________________________________________/
                    |                                                                                  |
                    |        /~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~        |
                    |        |                                                                |        |
                    |        |                  )";
                string Goodbye2 = R"(         |        |
                    |        |                                                                |        |
                    |        ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~/        |
                    |                                                                                  |
                    |__________________________________________________________________________________|
                   /                                                                                   /
                  /                                                                                   /
                 /___________________________________________________________________________________/
)";
                cout << Goodbye;
                Animate("Have A Nice Day, Traveller!          ", 25);
                cout << Goodbye2;
                return 0;
                return 0;
                return 0;
            }
            else if (choice == 'N' || choice == 'n') {
                system("cls");
                Menu();
                break;
            }
            else {
                system("cls");
                Menu();
                break;
            }

        }
        else {
            system("cls");
            Menu();
            break;
            return 0;
        }
        break;
        return 0;

    }
    return 0;

}


// - - - START EXPLORING FUNCTION - - - //
int Explore() {
    system("cls");
    string top_ = R"(
      /\                                                                                                      /\
     /  \                                                                                                    /  \
    /    \                                                                                                  /    \
   /      \            ________________________________________________________________________            /      \
  /  ____  \          /    /______________________________________________________________\    \          /  ____  \
 /__/ /\ \__\        /____/                                                                \____\        /__/ /\ \__\
   / /  \ \         /    /                                                                  \    \         / /  \ \
  / /    \ \       /    /   |~ ~ ~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~|    \    \       / /    \ \
 /_/______\_\     /    /              /                                         /             \    \     /_/______\_\
 _\________/_    |     |             /      Where Do You Want To Explore?      /               |    |    _\________/_
 \ \      / /     \    \            /                                         /                /   /     \ \      / /
  \ \    / /       \    \   |~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~ ~ ~|     /   /       \ \    / /
 __\ \  / /__       \____\                                                                   /___/       __\ \  / /__
 \  \_\/_/  /        \    \_________________________________________________________________/   /        \  \_\/_/  /
  \        /          \____\_______________________________________________________________/___/          \        /
   \      /                                                                                                \      /
    \    /                                                                                                  \    /
     \  /                                                                                                    \  /
      \/                                                                                                      \/

)";

    string Paris = R"(

________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|


                                                                    .
                                                                    |~
                                                                   /|\
                                                                  |-.-|
      _________________________________________________           '-:-'
      |   [1] ** Paris, France **                     |            [|]
      |                                               |            [|]
      |   > Explore the iconic Eiffel Tower.          |            [|]
      |                                               |            [|]
      |   > Savor French cuisine at local cafe.       |            [|]
      |                                               |           .[|].
      |   > Stroll along the romantic Seine River.    |           :/|\:
      |_______________________________________________|           [/|\]
                                                                  [/|\]
                                                                .:_#|#_:.
                                                                |_ '-' _|
                                                                /\:-.-:/\
                                                               /\|_[|]_|/\
                                                             _/\|~ [|] ~|/\_
                                                             [''=-.[|].-='']
                                                             :-._   |   _.-:
                                                             //\;::-:-::;/\\
                                                            /\.'-\\/|\//-'./\
                                                          .'\/'   :\|/:   '\/'.
                                                        .//\('    [\|/]    ')/\\.
                                                       '':][\.'  .[\|/].  './][:''
                                                           ''    :/\|/\:    ''
                                                                .[\/|\/].
                                                                  '.|.'
                                                                    '


________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|


)";
    string Tokyo = R"(
                                      /\
                                      /\
                                      /\
                                      /\
                                    _`=='_
                                 _-~......~-_                        __________________________________________________
                             _--~............~--_                    |   [2] ** Tokyo, Japan **                       |
                       __--~~....................~~--__              |                                                |
           .___..---~~~................................~~~---..___,  |   > Visit the bustling streets of Shinjuku.    |
            `=.______________________________________________,='     |                                                |
               @^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^@         |   > Experience traditional tea ceremonies.     |
                        |  |  I   I   II   I   I  |  |               |                                                |
                        |  |__I___I___II___I___I__|  |               |   > Enjoy sushi at Tsukiji Fish Market.        |
                        | /___I_  I   II   I  _I___\ |               |________________________________________________|
                        |'_     ~~~~~~~~~~~~~~     _`|               
                    __-~...~~~~~--------------~~~~~...~-__           
            ___---~~......................................~~---___    
.___..---~~~......................................................~~~---..___,
 `=.______________________________________________________________________,='
    @^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^@
              |   |    | |    |  |    ||    |  |    | |    |   |
              |   |____| |____|  |    ||    |  |____| |____|   |
              |__________________|____||____|__________________|
            _-|_____|_____|_____|__|------|__|_____|_____|_____|-_
)";
    string NewYork = R"(


________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

                                            (
                                            (_)
                                            ###       .
                                            (#c    __\|/__
                                             #\     wWWWw
                                             \ \-. (/. .\)
                                             /\ /`\/\   /\
                                             |\/   \_) (_|
                                             `\.' ; ; `' ;`\
                                               `\;  ;    .  ;/\
                                                 `\;    ;  ;|  \
                                                  ;   .'  ' ;  /
                                                  |_.'   ;  | /)
                                                  (     ''._;/`
                                                  |    ' . ;
                                                  |.-'   .:)
                                                  |        |
                                                  (  .'  : |
                                                  |,-  .:: |
                                                  | ,-'  .;|
                                                 _/___,_.:_\_
                                                [I_I_I_I_I_I_]
                                                | __________ |
                                                | || |  | || |
                                               _| ||_|__|_|| |_
                                              /=--------------=\
                                             /                  \
                                            |____________________\
                              _________________________________________________                                    
                              |   [3] ** New York City, USA **                |
                              |                                               |
                              |   > Explore world-class museums and theaters. |
                              |                                               |
                              |   > Discover Central Park and Times Square.   |
                              |                                               |
                              |   > Try a classic New York-style pizza.       |
                              |_______________________________________________|


________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|
)";


    //sequence
    cout << top_ << Paris << Tokyo << NewYork;
    cout << "\n\n\n\n[X] Main Menu\n";


    while (true) {
        char exitChar = _getch();
        if (exitChar == 'x' || exitChar == 'X') {
            system("cls");
            Menu();
            return 0;
        }
        else if (exitChar == '1' || exitChar == '2' || exitChar == '3') {
            system("cls");
            Animate("Teleporting to Location", 10);
            Animate(" .  .  .", 3);
            cout << "\n\n";
            Animate("GOING TO GAME SCREEN INTERFACE", 10);
            game();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            return 0;
        }
        else {
            system("cls");
            Explore();
            return 0;
        }

        return 0;


    }

}


// - - - SETTINGS FUNCTION - - - //
int Settings() {
    while (true) {
        string design = R"(
      /\                                                                                                      /\
     /  \                                                                                                    /  \
    /    \                                                                                                  /    \
   /      \            ________________________________________________________________________            /      \
  /  ____  \          /    /______________________________________________________________\    \          /  ____  \
 /__/ /\ \__\        /____/                                                                \____\        /__/ /\ \__\
   / /  \ \         /    /                                                                  \    \         / /  \ \
  / /    \ \       /    /   |~ ~ ~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~|    \    \       / /    \ \
 /_/______\_\     /    /              /                                         /             \    \     /_/______\_\
 _\________/_    |     |             /          What brings you here?          /               |    |    _\________/_
 \ \      / /     \    \            /                                         /                /   /     \ \      / /
  \ \    / /       \    \   |~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~ ~ ~|     /   /       \ \    / /
 __\ \  / /__       \____\                                                                   /___/       __\ \  / /__
 \  \_\/_/  /        \    \_________________________________________________________________/   /        \  \_\/_/  /
  \        /          \____\_______________________________________________________________/___/          \        /
   \      /                                                                                                \      /
    \    /                                       _________________                                          \    /
     \  /                                       / _______________ \                                          \  /
      \/                        _______________/ /      [T]      \ \_______________                           \/
                               / _______________/     Tutorial    \_______________ \
               _______________/ /      [V]      \                 /      [L]      \ \_______________
              / _______________/   Translator    \_______________/     Language    \_______________ \
             / /               \                 /     [Tab]     \                 /               \ \
            / /                 \_______________/       App       \_______________/                 \ \
            \ \                 /               \    Background   /               \                 / /
             \ \_______________/                 \_______________/                 \_______________/ /
             / /               \                 /      [A]      \                 /               \ \
            / /                 \_______________/    Terms and    \_______________/                 \ \
            \ \                 /      [U]      \    Conditions   /      [P]      \                 / /
             \ \_______________/ Information of  \_______________/  Explore other  \_______________/ /
              \______________  \     Places      /     [Esc]     \    Locations    / _______________/
                             \  \_______________/       Exit      \_______________/ /
                              \________________ \                 / _______________/
                                               \ \_______________/ /
                                                \_________________/
)";
        cout << design;

        char Option = _getch();

        switch (Option) {

            // - - - - - - Tutorial Logic - - - - - - //
        case 'T':
        case 't':
            Animate("PROCEEDING TO TUTORIAL INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                Tutorial();
                char key = _getch();
                if (key == 'X' || key == 'x') {
                    system("cls");
                    break;
                    Settings();
                    break;
                }
            }
            break;


            // - - - - - - Translator Logic - - - - - - //
        case 'V':
        case 'v':
            Animate("PROCEEDING TO TRANSLATOR INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                Translator();
                break;
                break;
            }
            break;

            // - - - - - AboutLocation Logic - - - - - //
        case 'U':
        case 'u':
            Animate("PROCEEDING TO LOCATION INFORMATION INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                AboutLocation();
                break;
                break;
            }
            break;

            // - - - - - ExploreAgain Logic - - - - - //
        case 'P':
        case 'p':
            Animate("PROCEEDING TO EXPLORE OTHER LOCATIONS INTERFACE", 25);
            Animate(" .  .  . ", 100);
            system("cls");
            while (true) {
                Explore();
                return 0;
            }
            break;

            // - - - - - - Language Logic - - - - - - //
        case 'L':
        case 'l':
            Animate("PROCEEDING TO LANGUAGE INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                Language();
                break;
                break;
            }
            break;

            // - - - - - - iExplorex Logic - - - - - //
        case '\t':
            Animate("PROCEEDING TO APPLICATION INFORMATION INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                iExploreX();
                char key = _getch();
                if (key == 'X' || key == 'x') {
                    system("cls");
                    break;
                    Settings();
                    break;
                }
            }
            break;


            // - - - TermsAndConditions Logic - - - - //
        case 'A':
        case 'a':
            Animate("PROCEEDING TO TERMS AND CONDITIONS INTERFACE", 25);
            Animate(" .  .  . ", 100);
            while (true) {
                system("cls");
                TermsAndConditions();
                char key = _getch();
                if (key == 'X' || key == 'x') {
                    system("cls");
                    break;
                    Settings();
                    break;
                }
            }
            break;


            // - - - - - - - Exit Logic - - - - - - //
        case 27:
            Animate("PROCEEDING TO MAIN MENU INTERFACE", 25);
            Animate(". . . . ", 100);
            system("cls");
            Menu();
            return 0;


        default:
            system("cls");
            break;
        }

    }

    return 0;
}


// - - - SETTINGS COMPONENTS - - - //
void Tutorial() {
    string Tutorial = R"(
                                                 _________________  
                                                / _______________ \ 
                                _______________/ /      [W]      \ \_______________ 
                               / _______________/     Forward     \_______________ \
               _______________/ /      [A]      \                 /      [D]      \ \_______________
              / _______________/      Left       \_______________/      Right      \_______________ \
             / /               \                 /      [S]      \                 /               \ \
            / /                 \_______________/     Backward    \_______________/                 \ \
            \ \                 /               \                 /               \                 / /
             \ \_______________/                 \_______________/                 \_______________/ /
             / /               \                 /    [Space]    \                 /               \ \
            / /                 \_______________/       Jump      \_______________/                 \ \
            \ \                 /               \                 /               \                 / /
             \ \_______________/                 \_______________/                 \_______________/ /
              \______________  \                 /      [M]      \                 / _______________/
                             \  \_______________/     Settings    \_______________/ /
                              \________________ \                 / _______________/
                                               \ \_______________/ /
                                                \_________________/

Press [X] to go back to Settings
)";
    cout << Tutorial;
}

int Translator() {
    string text = R"(
                                        ***THIS FEATURE IS NOT AVAILABLE YET***
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|
Hey there! Welcome to our Translator - your ticket to a world where languages mingle and dance. It's not just a tool; 
think of it as a digital tour guide through the diverse landscapes of communication.

Feel like chatting in Deutsch? Press [D], and your English words will groove to a German beat. Fancy some Español
vibes? Hit [S], and your sentences will transform into a Spanish fiesta. [F] takes you to the land of French chic,
turning your words into a stylish soiree.

Want to explore Mandarin? [M] opens the door to a world where characters waltz, turning your English into a visual
masterpiece. [R] guides you through the poetic expanse of Russkij, and [A] lets your words waltz in Arabic script,
[J] invites you to experience Japanese elegance, and [E] converts your text in its English charm.

This isn't just about buttons; it's a digital adventure. Each key press is a step into a world where language bridges
gaps. So, hit a button, unlock a language, and let the translator be your easygoing companion through the world of
words. Your journey into the language wonderland starts now. Enjoy the ride!

                                    TRANSLATE YOUR TEXT INTO ANY OF THE LANGUAGES!!
                                                 _________________  
                                                / _______________ \ 
                                _______________/ /               \ \_______________ 
                               / _______________/                 \_______________ \
               _______________/ /      [D]      \                 /      [F]      \ \_______________
              / _______________/     Deutsch     \_______________/     Francais    \_______________ \
             / /               \                 /      [S]      \                 /               \ \
            / /                 \_______________/     Espanyol    \_______________/                 \ \
            \ \                 /      [E]      \                 /      [A]      \                 / /
             \ \_______________/     English     \_______________/      Arabic     \_______________/ /
             / /               \                 /      [J]      \                 /               \ \
            / /                 \_______________/     Japanese    \_______________/                 \ \
            \ \                 /      [R]      \                 /      [M]      \                 / /
             \ \_______________/     Russkij     \_______________/     Mandarin    \_______________/ /
              \______________  \                 /               \                 / _______________/
                             \  \_______________/                 \_______________/ /
                              \________________ \                 / _______________/
                                               \ \_______________/ /
                                                \_________________/
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

)";
    cout << text;

    char choice = _getch();
    if (choice == 'X' || choice == 'x') {
        system("cls");
        return 0;
    }
    else if (choice != 'X' && choice != 'x') {
        switch (choice) {
        case 'D':
        case 'd':
            Animate("You selected Deutsch", 40);
            break;
        case 'S':
        case 's':
            Animate("You selected Espanyol", 40);
            break;
        case 'F':
        case 'f':
            Animate("You selected Français", 40);
            break;
        case 'M':
        case 'm':
            Animate("You selected Mandarin", 40);
            break;
        case 'R':
        case 'r':
            Animate("You selected Russkij", 40);
            break;
        case 'A':
        case 'a':
            Animate("You selected Arabic", 40);
            break;
        case 'E':
        case 'e':
            Animate("You selected English", 40);
            break;
        case 'J':
        case 'j':
            Animate("You selected Japanese", 40);
            break;
        default:
            system("cls");
            Translator();
            return 0;
            break;
        }
        Animate("        ", 150);
        cout << "\n\nDo you want to change again? (Press [Y] to change translator, [any other key] to go back to Settings";
        char choice2 = _getch();
        if (choice2 == 'Y' || choice2 == 'y') {
            Translator();
        }
        else {
            system("cls");
            return 0;
        }
    }
    return 0;
}

int AboutLocation() {
    string text = R"(
      /\                                                                                                      /\
     /  \                                                                                                    /  \
    /    \                                                                                                  /    \
   /      \            ________________________________________________________________________            /      \
  /  ____  \          /    /______________________________________________________________\    \          /  ____  \
 /__/ /\ \__\        /____/                                                                \____\        /__/ /\ \__\
   / /  \ \         /    /                                                                  \    \         / /  \ \
  / /    \ \       /    /   |~ ~ ~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~|    \    \       / /    \ \
 /_/______\_\     /    /              /                                         /             \    \     /_/______\_\
 _\________/_    |     |             /       Curious about the locations?      /               |    |    _\________/_
 \ \      / /     \    \            /                                         /                /   /     \ \      / /
  \ \    / /       \    \   |~ ~ ~ / ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ / ~ ~ ~ ~ ~|     /   /       \ \    / /
 __\ \  / /__       \____\                                                                   /___/       __\ \  / /__
 \  \_\/_/  /        \    \_________________________________________________________________/   /        \  \_\/_/  /
  \        /          \____\_______________________________________________________________/___/          \        /
   \      /                                                                                                \      /
    \    /                                                                                                  \    /
     \  /                                                                                                    \  /
      \/                                                                                                      \/

Select your desired location to know their information.

[1] Eiffel Tower

[2] Statue of Liberty

[3] Tokyo, Japan
)";



    cout << text;

    char choice = _getch();
    if (choice == 'X' || choice == 'x') {
        system("cls");
        return 0;
    }
    else if (choice != 'X' && choice != 'x') {
        string Paris = R"(
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

Eiffel Tower:
"Behold the majestic Eiffel Tower, an architectural marvel that graces the Parisian skyline. Standing tall at 324 
meters, this iron lattice masterpiece is an emblem of romance and artistic ingenuity. Whether bathed in the warm glow
of the daytime sun or sparkling against the night sky, the Eiffel Tower captivates visitors with its timeless charm.
Take a leisurely stroll beneath its intricate arches, and you'll find yourself immersed in the ambiance of one of the
world's most iconic landmarks."

________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

)";

        string NewYork = R"(
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

Statue of Liberty:
"Welcome to the Statue of Liberty, a symbol of freedom and democracy that proudly stands at the entrance to New York
Harbor. Lady Liberty, standing at 151 feet, extends her torch as a beacon of hope and enlightenment. A gift from the
people of France to the United States, the statue has become an enduring icon of liberty and the pursuit of happiness.
As you gaze upon this colossal copper figure, you can feel the echoes of history and the promise of a brighter future."

________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

)";

        string Tokyo = R"(
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

Tokyo, Japan:
"Step into the vibrant metropolis of Tokyo, where tradition and modernity coalesce in a mesmerizing dance. Skyscrapers
punctuate the skyline, standing as testaments to technological innovation, while historic temples whisper tales of
Japan's rich cultural heritage. Amid the bustling streets of Shibuya and the serene beauty of the Meiji Shrine, Tokyo
beckons you with its neon-lit allure and the tranquility of cherry blossoms in Ueno Park. Discover the dynamic energy
of this city, where ancient traditions seamlessly blend with cutting-edge advancements."
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

)";
        switch (choice) {
        case '1':
            cout << Paris;
            break;

        case '2':
            cout << NewYork;
            break;

        case '3':
            cout << Tokyo;
            break;

        default:
            system("cls");
            AboutLocation();
            return 0;
            break;
        }
        cout << "Do you want to continue?";
        char choice2 = _getch();
        if (choice2 == 'Y' || choice2 == 'y') {
            system("cls");
            AboutLocation();
            return 0;
        }
        else {
            system("cls");
            return 0;
        }
        return 0;
    }
}

int Language() {
    string text = R"(
                                        ***THIS FEATURE IS NOT AVAILABLE YET***
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|
Welcome to the Language Interface! We understand that everyone enjoys the game in their preferred language, and that's
why we've crafted a seamless language experience just for you.

Navigate to the Settings, and you'll find the Language Interface – your gateway to a personalized gaming adventure.
Here, you can select the language that resonates with you the most.

Whether you prefer the thrill of battle in English, the strategic planning in German, the dramatic storytelling in
Spanish, the elegance of French, the intricate details of Russian, the artistic characters of Mandarin, or the script
of Arabic, we've got you covered.

Simply choose your preferred language, hit apply, and watch as the game transforms into a linguistic haven tailored to
your liking. It's not just about changing words; it's about immersing yourself in a gaming experience that speaks your
language.

So, let the Language Interface be your guide, and set the stage for an adventure where every word resonates in your
chosen language. Enjoy the game in a way that feels just right for you. Happy exploring!

                                           CHOOSE YOUR DESIRED LANGUAGE
                                                 _________________  
                                                / _______________ \ 
                                _______________/ /               \ \_______________ 
                               / _______________/                 \_______________ \
               _______________/ /      [D]      \                 /      [F]      \ \_______________
              / _______________/     Deutsch     \_______________/     Francais    \_______________ \
             / /               \                 /      [S]      \                 /               \ \
            / /                 \_______________/     Espanyol    \_______________/                 \ \
            \ \                 /      [E]      \                 /      [A]      \                 / /
             \ \_______________/     English     \_______________/      Arabic     \_______________/ /
             / /               \                 /      [J]      \                 /               \ \
            / /                 \_______________/     Japanese    \_______________/                 \ \
            \ \                 /      [R]      \                 /      [M]      \                 / /
             \ \_______________/     Russkij     \_______________/     Mandarin    \_______________/ /
              \______________  \                 /               \                 / _______________/
                             \  \_______________/                 \_______________/ /
                              \________________ \                 / _______________/
                                               \ \_______________/ /
                                                \_________________/
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

)";


    cout << text;
    char choice = _getch();
    if (choice == 'X' || choice == 'x') {
        system("cls");
        return 0;
    }
    else if (choice != 'X' && choice != 'x') {
        switch (choice) {
        case 'D':
        case 'd':
            Animate("You selected Deutsch", 40);
            break;
        case 'S':
        case 's':
            Animate("You selected Espanyol", 40);
            break;
        case 'F':
        case 'f':
            Animate("You selected Français", 40);
            break;
        case 'M':
        case 'm':
            Animate("You selected Mandarin", 40);
            break;
        case 'R':
        case 'r':
            Animate("You selected Russkij", 40);
            break;
        case 'A':
        case 'a':
            Animate("You selected Arabic", 40);
            break;
        case 'E':
        case 'e':
            Animate("You selected English", 40);
            break;
        case 'J':
        case 'j':
            Animate("You selected Japanese", 40);
            break;
        default:
            system("cls");
            Translator();
            return 0;
            break;
        }
        Animate("        ", 150);
        cout << "\n\nDo you want to change again? (Press [Y] to change language, [any other key] to go back to Settings";
        char choice2 = _getch();
        if (choice2 == 'Y' || choice2 == 'y') {
            Language();
        }
        else {
            system("cls");
            return 0;
        }
    }
    return 0;
}

void iExploreX() {
    string Info = R"(
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

                                            Discover the World with ExploreX

         Embark on a new era of exploration with ExploreX, a cutting-edge VR-compatible application designed
         to redefine your adventure. By harnessing the power of advanced location-based data, ExploreX transcends
         traditional limits, offering users an immersive and educational interaction with their surroundings.

         This dynamic application seamlessly blends education and recreation, making it a versatile and engaging
         platform in the realm of augmented reality.

         ExploreX is not just an app; it's a gateway to captivating and enlightening experiences. Virtually 
         traverse the streets of global cities, from the romantic Seine River in Paris to the bustling energy of
         Tokyo and the vibrant pulse of New York City. With ExploreX, the world becomes more than a place; it
         becomes an accessible, interactive, and enriching journey at your fingertips. Unleash the explorer in you!

________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

Press [X] to go back to Settings
)";
    cout << Info;
}

void TermsAndConditions() {
    string TnC = R"(
________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

                                                  Terms And Conditions

Welcome to ExploreX! These terms and conditions outline the rules and regulations for the use of Intertech's Website, 
located at worldsim.com.
By accessing this website we assume you accept these terms and conditions. Do not continue to use ExploreX if you do
not agree to take all of the terms and conditions stated on this page.

The following terminology applies to these Terms and Conditions, Privacy Statement and Disclaimer Notice and all 
Agreements: Client, You and Your refers to  you, the person log on this website and compliant to InterTech terms and
conditions.
 
InterTech, Ourselves, We, Our and Us, refers to our Company.Party,Parties, or Us, refers to both the Client and 
ourselves. All terms refer to the offer, acceptance and consideration of payment necessary to undertake the
process of our assistance to the Client in the most appropriate manner for the express purpose of meeting the Client's 
needs in respect of provision of the Company's stated services, in accordance with and subject to, prevailing law of 
ph. Any use of the above terminology or other words in the singular, plural, capitalization and/or he/she or they, are
taken as interchangeable and therefore as referring to the same.


Cookies

We employ the use of cookies. By accessing ExploreX, you agreed to use cookies in agreement with the Intertech's 
Privacy Policy. Most interactive websites use cookies to let us retrieve the user's details for each visit. 
Cookies are used by our website to enable the functionality of certain areas to make it easier for people visiting 
our website. Some of our affiliate/advertising partners may also use cookies.

License

Unless otherwise stated, Intertech and/or its licensors own the intellectual property rights for all material
on ExploreX. All intellectual property rights are reserved. You may access this from ExploreX for your own personal
use subject to restrictions set in these terms and conditions.
You must not republish material from ExploreX, sell, rent, or sub-license material from ExploreX, reproduce,
duplicate or copy material from ExploreX, or redistribute content from ExploreX. This Agreement shall begin on the
date hereof. Our Terms and Conditions were created with the help of the Free Terms and Conditions Generator.

You must not:

Republish material from ExploreX
- Sell, rent or sub-license material from ExploreX
- Reproduce, duplicate or copy material from ExploreX
- Redistribute content from ExploreX
- This Agreement shall begin on the date hereof. Our Terms and Conditions were created with the help of the Free Terms
and Conditions Generator.

Parts of this website offer an opportunity for users to post and exchange opinions and information in certain areas
of the website. Intertech does not filter, edit, publish or review Comments prior to their presence on the website.
Comments do not reflect the views and opinions of Intertech, its agents and/or affiliates. Comments reflect the views
and opinions of the person who posts their views and opinions. To the extent permitted by applicable laws, Intertech
shall not be liable for the Comments or for any liability, damages or expenses caused and/or suffered as a result of
any use of and/or posting of and/or appearance of the Comments on this website.




Intertech reserves the right to monitor all Comments and to remove any Comments which can be considered inappropriate,
offensive, or causes a breach of these Terms and Conditions.

You warrant and represent that :

- You are entitled to post the Comments on our website and have all necessary licenses and consents to do so.
- The Comments do not invade any intellectual property right, including without limitation copyright, patent, or
trademark of any third party.
- The Comments do not contain any defamatory, libelous, offensive, indecent, or otherwise unlawful material which is an
invasion of privacy.
- The Comments will not be used to solicit or promote business or custom or present commercial activities or unlawful
activity.
You hereby grant ExploreX a non - exclusive license to use, reproduce, edit, and authorize others to use, reproduce,
and edit any of your Comments in any and all forms, formats, or media.

Hyperlinking to our Content

The following organizations may link to our Website without prior written approval :

- Government agencies
- Search engines
- News organizations
- Online directory distributors may link to our Website in the same manner as they hyperlink to the Websites of other
listed businesses and
- System - wide Accredited Businesses except soliciting non - profit organizations, charity shopping malls, and
charity fundraising groups which may not hyperlink to our Web site.
These organizations may link to our home page, to publications, or to other Website information so long as the link :

- Is not in any way deceptive
- Does not falsely imply sponsorship, endorsement, or approval of the linking party and its products and /or services
- Fits within the context of the linking party's site.
- We may consider and approve other link requests from the following types of organizations :

- Commonly known consumer and /or business information sources
- Dot.com community sites
- Associations or other groups representing charities
- Online directory distributors
- Internet portals
- Accounting, law and consulting firms; and
- Educational institutions and trade associations.

We will approve link requests from these organizations if we decide that :

- The link would not make us look unfavorably to ourselves or to our accredited businesses
- The organization does not have any negative records with us
- The benefit to us from the visibility of the hyperlink compensates for the absence of ExploreX
- The link is in the context of general resource information.

These organizations may link to our home page so long as the link :

- Is not in any way deceptive
- Does not falsely imply sponsorship, endorsement, or approval of the linking party and its products or services
- Fits within the context of the linking party's site.

If you are one of the organizations listed in paragraph 2 above and are interested in linking to our website, you must
inform us by sending an email to ExploreX.Please include your name, your organization name, contact information as well
as the URL of your site, a list of any URLs from which you intend to link to our Website, and a list of the URLs on our
site to which you would like to link.Wait 2 - 3 weeks for a response.

Approved organizations may hyperlink to our Website as follows :

- By use of our corporate name
- By use of the uniform resource locator being linked to
- By use of any other description of our Website being linked to that makes sense within the context and format
of content on the linking party's site.
- No use of ExploreX's logo or other artwork will be allowed for linking absent a trademark license agreement.


iFrames

Without prior approval and written permission, you may not create frames around our Web Pages that alter in any way
the visual presentation or appearance of our Website.

Content Liability

We shall not be held responsible for any content that appears on your Website.You agree to protect and defend us
against all claims that are rising on your Website.
No link(s) should appear on any Website that may be interpreted as libelous, obscene or criminal, or which infringes,
otherwise violates,
or advocates the infringement or other violation of, any third party rights.

Reservation of Rights

We reserve the right to request that you remove all links or any particular link to our Website.You approve to
immediately remove all links to our Website
upon request.We also reserve the right to amen these terms and conditions and its linking policy at any time.By
continuously linking to our Website, you
agree to be bound to and follow these linking terms and conditions.

Removal of links from our website

If you find any link on our Website that is offensive for any reason, you are free to contact and inform us at any
moment.We will consider requests to remove links but we are not obligated to do so or to respond to you directly.

We do not ensure that the information on this website is correct, we do not warrant its completeness or accuracy;
nor do we promise to ensure that the website remains available or that the material on the website is kept up to date.

Disclaimer

To the maximum extent permitted by applicable law, we exclude all representations, warranties and conditions relating
to our website and the use of this website.Nothing in this disclaimer will :

- Limit or exclude our or your liability for death or personal injury
- Limit or exclude our or your liability for fraud or fraudulent misrepresentation
- Limit any of our or your liabilities in any way that is not permitted under applicable law
- Exclude any of our or your liabilities that may not be excluded under applicable law.

The limitations and prohibitions of liability set in this Section and elsewhere in this disclaimer:

As long as the website and the information and services on the website are provided free of charge, we will not be
liable for any loss or damage of any nature.

________________________________________________________________________________________________________________________
|______________________________________________________________________________________________________________________|

Press [X] to go back to Settings.
)";
    cout << TnC;
}

// - - - GAMEPLAY SCREEN SAMPLE INTERFACE - - - //
int game() {
    string text = R"(
ExploreX Uses:

[W] Forward
[A] Left
[S] Backward
[D] Right
[Space] Jump
[M] Settings

)";
    system("cls");
    cout << text;
    char choice = _getch();

    if (choice == 'M' || choice == 'm') {
        cout << "\n\n\t\t\t\t  ";
        Animate("PROCEEDING TO SETTINGS INTERFACE", 25);
        Animate(". . . . ", 100);
        system("cls");
        Settings();
        return 0;
    }
    else {
        system("cls");
        game();
        return 0;

    }

}


// - - - TITLE SCREEN INTERFACE - - - //
void TitleScreenA() {

    string title = R"(
 _____________________________________________________________________________________________________________________
/_____________________________________________________________________________________________________________________\
  |  |                   /__/                                                             \__\                   |  |
  |  |                 /__/       ________             ___                   __   __        \__\                 |  |
  |  |               /__/         |  ____|             | |                   \ \ / /          \__\               |  |
  |  |             /__/           | |__   __  __ _ __  | |  ___   _ __  ___   \ V /             \__\             |  |
  |  |           /__/             |  __|  \ \/ /| '_ \ | | / _ \ | '__|/ _ \   | |                \__\           |  |
  |  |         /__/               | |____  |  | | |_) || || (_) || |  |  __/  / . \                 \__\         |  |
  |  |       /__/                 |______|/_/\_\| .__/ |_| \___/ |_|   \___| /_/ \_\                  \__\       |  |
  |  |     /__/                                 | |                                                     \__\     |  |
  |  |   /__/                                   |_|                                                       \__\   |  |
__|__|_/__/_________________________________________________________________________________________________\__\_|__|__
\_____________________________________________________________________________________________________________________/
                               
)";
    cout << title;

    cout << "\n\t       \033[3m\033[6m=-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n\n";
    cout << "\t\t\t\t\t       \033[3m\033[6m\033[33mExploreX\033[0m";
    cout << "\033[3m\033[6m\033[33m Terms and Conditions\033[0m\n";
    cout << "\n\t       \033[3m\033[6m=-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mAcceptance: Use of ExploreX implies your acceptance of these terms.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mUser Eligibility : Users must be at least 10 years old.\033[0m\n", 12);
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mUser Conduct : Users agree to use ExploreX lawfully and responsibly.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mPrivacy Policy : ExploreX collects and processes user information as", 12);
    cout << "\n\t\t\t   ";
    Animate("outlined in our Privacy Policy.\033[0m\n", 12);
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[33m\033[3mIntellectual Property: All content in ExploreX is protected by\033[0m", 12);
    cout << "\n\t\t\t   ";
    Animate("\033[33m\033[3mintellectual property laws.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mUsage Restrictions: Users must not modify, copy, or distribute", 12);
    cout << "\n\t\t\t   ";
    Animate("ExploreX content without permission.\033[0m\n", 12);
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mUser Account: Users are responsible for maintaining the", 12);
    cout << "\n\t\t\t   ";
    Animate("confidentiality of their accounts.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mTermination: ExploreX reserves the right to terminate user access", 12);
    cout << "\n\t\t\t   ";
    Animate("at any time.\033[0m\n", 12);
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mDisclaimers: ExploreX is provided 'as is' without warranties.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mGoverning Law: These terms are governed by the laws of", 12);
    cout << "\n\t\t\t   ";
    Animate("The Philippines.\033[0m\n", 12);
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mChanges to Terms: ExploreX may update these terms, and continued", 12);
    cout << "\n\t\t\t   ";
    Animate("use implies acceptance of changes.\033[0m\n", 12);
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n\n\n";




    cout << "\n\t       =-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n";

    cout << "\n\t\t\t   ";
    Animate("\033[4mBy agreeing to these terms, you acknowledge that:\n\033[0m", 12);

    cout << "\n\n\t\t\t   ";
    Animate("\033[3m\033[33m> You have read and understood the terms.\033[0m", 12);

    cout << "\n\n\t\t\t   ";
    Animate("\033[3m\033[33m> You are legally eligible to use ExploreX.\033[0m", 12);

    cout << "\n\n\t\t\t   ";
    Animate("\033[3m\033[33m> You consent to the collection and processing of your information\033[0m", 12);

    cout << "\n\t\t\t   ";
    Animate("\033[3m\033[33mas per our Privacy Policy..\n\033[0m", 12);

    cout << "\n\t       =-=-=-=-=-=-===================================================================-=-=-=-=-=-=\n\n";


}

int TitleScreenB() {
    string text_ = R"(
 _____________________________________________________________________________________________________________________
/_____________________________________________________________________________________________________________________\
  |  |                   /__/                                                             \__\                   |  |
  |  |                 /__/       ________             ___                   __   __        \__\                 |  |
  |  |               /__/         |  ____|             | |                   \ \ / /          \__\               |  |
  |  |             /__/           | |__   __  __ _ __  | |  ___   _ __  ___   \ V /             \__\             |  |
  |  |           /__/             |  __|  \ \/ /| '_ \ | | / _ \ | '__|/ _ \   | |                \__\           |  |
  |  |         /__/               | |____  |  | | |_) || || (_) || |  |  __/  / . \                 \__\         |  |
  |  |       /__/                 |______|/_/\_\| .__/ |_| \___/ |_|   \___| /_/ \_\                  \__\       |  |
  |  |     /__/                                 | |                                                     \__\     |  |
  |  |   /__/                                   |_|                                                       \__\   |  |
__|__|_/__/_________________________________________________________________________________________________\__\_|__|__
\_____________________________________________________________________________________________________________________/
                               
)";
    cout << text_;

    cout << "\n\t       \033[3m\033[6m=-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n\n";
    cout << "\t\t\t\t\t       \033[3m\033[6m\033[33mExploreX\033[0m";
    cout << "\033[3m\033[6m\033[33m Terms and Conditions\033[0m\n";
    cout << "\n\t       \033[3m\033[6m=-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mAcceptance: Use of ExploreX implies your acceptance of these terms.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mUser Eligibility : Users must be at least 10 years old.\033[0m\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mUser Conduct : Users agree to use ExploreX lawfully and responsibly.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mPrivacy Policy : ExploreX collects and processes user information as";
    cout << "\n\t\t\t   ";
    cout << "outlined in our Privacy Policy.\033[0m\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[33m\033[3mIntellectual Property: All content in ExploreX is protected by\033[0m";
    cout << "\n\t\t\t   ";
    cout << "\033[33m\033[3mintellectual property laws.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mUsage Restrictions: Users must not modify, copy, or distribute";
    cout << "\n\t\t\t   ";
    cout << "ExploreX content without permission.\033[0m\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mUser Account: Users are responsible for maintaining the";
    cout << "\n\t\t\t   ";
    cout << "confidentiality of their accounts.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mTermination: ExploreX reserves the right to terminate user access";
    cout << "\n\t\t\t   ";
    cout << "at any time.\033[0m\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mDisclaimers: ExploreX is provided 'as is' without warranties.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mGoverning Law: These terms are governed by the laws of";
    cout << "\n\t\t\t   ";
    cout << "The Philippines.\033[0m\n";
    cout << "\n\t       >----->----->----->----->----->----->----->----->----->----->----->----->----->----->----->\n";
    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mChanges to Terms: ExploreX may update these terms, and continued";
    cout << "\n\t\t\t   ";
    cout << "use implies acceptance of changes.\033[0m\n";
    cout << "\n\t       <-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<-----<\n\n\n";




    cout << "\n\t       =-=-=-=-=-=-===================================================================-=-=-=-=-=-=\033[0m\n";

    cout << "\n\t\t\t   ";
    cout << "\033[4mBy agreeing to these terms, you acknowledge that:\n\033[0m";

    cout << "\n\n\t\t\t   ";
    cout << "\033[3m\033[33m> You have read and understood the terms.\033[0m";

    cout << "\n\n\t\t\t   ";
    cout << "\033[3m\033[33m> You are legally eligible to use ExploreX.\033[0m";

    cout << "\n\n\t\t\t   ";
    cout << "\033[3m\033[33m> You consent to the collection and processing of your information\033[0m";

    cout << "\n\t\t\t   ";
    cout << "\033[3m\033[33mas per our Privacy Policy..\n\033[0m";

    cout << "\n\t       =-=-=-=-=-=-===================================================================-=-=-=-=-=-=\n\n";

    cout << "Press [Y] To Continue\n\n";
    while (true) {
        char choice = _getch();

        switch (choice) {
        case 'Y':
        case 'y':
            Animate("PROCEEDING", 80);
            Animate(".  .  .  ", 100);
            system("cls");
            Menu();
            break;
        case 'N':
        case 'n':
            Animate("GOODBYE", 80);
            Animate(".  .  .  ", 100);
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            break;
        default:
            system("cls");
            TitleScreenB();
            break;
        }
        break;
    }
    return 0;
}
