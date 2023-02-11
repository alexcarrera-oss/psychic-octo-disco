
import tkinter as tk
import getDataSim
import getTime
import time


now = getTime.now()

def read_from_serial():
  

    l = getDataSim.message(now)
    #r = resulta()
    label.config(text=l)
    root.after(100,read_from_serial)
    



root = tk.Tk()
root.title("TEST GUI")
root.geometry("800x600")
label = tk.Label(root, text="")
label.pack()


root.after(1, read_from_serial)
root.mainloop()

# write(str_to_list(read_from_serial()))