#set cars to 100
cars = 100
#set space to float 4
space_in_a_car = 4.0
# set drivers to 30
drivers = 30
# set passengers
passengers = 90
#set cars not driven
cars_not_driven = cars - drivers
#cars driven
cars_driven = drivers
#carpool capacity
carpool_capacity = cars_driven * space_in_a_car
#passengers
average_passengers_per_car = passengers / cars_driven
#outputs
print "There are", cars, "cars available."
print "There are only", drivers, "drivers available."
print "There will be", cars_not_driven, "empty cars today."
print "We can transport", carpool_capacity, "people today"
print "We have", passengers, "to carpool today."
print "We need to put about", average_passengers_per_car, "in each car."