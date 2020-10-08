def sort(lst):
	for i in range(len(lst)-1):
		minpos = i
		for j in range(i,len(lst)-1):
			if lst[j]<lst[minpos]:
				minpos = j
		temp = lst[i]
		lst[i] = lst[minpos]
		lst[minpos]= temp
		print(lst)



lst = [1,2,3,4,9,8,7,6,5]
print(lst)
sort(lst)
print(lst)
