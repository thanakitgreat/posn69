def main():
    menu = {
        1: ("Apple", 100),
        2: ("Papaya", 120),
        3: ("Banana", 200),
        4: ("Orange", 60),
    }
    
    total_calories = 0
    while True:
        try:
            choice = int(input())
            if choice == 5:
                print("Bye Bye")
                print(f"Total Calories: {total_calories}")
                break
            elif choice in menu:
                total_calories += menu[choice][1]
            else:
                print("Invalid choice, please enter a number between 1 and 5.")
        except ValueError:
            print("Invalid input, please enter a number.")

if __name__ == "__main__":
    main()