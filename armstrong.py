# function to check user input is number
def get_integer_input(num):
    while True:
        user_input = input(num)
        if user_input.isdigit():
            return int(user_input)
        else:
            print("Please enter a valid number.")


user_num = get_integer_input("Please inter your number: ")

# convert user number to string to apply string methods on the user number
user_string = str(user_num)

# get the number length
user_length = len(user_string)

sum_of_powers = 0

# main function
if user_num == 0:
    print(f"{user_num} is not Armstrong number")
else:
    for i in range(0, user_length):
        sum_of_powers += int(user_string[i]) ** user_length

    if sum_of_powers == user_num:
        print(f"{user_num} is Armstrong number")
    else:
        print(f"{user_num} is not Armstrong number")
        