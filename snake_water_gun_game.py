import random

# Options for the game
choices = ["snake", "water", "gun"]

# Function to determine the winner
def determine_winner(player, computer):
    if player == computer:
        return "It's a tie!"
    elif (player == "snake" and computer == "water") or \
         (player == "water" and computer == "gun") or \
         (player == "gun" and computer == "snake"):
        return "You win!"
    else:
        return "You lose!"

# Main game loop
def play_game():
    print("Welcome to the Snake-Water-Gun Game!")
    while True:
        print("\nChoose one: Snake, Water, or Gun")
        player_choice = input("Your choice: ").strip().lower()
        
        # Validate the user's choice
        if player_choice not in choices:
            print("Invalid choice. Please select Snake, Water, or Gun.")
            continue
        
        # Computer's random choice
        computer_choice = random.choice(choices)
        print(f"Computer chose: {computer_choice}")

        # Determine and display the result
        result = determine_winner(player_choice, computer_choice)
        print(result)

        # Ask if the player wants to play again
        play_again = input("\nDo you want to play again? (yes/no): ").strip().lower()
        if play_again != "yes":
            break

    print("Thank you for playing! Goodbye!")

# Start the game
if __name__ == "__main__":
    play_game()
