# Find maximum element in array
def find_max(arr):
    max_val = arr[0]
    for i in arr:
        if i > max_val:
            max_val = i
    return max_val

# Reverse an array
def reverse_array(arr):
    start, end = 0, len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
    return arr

# Main
arr = [5, 2, 8, 1, 9, 3]

print("Max element:", find_max(arr))
print("Reversed array:", reverse_array(arr))
