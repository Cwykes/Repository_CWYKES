#Assignment - Callum Wykes
#Word Adventure Game
import sys
import time
def create_story():

    #Function to save the file to an array
    try:
        file = open("mainstory.txt", "r")
    except IOError as X:
        print("Unable to find the story file, make sure 'mainstory.txt' is present in the same folder as this program.")
        input("Ending program...Press enter key to exit...")
        sys.exit()
    else:
        print("File found!\n")
        global story_array
        story_array = file.readlines()
        file.close()
        return story_array


def instructions():
    #instructions for the game, does not require the text file to load
    print("""
HOW TO PLAY
This is the text-based adventure game, to play this game you play as the main charater who is on a mission to exact his revenge on the monsters that attacked his home.
In the game the user will be given change to choose what the main character does, when it is time for the user to input a command they will be presented with an option box : (option1/option2/option3) : these boxes will have the options the user can choose from.
To choose an option simply type in the action that you would like the character to proform. But beware your choices now may come back to bite you in the future.

          """)
    input("\nPress enter to return to menu...")
    intro()

def outro():
    time.sleep(3)
    print("Thank you for playing the word adventure game")
    input1 = input("Would you like to play again? (y/n)")
    while True:
        if input1 == "y":
            story_array = ""
            intro()
        else:
            input("Exiting game...Press enter to Exit")
            sys.exit()
    
def intro():
    while True:    
        menu_choice = input("""
Welcome to the text-based adventure game!

    1)How To Play
    2)Game Start
    3)Exit
    
Pick an option to continue: """)

        if menu_choice == "1":
            print("\nLoading.....\n")
            time.sleep(3)
            instructions()
        elif menu_choice == "2":
            print("\nloading.....")
            time.sleep(2)
            create_story()
            time.sleep(1)
            display_start()
        elif menu_choice == "3":
            input("Ending program...Press enter key to exit...")
            sys.exit()
        else:
            input("Invalid option,\nPress enter to return to menu...")
        
def game_over():
    print("GAME OVER")
    outro()  
        


def pt_2(cut_rope):
    print(story_array[104])
    while True:
        defe_dod = input()
        if defe_dod == "defend":
            print(story_array[130])
            break
        elif defe_dod == "dodge":
            print(story_array[105])
            break
        else:
            print("Not a valid input.\n")
    
    input()
    print(story_array[106])
    while True:
        getup_sit = input()
        if getup_sit == "get up":
            print(story_array[107])
            while True:
                at_st_ru = input()
                if at_st_ru == "attack":
                    print(story_array[108])
                    while True:
                        brace_dodge = input()
                        if brace_dodge == "brace":
                            print(story_array[131])
                            game_over()
                        elif brace_dodge == "dodge":
                            print(story_array[109])
                            while True:
                                save_1 = input()
                                if save_1 == "rory":
                                    print(story_array[110])
                                    while True:
                                        head_tails_arm = input()
                                        if head_tails_arm == "head":
                                            print(story_array[111])
                                            break
                                        elif head_tails_arm == "tails":
                                            print(story_array[138])
                                            break
                                        elif head_tails_arm == "arm":
                                            print(story_array[139])
                                            break
                                        else:
                                            print("Not a valid input.\n")
                                    while True:
                                        do_de = input()
                                        if do_de == "dodge":
                                            print(story_array[112])
                                            while True:
                                                quickly = input()
                                                if quickly == "attack":
                                                    print(story_array[141])
                                                    game_over()
                                                elif quickly == "dodge":
                                                    print(story_array[113])
                                                    while True:
                                                        r_att = input()
                                                        if r_att == "attack":
                                                            print(story_array[114])
                                                            while True:
                                                                fin_fin = input()
                                                                if fin_fin == "finish it":
                                                                    print(story_array[115])
                                                                    time.sleep(3)
                                                                    break
                                                                elif fin_fin == "find jade":
                                                                    break
                                                                else:
                                                                    print("Not a valid input")
                                                            print(story_array[116])
                                                            while True:
                                                                reach_jump_rope = input()
                                                                if reach_jump_rope == "reach":
                                                                    print(story_array[117])
                                                                    reach_jump_rope = input()
                                                                    if reach_jump_rope == "reach":
                                                                        print(story_array[118])
                                                                        game_over()
                                                                elif reach_jump_rope == "jump":
                                                                    print(story_array[129])
                                                                    game_over()
                                                                elif reach_jump_rope == "use rope":
                                                                    if cut_rope == "yes":
                                                                        print(story_array[142])
                                                                        time.sleep(3)
                                                                        print(story_array[120])
                                                                        outro()
                                                                    else:
                                                                        print(story_array[119])
                                                                        while True:
                                                                            ret_jum = input()
                                                                            if ret_jum == "return home":
                                                                                print(story_array[120])
                                                                                outro()
                                                                            elif ret_jum == "jump":
                                                                                print(story_array[129])
                                                                                game_over()
                                                                            else:
                                                                                print("Not a valid input.\n")
                                                                else:
                                                                    print("Not a valid input.\n")
                                                        elif r_att == "run":
                                                            print(story_array[135])
                                                            game_over()
                                                        else:
                                                            print("Not a valid input.\n")
                                                else:
                                                    print("Not a valid input.\n")
                                        elif do_de == "defend":
                                            print(story_array[140])
                                            game_over()
                                        else:
                                            print("Not a valid input.\n")
                                elif save_1 == "jade":
                                    print(story_array[134])
                                    while True:
                                        ru_att = input()
                                        if ru_att == "run":
                                            print(story_array[136])
                                            game_over()
                                        elif ru_att == "attack":
                                            print(story_array[137])
                                            game_over()
                                        else:
                                            print("Not a valid input.\n")
                                elif save_1 == "neither":
                                    print(story_array[135])
                                    game_over()
                                else:
                                    print("Not a valid input.\n")
                elif at_st_ru == "stare":
                    print(story_array[132])
                    game_over()
                elif at_st_ru == "run":
                    print(story_array[121])
                    game_over()
                else:
                    print("Not a valid input.\n")
                    
        elif getup_sit == "sit":
            print(story_array[132])
            game_over()
        else:
            print("Not a valid input.\n")


def final_battle(cut_rope):
    print(story_array[102])
    while True:
        figh_run = input()
        if figh_run == "run":
            print(story_array[121])
            game_over()
        elif figh_run == "fight":
            print(story_array[103])
            while True:
                split_together = input()
                if split_together == "fight together":
                     print(story_array[122])
                     while True:
                         attacc_wait = input()
                         if attacc_wait == "attack":
                             print(story_array[123])
                             while True:
                                 save = input()
                                 if save == "rory":
                                     print(story_array[124])
                                     game_over()
                                 elif save == "yourself":
                                     print(story_array[125])
                                     while True:
                                         dod_def = input()
                                         if dod_def == "dodge":
                                             print(story_array[128])
                                             while True:
                                                 split_run = input()
                                                 if split_run == "run":
                                                     print(story_array[121])
                                                     game_over()
                                                 elif split_run == "split them up":
                                                     pt_2(cut_rope)
                                                 else:
                                                     print("Not a valid input.\n")
                                         elif dod_def == "defend":
                                             print(story_array[126])
                                             while True:
                                                 def_dod = input()
                                                 if def_dod == "defend":
                                                     print(story_array[127])
                                                     game_over()
                                                 elif def_dod == "dodge":
                                                     print(story_array[128])
                                                     while True:
                                                         split_run = input()
                                                         if split_run == "run":
                                                             print(story_array[121])
                                                             game_over()
                                                         elif split_run == "split them up":
                                                             pt_2(cut_rope)
                                                         else:
                                                             print("Not a valid input.\n")
                                                 else:
                                                     print("Not a valid input.\n")
                                         else:
                                             print("Not a valid input.\n")   
                                 else:
                                    print("Not a valid input.\n")    
                         elif attacc_wait == "wait":
                             time.sleep(2)
                         else:
                             print("Not a valid input.\n")
                                                   
                elif split_together == "split them up":
                    pt_2(cut_rope)
                   
                else:
                    print("Not a valid input.\n")  

        else:
            print("Not a valid input.\n")


def chapter_2(eat_sleep, cut_rope):
    print(story_array[77])
    while eat_sleep == "yes":
        path_climb = input()
        if path_climb == "path":
            print(story_array[78])
            while True:
                cont_stop = input()
                if cont_stop == "continue":
                     print(story_array[79])
                     game_over()
                elif cont_stop == "stop":
                    print(story_array[88])
                    while True:
                        jump_cover = input()
                        if jump_cover == "jump":
                            print(story_array[81])
                            game_over()
                        elif jump_cover == "take cover":
                            print(story_array[82])
                            final_battle(cut_rope)
                        else:
                            print("Not a valid input.\n")
                else:
                    print("Not a valid input.\n")    
        elif path_climb == "climb":
            print(story_array[83])
            game_over()
                        
        else:
            print("Not a valid input.\n")
    while eat_sleep == "no":
        path_climb = input()
        if path_climb == "path":
            print(story_array[78])
            while True:
                cont_stop = input()
                if cont_stop == "continue":
                     print(story_array[79])
                     game_over()
                elif cont_stop == "stop":
                    print(story_array[88])
                    while True:
                        jump_cover = input()
                        if jump_cover == "jump":
                            print(story_array[81])
                            game_over()
                        elif jump_cover == "take cover":
                            print(story_array[90])
                            while True:
                                pull_hold = input()
                                if pull_hold == "pull up":
                                    print(story_array[92])
                                    print(story_array[93])
                                    while True:
                                        fi_run = input()
                                        if fi_run == "fight":
                                            print(story_array[95])
                                            game_over()
                                        elif fi_run == "run":
                                            print(story_array[94])
                                            game_over()
                                        else:
                                            print("Not a valid input")
                                elif pull_hold == "hold on":
                                    print(story_array[96])
                                    game_over()
                                else:
                                    print("Not a valid input")

                        else:
                            print("Not a valid input.\n")
                else:
                    print("Not a valid input.\n")    
        elif path_climb == "climb":
            print(story_array[83])
            game_over()
                        
        else:
            print("Not a valid input.\n")   


    
def morning(kill_drodo, cut_rope):
    while kill_drodo == "no":
        print(story_array[53])
        while True:
            hunt_cont = input()
            if hunt_cont == "hunt":
                print(story_array[56])
                while True:
                    together_alone = input()
                    if together_alone == "together":
                        print(story_array[62])
                        while True:
                            inv_go = input()
                            if inv_go == "investigate":
                                print(story_array[64])
                                time.sleep(3)
                                print(story_array[60])
                                chapter_2("yes", cut_rope)
                            elif inv_go == "go back":
                                print(story_array[63])
                                chapter_2("no", cut_rope)
                            else:
                                print("Not a valid input.\n")
                    elif together_alone == "alone":
                        print(story_array[57])
                        while True:
                            attcc_gobacc = input()
                            if attcc_gobacc == "attack":
                                print(story_array[59])
                                drodo_2(cut_rope)
                            elif attcc_goback == "go back":
                                print(story_array[58])
                                chapter_2(cut_rope)
                            else:
                                print("Not a valid input.\n")
                        
                    else:

                        print("Not a valid input.\n")
            elif hunt_cont == "continue":
                print(story_array[60])
                chapter_2("No", cut_rope)
            else:
                print("Not a valid input.\n")
    print(story_array[52])
    while True:
        eat_cont = input()
        if eat_cont == "eat":
            print(story_array[54])
            chapter_2("yes", cut_rope)
        elif eat_cont == "continue":
            print(story_array[65])
            chapter_2("no", cut_rope)
        else:
            print("Not a valid input")
    
    
def drodo(cut_rope):
    for x in range(0,4):
        print(story_array[19])
        while True:
            att_def = input()
            if att_def == "attack":
                print(story_array[30])
                attack_run = input()
                while True:
                    if attack_run == "attack":
                        print(story_array[31])
                        while True:
                            push_escape = input()
                            if push_escape == "pushback":
                                print(story_array[32])
                                morning("yes", cut_rope)
                            elif push_escape == "escape":
                                print(story_array[26])
                                game_over()
                            else:
                                print("Not a valid input.\n")
                    elif attack_run == "run":
                        print(story_array[28])
                        morning("no", cut_rope)
                    else:
                        print("Not a valid input.\n")    
            elif att_def == "defend":
                print(story_array[21])
                while True:
                    pickup_fight_run = input()
                    if pickup_fight_run == "pick up sword":
                        print(story_array[22])
                        while True:
                            pickup_dodge = input()
                            if pickup_dodge == "pick up sword":
                                print(story_array[27])
                                game_over()
                            elif pickup_dodge == "dodge":
                                print(story_array[23])
                                while True:
                                    pickup_run = input()
                                    if pickup_run == "pick up sword":
                                        print(story_array[24])
                                        drodo(cut_rope)
                                    elif pickup_run == "run":
                                        print(story_array[28])
                                        morning("no", cut_rope)
                                    else:
                                        print("Not a valid input.\n")
                            else:
                                print("Not a valid input.\n")
                                
                    elif pickup_fight_run == "attack":
                        print(story_array[25])
                        game_over()
                    elif pickup_fight_run == "run":
                        print(story_array[26])
                        game_over()
                    else:
                        print("Not a valid input.\n")
                        
            else:
                print("Not a valid input.\n")
        input()
    

def drodo_2(cut_rope):
    for x in range(0,4):
        print(story_array[19])
        while True:
            att_def = input()
            if att_def == "attack":
                print(story_array[30])
                attack_run = input()
                while True:
                    if attack_run == "attack":
                        print(story_array[31])
                        while True:
                            push_escape = input()
                            if push_escape == "pushback":
                                print(story_array[32])
                                time.sleep(3)
                                print(story_array[60])
                                chapter_2("yes", cut_rope)
                            elif push_escape == "escape":
                                print(story_array[26])
                                game_over()
                            else:
                                print("Not a valid input.\n")
                    elif attack_run == "run":
                        print(story_array[28])
                        chapter_2("no", cut_rope)
                    else:
                        print("Not a valid input.\n")    
            elif att_def == "defend":
                print(story_array[21])
                while True:
                    pickup_fight_run = input()
                    if pickup_fight_run == "pick up sword":
                        print(story_array[22])
                        while True:
                            pickup_dodge = input()
                            if pickup_dodge == "pick up sword":
                                print(story_array[27])
                                game_over()
                            elif pickup_dodge == "dodge":
                                print(story_array[23])
                                while True:
                                    pickup_run = input()
                                    if pickup_run == "pick up sword":
                                        print(story_array[24])
                                        drodo_2(cut_rope)
                                    elif pickup_run == "run":
                                        print(story_array[28])
                                        morning("no", cut_rope)
                                    else:
                                        print("Not a valid input.\n")
                                break
                            else:
                                print("Not a valid input.\n")
                                
                    elif pickup_fight_run == "attack":
                        print(story_array[25])
                        game_over()
                    elif pickup_fight_run == "run":
                        print(story_array[26])
                        game_over()
                    else:
                        print("Not a valid input.\n")
                        
            else:
                print("Not a valid input.\n")
        input()
    


def display_start():
    #Function to print the introduction from the text file
    print(story_array[1][:-1])
    print(story_array[2][:-1])
    print(story_array[3])
    input()
    print(story_array[4][:-1])
    print(story_array[5])
    print(story_array[6])
    input()
    chapter1_start()

def cave():
    cut_rope = " "
    print(story_array[39])
    print(story_array[14])
    while True:
        inv = input()
        if inv == "investigate":
            print(story_array[17])
            while True:
                attac = input()
                if attac == "attack":
                    print(story_array[18])
                    drodo("no")
                elif attac == "sleep":
                    print(story_array[15])
                    morning("no", "no")
                else:
                    print("Not a valid input\n")
        elif inv == "sleep":
            print(story_array[15])
            morning("no", "no")
        else:
            print("Not a valid input\n")
            

def tree():
    print(story_array[12])
    while True:
        cut_rope = input()
        if cut_rope == "use":
            print(story_array[13])
            print(story_array[14])
            while True:
                inv = input()
                if inv == "investigate":
                    print(story_array[17])
                    while True:
                        attac = input()
                        if attac == "attack":
                            print(story_array[18])
                            drodo("yes")
                        elif attac == "sleep":
                            print(story_array[15])
                            morning("no", "yes")
                        else:
                            print("Not a valid input\n")
                elif inv == "sleep":
                    print(story_array[15])
                    morning("no", "yes")
                else:
                    print("Not a valid input\n")
        elif cut_rope == "dont":
            print(story_array[47])
            game_over()
        else:
            print("Not a valid input\n")          
                    
                    
            
            
    
    
    
def floor():
    cut_rope = " "
    print(story_array[42])
    print(story_array[14])
    while True:
        inv = input()
        if inv == "investigate":
            print(story_array[43])
            drodo("no")
        elif inv == "sleep":
            print(story_array[44])
            game_over()
        else:
            print("Not a valid input\n")

    




    
def chapter1_start():
    global tired
    while True:
        rest = input(story_array[9])
        if rest == "carry on":
            #eat_sleep = "no"
            chapter_2("no", "no")
        elif rest == "rest":
            while True:
                camp = input(story_array[10])
                if camp == "cave":
                    cave()
                    break
                elif camp == "tree":
                    tree()
                    break            
                elif camp == "floor":
                    floor()
                    break
                else:
                    print("Not a valid choice...\n")
                    continue
        else:
            print("Not a valid choice...\n")
            continue
    





intro()
display_start()
