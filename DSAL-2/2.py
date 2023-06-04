elements = set()

def create_set():
    global elements
    elements = set()

def add(new_element):
    elements.add(new_element)
    print("Element added successfully.")

def remove(element):
    if element in elements:
        elements.remove(element)
        print("Element removed successfully.")
    else:
        print("Element not found in the set.")

def contains(element):
    if element in elements:
        print("Set contains the element.")
    else:
        print("Set does not contain the element.")

def size():
    print("Size of the set:", len(elements))

def iterator():
    return iter(elements)

def intersection(other_set):
    result_set = create_set()
    for element in elements:
        if other_set.contains(element):
            result_set.add(element)
    return result_set

def union_with(other_set):
    result_set = create_set()
    for element in elements:
        result_set.add(element)
    for element in other_set.iterator():
        result_set.add(element)
    return result_set

def difference(other_set):
    result_set = create_set()
    for element in elements:
        if not other_set.contains(element):
            result_set.add(element)
    return result_set

def is_subset(other_set):
    for element in elements:
        if not other_set.contains(element):
            return False
    return True

def print_menu():
    print("Menu:")
    print("1. Create set")
    print("2. Add element")
    print("3. Remove element")
    print("4. Check if set contains element")
    print("5. Get size of set")
    print("6. Print elements of set")
    print("7. Exit")

def print_set():
    print("Set:", elements)

# Main program
while True:
    print_menu()
    choice = int(input("Enter your choice: "))

    if choice == 1:
        create_set()
        print("Set created successfully.")

    elif choice == 2:
        new_element = input("Enter the element to add: ")
        add(new_element)

    elif choice == 3:
        element_to_remove = input("Enter the element to remove: ")
        remove(element_to_remove)

    elif choice == 4:
        element_to_check = input("Enter the element to check: ")
        contains(element_to_check)

    elif choice == 5:
        size()

    elif choice == 6:
        print_set()

    elif choice == 7:
        print("Exiting program.")
        break

    else:
        print("Invalid choice. Please try again.")
