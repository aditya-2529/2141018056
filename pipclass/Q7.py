no = int(input("Enter the number of eggs: "))
print('You have {} dozen eggs and {} left over eggs in {} eggs'.format(no//12,no%12,no))
n = no%144
print('You have {} gross eggs, {} dozen egges and {} left over eggs in {} eggs'.format(no//144,n//(12),no%12,no))
