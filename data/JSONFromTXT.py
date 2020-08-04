from os import SEEK_END
file = open("./data/names.txt", "r")
json = open("./data/jsons/person.json", "a+")
json.write("{\n")

for i in range(200):
	json.write("\t\"" + str(i) + "\": {\n\t\t\"name\": \"" + file.readline(i + 6)[:-1] + "\"\n\t},\n")

json.seek(0, SEEK_END)
json.truncate()
json.seek(0, SEEK_END)
json.truncate()

json.write("}")

json.close()
file.close()