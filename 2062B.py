def can_continue_indefinitely(test_cases):
    results = []
    for case in test_cases:
        n, a = case
        min_a = min(a)
        if min_a > 1:
            results.append("YES")
        else:
            results.append("NO")
    return results

# Example usage:
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    test_cases.append((n, a))

results = can_continue_indefinitely(test_cases)
for res in results:
    print(res)