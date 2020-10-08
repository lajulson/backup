def bubble(lst):
	for i in range(len(lst)-1):
		for j in range(len(lst)-1):
			if lst[j]>lst[j+1]:
				temp = lst[j]
				lst[j]=lst[j+1]
				lst[j+1]=temp


lst = [1,2,4,6,7,9,2,4,7,8]
print("before sort ::")
print(lst)
bubble(lst)
print(lst)
