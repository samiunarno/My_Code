company_list=[
              [1001,"Asus",325000,"BDT","  paid"],
              [1002,"Amazon",0,"BDT","  unpaid"],
              [1003,"Flipkart",265000,"BDT","  paid"],
              [1004,"Microsoft",0,"BDT","  unpaid"],
              [1005,"General",460000,"BDT","  paid"],
              [1006,"Volkswagon",0,"BDT","  unpaid"],
              [1007,"Amazon",0,"BDT","  unpaid"],
              [1008,"Msi",0,"BDT","  unpaid"],
              [1009,"AMD Raedon",0,"BDT","  unpaid"],
              [1010,"Boeing",0,"BDT","  unpaid"],
              [1011,"IBM",0,"BDT","  unpaid"],
              [1012,"Apple",850000,"BDT","  paid"],
              [1013,"Samsung",0,"BDT","  unpaid"],
              [1014,"Alibaba",600000,"BDT","  paid"],
              [1015,"Ford Motors",0,"BDT","  unpaid"]
]

print("\n") #For new line
print("\n") #For new line
print("\n") #For new line

def print_list():
  print("                             Donation list                                 ")
  print("\n")
  print("Membership ID  Company Name  Donated Amount       Payment Status")
  print(" ____________  ___________   ______________       ___________")
  for i in range(0,len(company_list)):
   print("{0:13}  {1:12}  {2:14} {3:3} {4:14}".format(company_list[i][0],company_list[i][1],company_list[i][2],company_list[i][3],company_list[i][4]))

def totals():
  print("Total Donation collected so far ")
  total = []
  for item in company_list:
    total.append(float(item[2]))
    total_amount = 0
    for i in total:
      total_amount += i
  print(f'The total amount of money collected for Reliable Hand of Kashful Foundation is {total_amount}')

def add_list():
    #Ask for item detail
  print(" Enter new company details ")
  mem_ID = int(input("Membership ID: "))
  com_name = input("Company Name: ")
  amount = float(input("Donated Amount: "))
  currency = input("currency type: ")
  print("Attention! For indention you must use two space before you take status input from users ")
  status = input("Payment Status: ")

  #Adding new item
  New_Company = [mem_ID, com_name, amount,currency,status]
  company_list.append(New_Company)
  print("Company details inserted")

def company_status_check(a,b,c,d):
  a,b,c,d=[int(a) for a in input("Enter your company_id:").split(",")]
  for i in range(0,len(company_list)):
    if company_list[i][0]==a:
      print(company_list[i][0] ,company_list[i][1] ,company_list[i][2] ,company_list[i][3])
    if company_list[i][0]==b:
      print(company_list[i][0] ,company_list[i][1] ,company_list[i][2] ,company_list[i][3])
    if company_list[i][0]==c:
      print(company_list[i][0] ,company_list[i][1] ,company_list[i][2] ,company_list[i][3])
    if company_list[i][0]==d:
      print(company_list[i][0] ,company_list[i][1] ,company_list[i][2] ,company_list[i][3])

def list_of_companies_that_not_donated():
  d_amount=0
  for i in range(0,len(company_list)):
    if company_list[i][2]==d_amount:
      print(company_list[i][0] ,company_list[i][1] ,company_list[i][2] ,company_list[i][3] )


option = 10
while option != "0":
  print("What would you like to do ?")
  print("1 -> Print the Donation List")
  print("2 -> Total donation collected so far")
  print("3 -> Add new company to the donation list ")
  print("4 -> company status check ")
  print("5 -> list of companies that not donated ")
  print("0 -> Exit menu")
  option = input("Select option: ")
  print("\n")
  if option == "1":
    print_list()
    print("\n")
  elif option == "2":

    totals()
    print("\n") #For new line
  elif option == "3":
    #Call the insert_item function
    add_list()
    #print_list()
    print("\n") #For new line
  elif option == "4":
    #Call the company status check function
    # company_status_check(a,b,c,d)
    #print_list()
    print("\n") #For new line
  elif option == "5":
    #Call the list of companies that not donated function
    list_of_companies_that_not_donated
    #print_list()
    print("\n") #For new line
