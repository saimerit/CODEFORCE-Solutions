t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split())) 
    b = list(map(int, input().split()))
    print("YES" if len(set(a))+len(set(b)) > 3 else "NO")