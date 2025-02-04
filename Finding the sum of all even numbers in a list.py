#chatgptai
 def sum_of_even_numbers(numbers):
    # Initialize sum variable
    sum_even = 0
    
    # Loop through the list of numbers
    for num in numbers:
        # Check if the number is even
        if num % 2 == 0:
            sum_even += num
    
    # Return the result
    return sum_even

# Example usage
numbers_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = sum_of_even_numbers(numbers_list)
print(f"Sum of even numbers: {result}")
