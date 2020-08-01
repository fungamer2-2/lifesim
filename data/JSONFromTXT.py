from os import SEEK_END
file = open("names.txt", "r")
json = open("jsons/person.json", "a+")
json.write("{\n")

for i in range(200):
	json.write("\t\"" + str(i) + "\": {\n\t\t\"name\": " + file.readline(i) + str("\"\n\t},\n"))

json.seek(0, SEEK_END)
json.truncate()

json.write("}")

json.close()
file.close()