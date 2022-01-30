a = list(map(int, open('input.txt', 'r').read().split('\n')[1].split()))
a.sort()
open('output.txt', 'w').write(' '.join(list(map(str, a))))
