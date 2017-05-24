menu_item = 0
list = []
while menu_item != 9:
 print "--------------------"
 print "1. Print the list"
 print "2. Add a name to the list"
 print "3. Remove a name from the list"
 print "4. Change an item in the list"
 print "9. Quit"
 menu_item = input("Pick an item from the menu: ")
  if menu_item == 1:
   current = 0
   if len(list) > 0:
    while current < len(list):
print
current,".
",list[current]
current = current + 1
else:
print "List is empty"
elif menu_item == 2:
name = raw_input("Type in a name to add: ")
list.append(name)
elif menu_item == 3:
del_name = raw_input("What name would you like
