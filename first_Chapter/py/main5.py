def func_print(value):
    return value * 63240

print("Enter the number of light years: ")
value = int(input())
print(value, " light years = ", func_print(value), " astronomical units.")
