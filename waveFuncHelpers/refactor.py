inputFilenamePrefix = 'niceData/niceData'
outputFilenamePrefix = 'datasetFiles/data'

for i in range(0, 101):
	for j in range(1, 5):
		with open(inputFilenamePrefix + str(i) + 'p' + str(j) + '.txt') as f:
			newFile = open(outputFilenamePrefix + str(i) + 'p' + str(j) + '.txt', 'w')
			for line in f:
				index = line.find(',')
				a = float(line[1:index])
				b = float(line[index+1:-2])
				newFile.write('{} {}\n'.format(a,b))
			newFile.close()

