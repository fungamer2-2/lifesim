import matplotlib.pyplot

x, y = [], []

for line in open('data/generateStats/generateStatResults.txt', 'r'):
	values = [int(s) for s in line.split()]
	x.append(values[0])
	y.append(values[1])

matplotlib.pyplot.plot(x, y)
matplotlib.pyplot.show()