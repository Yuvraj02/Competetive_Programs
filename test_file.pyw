from tkinter import *
from tkinter.ttk import *
from time import strftime
from plyer import notification
import os
import sys

root = Tk()
root.geometry("1024x720")
root.title('Clock')

root.configure(bg="#87CEEB")

lbl1 = Label(root, text="Welcome to the water reminder app, this app will remind you to drink water in every N seconds", font=('calibri', 16, 'bold'),
             background="#87CEEB").pack(pady=20)


lbl = Label(root, font=('calibri', 40, 'bold'),
            background='#87CEEB',
            foreground='white')

lbl.pack(anchor='center', pady=20)

lbl2 = Label(root, text="Enter the time in Seconds to get reminded of water", font=(
    'calibri', 20, 'bold'), background='#87CEEB').pack()
myBox = Entry(root)
myBox.pack(pady=10)

checkTime = Label(root, text='')
checkTime.pack(pady=20)

validTime = Label(root, text='')
validTime.pack(pady=20)


def time():
    default_time = 10000
    try:
        new_time = int(myBox.get())
        if new_time < 5 or new_time > 30:
            validTime.config(
                text="Enter the time greater than 5 and less than 30", background='#87CEEB')
        else:
            string = "Stay Hydrated"
            lbl.config(text=string)
            notification.notify(
                title="Drink Water",
                message="Hello User, The best way to stay hydrated is to drink water each hour 8 times a day",
                app_icon="drinking.ico",
                timeout=3
            )
            checkTime.config(text=f"Time has been set to {new_time} seconds. It is recommended to restart the app if you want to change the time",
                             foreground='red',
                             background='#87CEEB')
            default_time = (new_time*60)
            lbl.after(default_time*1000, time)
    except ValueError:
        checkTime.config(text=f"This is not a Valid time chutiya",
                         background='#87CEEB', foreground='#FF8C00')
        lbl.after(default_time, time)


start_button = Button(root, text="Start", command=time)
start_button.pack(pady=20)


def reset():
    root.destroy()
    os.startfile("test_file.pyw")


Button(root, text="Restart", command=reset).pack(pady=20)

Button(root, text="Quit", command=root.destroy).pack(pady=20)

mainloop()
