#include <iostream>
#include <stdlib.h>
int main(){
    // beggining
    std::cout << "\n######################################################\n" ;
    std::cout <<  
        "Inventor Tony Stark applies his genius for " 
        "high-tech solutions to problems as Iron Man, "
        "the armored Avenger.";
    std::cout << "\n######################################################\n" ;
    std::cout << "\n/////Today IRON MAN is in  mission to save planet earth from THANOS/////";
    //mission one
    std::cout << "\n-Iron Man needs your help to make some choices to win this battle don't let him down \n (you'll play as Iron Man and anytime you want to quit you can write 0 in the choice input) \n";
    int choice1,choice2,choice3;
    int back=3;
        do{
            do{
                std::cout << "\n/////Iron Man Creates an army of normal people and give them all his armors and new technologies(1).\n or "
                "He goes with only the avengers to this battle (2)://///\n";
                std::cin >> choice1;
                if(choice1==0){
                    return 0;
                }
            }while((choice1!=1) && (choice1!=2));
            if (choice1==1){
                std::cout << "\noops when you did that many people got scared in the fight and many of them turned to be with Thanos it was all a setup and you lost the war";
                std::cout << "\n-click (1) to reset your choice or (0) to end the game:\n";
                std::cin >> back;
                if(back==0){
                    // first ending
                    std::cout << "Game Over and thanos won :/";
                    return 0;
                }
            }else{
                back=2;
            }
        }while(back==1);
        //mission 2
        std::cout << "######################################################\n" ;
        do{
            std::cout << "\n-Great choice now you are the avengers leaders and you need to make a plan either you directly attack (1)\n or you make a strategy and try to outsmart Thanos(2):\n ";
            std::cin >> choice2;
            if(choice2==0){
                return 0;
            }
        }while((choice2!=1)&& (choice2!=2));
        switch(choice2){
            case 1:
                std::cout << "\nOOPS Thanos was waiting for the avenegers and you ve lost all your friends try reconsidering your choice";
                break;
            case 2:
                std::cout << "######################################################\n" ;
                //mission 3
                std::cout << "-You're in the middle of the fight and you've got very bad injuries and you'll be dead in just minutes do you finish thanos and die with him (1) or let you're few friends alive try to kill him while you try to escape and heal (2):\n";
                std::cin >> choice3;
                if(choice3==0){
                    return 0;
                }
                if(choice3==1){
                    std::cout << "\nWell done Iron Man you saved the planet and died with honor congratulations ";
                }else{
                    std::cout << "\nThanos escaped and run away you're still alive but you've lost so many friends ";
                }
                break;
            default:
                std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";    
        }
    
    

    

}
