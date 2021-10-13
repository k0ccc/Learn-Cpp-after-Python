def func_print(value):
    return 1.8 * value +32

print("Please enter a Celsius value: ")
value = int(input())
print(value, " degrees Celsius is ", func_print(value), " degrees Fahrenheit.")
