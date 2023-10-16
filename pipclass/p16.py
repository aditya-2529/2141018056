#16
a = int(input("Enter the no of days: "))
b = int(input("Enter the no of hours: "))
c = int(input("Enter the no of mins: "))
d = int(input("Enter the no of secs: "))
tSec = a * 86400
tsec = tSec + (b * 3600)
tSec = tSec + (c * 60)
tSec = tSec + d
print("Total Seconds: ",tSec," secs")
