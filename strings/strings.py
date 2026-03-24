s = "hello"

# String length
print("String:", s)
print("Length:", len(s))

# Count vowels
count = 0
for c in s:
    if c in "aeiou":
        count += 1
print("Vowels:", count)

# Reverse string
rev = s[::-1]
print("Reversed:", rev)
