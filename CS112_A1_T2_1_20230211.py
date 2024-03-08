# File name: CS112_A1_T2_1_20230211.py

""" Purpose: 100 game. Two players start from 0 and alternatively add a number from 1 to 10 to the sum.
 The player who reaches 100 wins. """

# Author: Abdulrhman Emad Mahmoud

# ID: 20230211


# game explanation
print("""***** welcome to the game *****\n
game explanation: Two players start from 0 and alternatively add a number from 1 to 10 to the sum.
The player who reaches 100 wins.\n """)


# function to check user input is integer.
def get_integer_input(num):
    while True:
        user_input = input(num)
        if user_input.isdigit():
            return int(user_input)
        else:
            print("Please enter a valid number.")


# the game
game_number = 0
while game_number < 100:
    # first_player_turn
    first_player_input = get_integer_input("first player turn please choose a number between 1 and 10")
    while first_player_input < 1 or first_player_input > 10:
        print("invalid choice please inter a number between 1 and 10")
        first_player_input = get_integer_input("first player turn please choose a number between 1 and 10")
    game_number += first_player_input
    print(f"current number is: {game_number}")
    if game_number >= 100:
        print("first player won")
        break

    # second_player_turn
    second_player_input = get_integer_input("second player turn please choose a number between 1 and 10")
    while second_player_input < 1 or second_player_input > 10:
        print("invalid choice please inter a number between 1 and 10")
        second_player_input = get_integer_input("second player turn please choose a number between 1 and 10")
    game_number += second_player_input
    print(f"current number is: {game_number}")
    if game_number >= 100:
        print("second player won")
        break
