from tkinter import *
from tkinter import ttk, messagebox 
from ttkbootstrap import *
import numpy as np 
import time 

N = 50
speed = 100
array = np.linspace(10, 390, N, dtype=np.uint16) 

# this is the display function to display the arrays 
# as bars on the screen 

def display(n, array, color): 
	

	__canvas.delete('all') 

	width = 1560/(3*n-1) 
	gap = width/2

	for i in range(n): 
		__canvas.create_rectangle(7+i*width+i*gap, 0, 7 +
								(i+1)*width+i*gap, array[i], 
								fill=color[i]) 

	root.update_idletasks() 
	

def shuffle(): 
	
	# to shuffle the array 
	np.random.shuffle(array) 
	display(N, array, colors) 


def start(): 
	if algos['selection'] == True: 
		
		# sorting algorithm for selection sort 
		for i in range(len(array)-1): 
			min_index = i 
			for j in range(i+1, len(array)): 
				display(N, array, ['yellow' if a == min_index or a ==
								i else 'green' if
								a <= i else 'cyan'
								for a in range(N)]) 
				
				time.sleep(1/speed) 
				if array[min_index] > array[j]: 
					display(N, array, ['red' if a == min_index or a ==
									j else 'green' if
									a <= i else 'cyan'
									for a in range(N)]) 
					
					time.sleep(1/speed) 
					min_index = j 
			if min_index != i: 
				array[i], array[min_index] = array[min_index], 
				array[i] 
				
				display(N, array, ['pink'
								if a == min_index or a ==
								i else 'green' if a <= i 
								else 'cyan' for a in range(N)]) 
				
				time.sleep(1/speed) 
		display(N, array, ['yellow' for _ in range(N)]) 

	elif algos['insertion'] == True: 
		
		# sorting algorithm for insertion sort 
		for j in range(1, len(array)): 
			key = array[j] 
			i = j-1
			display(N, array, ['yellow' if a == i or a == i +
							1 else 'green' if a <= j 
							else'cyan' for a in range(N)]) 
			time.sleep(1/speed) 
			while i >= 0 and array[i] > key: 
				array[i+1] = array[i] 
				display(N, array, [ 
						'pink' if a == i else 'green' if a <= j 
				else'cyan' for a in range(N)]) 
				time.sleep(1/speed) 
				i -= 1
			array[i+1] = key 
		display(N, array, ['yellow' for _ in range(N)]) 

	else: 
		
		# to show an error message if 
		# the user clicked the start 
		# button without selecting any sorting algorithm 
		messagebox.showerror("Algorithm Visualizer", 
							"You need to select a sorting algorithm") 


def slide(): 
	
	# this function will change 
	# the length of the array 
	# this will modify the speed and 
	# number of elements in real time 
	global speed 
	global N 
	global array 
	N = int(_scale.get()/20) 
	array = np.linspace(5, 400, N, dtype=np.uint16) 
	speed = int(_scale.get()) 
	
	# shuffle method is called to display the new array 
	shuffle() 
	
	

# this method will select selection sort 
# and unselect insertion sort 
def selection(): 

	if algos['selection'] is False: 
		algos['selection'] = True
		__selec.config(style='success.TButton') 

		algos['insertion'] = False
		__in.config(style='danger.TButton') 

	else: 
		algos['selection'] = False
		__selec.config(style='danger.TButton') 

# this method will select the insertion sort 
# and unselect the selection sort 
def insertion(): 

	if algos['insertion'] is False: 
		algos['insertion'] = True
		__in.config(style='success.TButton') 
		algos['selection'] = False
		__selec.config(style='danger.TButton') 

	else: 
		algos['insertion'] = False
		__in.config(style='danger.TButton') 


if __name__ == '__main__': 

	# superheor is a theme that comes with the 
	# ttkbootstrap package 
	root = Style(theme='superhero').master 

	# a dictionary to mark the sorting algorithm TRUE 
	# when selected 
	algos = {'insertion': False, 'selection': False} 

	root.title('Sorting visualizer') 
	root.resizable(0, 0) 
	
	# this is to fix the dimension of the window 
	Label(root, text='Selection and insertion sort visualization'
		).grid(row=0,column=0, columnspan=8) 

	# below are buttons to select the cyan sorting algorithm 

	__in = ttk.Button(root, text='Insertion sort', width=16, 
					padding=5, command=insertion) 
	__in.grid(row=1, column=0, pady=20) 
	__selec = ttk.Button(root, text='Selection sort', 
						width=16, padding=5, command=selection) 
	__selec.grid(row=1, column=1, pady=20) 
	__start = ttk.Button(root, text='Start Sorting', 
						width=16, padding=5, command=start) 
	__start.grid(row=1, column=2, pady=20) 
	__shuffle = ttk.Button(root, text='Shuffle Array', 
						width=16, padding=5, command=shuffle) 
	__shuffle.grid(row=1, column=3, pady=20) 

	# this will provide the user the ability 
	# to change the size of the array 
	_scale = ttk.Scale(root, from_=50, to=1000, 
					length=250, value=1000, 
					command=lambda x: slide()) 
	_scale.grid(row=1, column=4, columnspan=4, padx=5) 

	# to color the array bars 
	colors = ['cyan' for _ in range(N)] 
	

	__canvas = Canvas(root, width=800, height=400) 
	__canvas.grid(row=2, column=0, columnspan=8) 

	shuffle() 
	display(N, array, colors) 

	root.mainloop() 
