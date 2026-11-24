
S=input("saisissez le nom de l'utilisateur: ")

print("votre nom d'utilisateur est", S,"?")
A=input("")
if A=="OUI".lower():
	print("Nom d'utilisateur sauvegarder, Bienvenu,", S,"!")
while A=="NON".lower():
	S=input("saisissez le nom de l'utilisateur: ")
	print("votre nom d'utilisateur est", S,"?")
	A=input("")
	if A=="OUI".lower():
		print("Nom d'utilisateur sauvegarder, Bienvenu,", S,"!")
	
