pos = -1
def search(lst,num):
	l = 0 
	u = len(lst)-1
	while l<=u:
		mid = (l+u) // 2
		if(lst[mid] == num):
			globals()['pos'] = mid
			return True
		else:
			if lst[mid]<num:
				l = mid+1
			else:
				u = mid-1




lst = [1,4,2,5,7,9,8,10]
lst.sort()
print(lst)
num = (int(input("enter the data to be found : ")))
if search(lst,num):
	print("found.at..:",pos+1)
else:
	print("not found....")
