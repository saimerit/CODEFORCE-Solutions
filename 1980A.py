for _ in range(int(input())):
    n,m = map(int, input().split())
    a = input()
    ans = 0
    if a.count('A') < m:
        ans += m - a.count('A')
    if a.count('B') < m:
        ans += m - a.count('B')
    if a.count('C') < m:
        ans += m - a.count('C')
    if a.count('D') < m:
        ans += m - a.count('D')
    if a.count('E') < m:
        ans += m - a.count('E')
    if a.count('F') < m:
        ans += m - a.count('F')
    if a.count('G') < m:
        ans += m - a.count('G')
    print(ans)