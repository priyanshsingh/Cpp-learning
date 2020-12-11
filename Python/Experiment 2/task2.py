import random

print("Enter word that has to be jumbled: ")

word = input()

word = list(word)

random.shuffle(word)

jumbled_word = "".join(word)

print("jumnled word is: "+jumbled_word)
