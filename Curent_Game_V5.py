#written by Phil Seros


#import libraries
import turtle
import time
t=turtle
#format screen and turtle starting point
#t.screensize(1000,1000)
screen = turtle.Screen()
screen.setup(1.0, 1.0)
t.bgcolor('blue')
def Grid():
    t.penup()
    t.goto(-250,-250)
    turtle.speed(0)
    t.pencolor('yellow')
    #draw the box
    for z in range(0,4):
        t.pendown()
        t.fd(500)
        t.lt(90)
    t.penup()
    #draw the columns
    x=row_x_start=-250
    y=row_y_start=-250
    for times in range(0,5):
        t.hideturtle()
        for rows in range(0,1):
            t.goto(x,y)
            t.showturtle()
            t.pendown()
            t.fd(500)
            t.penup()
        y=y+100
    #draw the rows
    z=column_x_start=-250
    k=column_y_start=250
    for times in range(0,5):
        t.hideturtle()
        for columns in range(0,1):
            t.goto(z,k)
            t.setheading(270)
            t.showturtle()
            t.pendown()
            t.fd(500)
            t.penup()
        z=z+100
#label the columns
    for times in range(0,1):
        t.hideturtle()
        LabelX=label_column=-225
        LabelY=label_column=250
        for labelC in range(0,5):
            column_list=["A","B","C","D","E"]
            t.goto(LabelX,LabelY)
            t.write(column_list[labelC],font=('Arial','30','bold'))
            LabelX=LabelX+100
#label the rows
    for times in range(0,1):
        t.hideturtle()
        Label_X=label_row=-300
        Label_Y=label_row=190
        for labelR in range(0,5):
            row_list=["1","2","3","4","5"]
            t.goto(Label_X,Label_Y)
            t.write(row_list[labelR],font=('Arial','30','bold'))
            Label_Y=Label_Y-100



    t.goto(-250,-250)

# this function will accept the x,y starting coordinates and draw a red hit box
def hit(grid_X,grid_Y):
    t.goto(grid_X,grid_Y)
    t.fillcolor("red")
    t.begin_fill()
    t.setheading(0)
    for hit in range(0,4):
        t.showturtle()
        t.pendown()
        t.speed(5)
        t.fd(100)
        t.lt(90)
        t.penup()
        t.hideturtle()
    t.end_fill()
    write_hit()
    
#this writes a hit message at the top of the screen    
def write_hit():
    t.goto(0,290)
    t.write("YOU HIT AN ENEMY SHIP!!!", align='center',font=('Arial','30','bold'))
    time.sleep(2)
    t.undo()    
#This will accept x,y coordinates and fill the grid square black (can change color) for a miss
def miss(grid_X,grid_Y):
    t.goto(grid_X,grid_Y)
    t.fillcolor("black")
    t.begin_fill()
    t.setheading(0)
    for hit in range(0,4):
        t.pendown()
        t.fd(100)
        t.lt(90)
        t.penup()
    t.end_fill()
    write_miss()
#this displays the message for a missed shot at top of screen
def write_miss():
    t.goto(0,290)
    t.write("THERES NOBODY THERE!!", align='center',font=('Arial','30','bold'))
    time.sleep(2)
    t.undo()

user_input = ""              
#this will accept user input and return the x,y coordinate to draw a HIT or MISS
def grid_locations(user_input):
    start_spot_x= 0
    start_spot_y= 0
    if user_input == "A1":
        start_spot_x = -250
        start_spot_y=150
        hit(start_spot_x,start_spot_y)
    elif user_input == "A2":
        start_spot_x = -250
        start_spot_y=50
        hit(start_spot_x,start_spot_y)
    elif user_input == "A3":
        start_spot_x = -250
        start_spot_y=-50
        hit(start_spot_x,start_spot_y)
    elif user_input == "A4":
        start_spot_x = -250
        start_spot_y=-150
        miss(start_spot_x,start_spot_y)
    elif user_input == "A5":
        start_spot_x = -250
        start_spot_y=-250
        hit(start_spot_x,start_spot_y)
    elif user_input == "B1":
        start_spot_x = -150
        start_spot_y=150
        miss(start_spot_x,start_spot_y)
    elif user_input == "B2":
        start_spot_x = -150
        start_spot_y=50
        miss(start_spot_x,start_spot_y)
    elif user_input == "B3":
        start_spot_x = -150
        start_spot_y=-50
        miss(start_spot_x,start_spot_y)
    elif user_input == "B4":
        start_spot_x = -150
        start_spot_y=-150
        miss(start_spot_x,start_spot_y)
    elif user_input == "B5":
        start_spot_x = -150
        start_spot_y=-250
        hit(start_spot_x,start_spot_y)
    elif user_input == "C1":
        start_spot_x = -50
        start_spot_y=150
        miss(start_spot_x,start_spot_y)
    elif user_input == "C2":
        start_spot_x = -50
        start_spot_y=50
        hit(start_spot_x,start_spot_y)
    elif user_input == "C3":
        start_spot_x = -50
        start_spot_y=-50
        miss(start_spot_x,start_spot_y)
    elif user_input == "C4":
        start_spot_x = -50
        start_spot_y=-150
        miss(start_spot_x,start_spot_y)
    elif user_input == "C5":
        start_spot_x = -50
        start_spot_y=-250
        hit(start_spot_x,start_spot_y)
    elif user_input == "D1":
        start_spot_x = 50
        start_spot_y=150
        miss(start_spot_x,start_spot_y)
    elif user_input == "D2":
        start_spot_x = 50
        start_spot_y=50
        hit(start_spot_x,start_spot_y)
    elif user_input == "D3":
        start_spot_x = 50
        start_spot_y=-50
        miss(start_spot_x,start_spot_y)
    elif user_input == "D4":
        start_spot_x = 50
        start_spot_y=-150
        miss(start_spot_x,start_spot_y)
    elif user_input == "D5":
        start_spot_x = 50
        start_spot_y=-250
        hit(start_spot_x,start_spot_y)
    elif user_input == "E1":
        start_spot_x = 150
        start_spot_y=150
        miss(start_spot_x,start_spot_y)
    elif user_input == "E2":
        start_spot_x = 150
        start_spot_y=50
        miss(start_spot_x,start_spot_y)
    elif user_input == "E3":
        start_spot_x = 150
        start_spot_y=-50
        miss(start_spot_x,start_spot_y)
    elif user_input == "E4":
        start_spot_x = 150
        start_spot_y=-150
        miss(start_spot_x,start_spot_y)
    elif user_input == "E5":
        start_spot_x = 150
        start_spot_y=-250
        miss(start_spot_x,start_spot_y)
    return start_spot_x,start_spot_y

#Code for sunk function
def Sunk(ship1, ship2, ship3, input_str):
    if input_str in ["A1", "A2", "A3"]:
        ship1.append(input_str)

        if len(ship1) == 4:
            ship1.clear()
            return True

    elif input_str in ["C2", "D2"]:
        ship3.append(input_str)
        if len(ship3) == 3:
            ship3.clear()
            return True

    elif input_str in ["A5", "B5", "C5", "D5"]:
        ship2.append(input_str)
        if len(ship2) == 5:
            ship2.clear()
            return True

    return False

#Written by: Jon Tomanek
#Define x & y
x = ""
y = 0
input_str = ""
start_spot_x = 0
start_spot_y = 0

#Make parallel lists, one for letters & one for numerical positions
letters = ["A","B","C","D","E"]
numbers = [1,2,3,4,5]

#Take in user input and convert that into movement
def Movement(input_str):
    ship1=[""]
    ship2=[""]
    ship3=[""]

    while True:
        input_str = str(turtle.textinput("INPUT", "Enter strike coordinate (A-E 1-5) (A7) or type 'quit' to exit: ")).upper()
       
        # Check if user enters quit to close program
        if input_str == "QUIT":
            turtle.bye()
            break

        #User input is broken into two vars
        x = input_str[0].upper()
        y = int(input_str[1:])

        #Add hit & miss function into movement
        start_spot_x, start_spot_y = grid_locations(input_str)

        #Input validation 
        while y not in numbers or x not in letters:
            try:
                input_str = str(turtle.textinput("INPUT", "Enter strike coordinate (A-E 1-5) (A7) or type 'quit' to exit: ")).upper()
                x = input_str[0].upper()
                y = int(input_str[1:])
            except ValueError:
                input_str = turtle.textinput("ERROR", "Enter a valid Y input (1-5), press ENTER to continue")
            if x not in letters:
                input_str = turtle.textinput("ERROR", "Enter a valid X input (A-E), press ENTER to continue")
            if y not in numbers:
                input_str = turtle.textinput("ERROR", "Enter a valid Y input (1-5), press ENTER to continue")

        #Get the index of the users input in letters and convert that into the corresponding index of numbers
        x_index = letters.index(x)
        #Compare against the numbers list
        x_value = numbers[x_index]
        # Convert input to grid coordinates
        grid_x = x_value * 50 - 260
        grid_y = y * 50 - 260
        # Move turtle to grid position
        turtle.goto(grid_x, grid_y)

        #Call sunk function
        if Sunk(ship1, ship2, ship3, input_str):
            t.goto(0,290)
            t.write("WE SUNK THEIR SHIP!!!", align='center',font=('Arial','30','bold'))
            time.sleep(2)
            t.undo()


def main():
    Grid()
    Movement(input_str)
    
    
main()
