# Python3 program to find triplets
# in a given array whose sum is zero
#https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/
# function to print triplets with 0 sum
def findTriplets(arr, n):
	found = False
	for i in range(n - 1):

		# Find all pairs with sum
		# equals to "-arr[i]"
		s = set()
		for j in range(i + 1, n):
			x = -(arr[i] + arr[j])
			if x in s:
				print(x, arr[i], arr[j])
				found = True
			else:
				s.add(arr[j])
	if found == False:
		print("No Triplet Found")

# Driver Code
arr = [0, -1, 2, -3, 1]
n = len(arr)
findTriplets(arr, n)

# This code is contributed by Shrikant13
