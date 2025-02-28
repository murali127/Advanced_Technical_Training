def highest_prime_factor(n):
    i = 2
    while i * i <= n:
        while n % i == 0:
            n //= i
        i += 1
    return max(n, i - 1)

num = int(input("Enter a number: "))
print("Highest Prime Factor:", highest_prime_factor(num))
