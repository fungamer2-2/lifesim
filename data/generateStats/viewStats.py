import matplotlib.pyplot

# uses matplotlib.pyplot to visualize the generateStat and the grade
# generation algorithms. Must run ./generateStats.cpp and ./grade.cpp
# beforehand to generate results.

x, y = [], []

for line in open('data/generateStats/generateStatResults.txt', 'r'):
	values = [int(s) for s in line.split()]
	x.append(values[0])
	y.append(values[1])

matplotlib.pyplot.plot(x, y)
matplotlib.pyplot.show()

x.clear()
y.clear()

for line in open('data/generateStats/gradeResults.txt', 'r'):
	values = [int(s) for s in line.split()]
	x.append(values[0])
	y.append(values[1])

matplotlib.pyplot.plot(x, y)
matplotlib.pyplot.show()