# Creating a dictionary
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York"
}

# Accessing values
print(person["name"])  # Output: Alice

# Adding a new key-value pair
person["job"] = "Engineer"

# Updating a value
person["age"] = 26

# Removing a key-value pair
del person["city"]

# Iterating through a dictionary
for key, value in person.items():
    print(f"{key}: {value}")

# Checking if a key exists
if "city" not in person:
    print("City doesn't exists in the dictionary")

# Dictionary methods
keys = person.keys()  # Get all keys
values = person.values()  # Get all values
items = person.items()  # Get all key-value pairs

# Example output
print(person)