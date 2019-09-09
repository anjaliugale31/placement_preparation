from collections import defaultdict
def longestPalindrome(s):
	maxlen, maxp, l, dit = 0, "", len(s), defaultdict(list)
	for i in range(l):
		dit[s[i]].append(i)
		for j in dit[s[i][::-1]]:
			if s[j:i+1] == s[j:i+1][::-1]:
				if len(s[j:i+1]) > maxlen:
					maxlen = len(s[j:i+1])
					maxp = s[j:i+1]
					break
	return maxp

st=input()
print(longestPalindrome(st))
