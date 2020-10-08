from time  import sleep
from  multithreading import *

class A(Thread):
	def run(self):
		print("hello....")

class B(Thread):
	def run(self):
		print("hi....")

t1 = A()
t2 = B()


