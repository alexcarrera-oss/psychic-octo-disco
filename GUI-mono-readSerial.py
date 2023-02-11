
import tkinter as tk
import getDataSerial

def read_from_serial():


    l = getDataSerial.message()
    #r = resulta()
    label.config(text=l)
    root.after(1,read_from_serial)
    



root = tk.Tk()
root.title("TEST GUI")
root.geometry("800x600")
label = tk.Label(root, text="")
label.pack()


root.after(1, read_from_serial)
root.mainloop()

# write(str_to_list(read_from_serial()))