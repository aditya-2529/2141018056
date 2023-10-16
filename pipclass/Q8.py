time = int(input("enter time in min: "))
yr = time//(365*60*24)
day = (time % (365*60*24))//(60*24)
print(f'{yr} year and {day} days')
