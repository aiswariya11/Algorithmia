'''
In binary search,

 - Compare x with the middle element.
 - If x matches with the middle element, we return the mid index.
 - Else if x is greater than the mid element, then x can only lie in the right (greater) half subarray after the mid element. 
   Then we apply the algorithm again for the right half.
 - Else if x is smaller, the target x must lie in the left (lower) half. So we apply the algorithm for the left half.
'''

def binary(a,f,l,x):
	if l >= f:
		m = (l+f) // 2
		if a[m] == x:
			return m
		elif a[m] > x:
			return binary(a,m+1,l,x)
		else:
			return binary(a,m+1,l,x)
	else:
		return -1


a = [560,50000,55773,88883,672728]

x = int(input("Enter the number you want to search:-"))

result = binary(a,0,len(a)-1,x)
if result != -1:
	print("Element is present at "+str(result)+"th index")
else:
	print("Sorry! element is not present")