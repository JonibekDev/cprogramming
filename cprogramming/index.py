# create a function that takes a list of numbers and returns the prime numbers

def prime_numbers(numbers):
    prime_list = []
    for number in numbers:
        if number > 1:
            for i in range(2, number):
                if (number % i) == 0:
                    break
            else:
                prime_list.append(number)
    return prime_list

numbers = [1,2,3,4,5,6,7,8,9,10]

print(prime_numbers(numbers))