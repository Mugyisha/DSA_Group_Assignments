animals =[]
wild_animals = input("Enter a group of wild animals of your choice: ").lower()
# lion, monkey, baboon
wild_animal_list = wild_animals.split(",")
print(f"Your chosen list of Wild Animals: ", wild_animal_list)
# cow, goat,cat
home_animals = input("Enter a group of wild animals of your choice: ").lower()
dom_animals = home_animals.split(",")
print(f"Your chosen list of Domestic Animals: ", dom_animals)

for animal in wild_animal_list:
    animals.append(animal)
for item in dom_animals:
    animals.append(item)
print(f"Here is your final list of animals: ", animals)
