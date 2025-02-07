def min_cost_of_array(n, k, a):
    # Forming k subarrays from a
    subarrays = [[] for _ in range(k)]
    for i in range(n):
        subarrays[i % k].append(a[i])
    
    # Constructing b using even indexed subarrays (1-based)
    b = []
    for i in range(1, k, 2):  # 1-based even indices are 1, 3, 5,... (0-based: 0, 2, 4,...)
        b.extend(subarrays[i])
    
    b.append(0)  # Append 0 to the end
    
    # Find the first nonzero element's index (1-based)
    for i, val in enumerate(b):
        if val != 0:
            return i + 1  # Convert to 1-based index
    
    return len(b)  # If all elements are zero (unlikely based on constraints)


def main():
    t = int(input())  # Number of test cases
    
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        
        print(min_cost_of_array(n, k, a))


if __name__ == "__main__":
    main()
