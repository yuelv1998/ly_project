#!/usr/bin/env python3
from tkinter import *
class application(Frame):
    def  __init__(self, master = None):
        Frame.__init__(self,master)
        self.pack()
        self.createWidgets()


    def createWidgets(self):
        self.helloLabel = Label(self, text='hello world')
        self.helloLabel.pack()
        self.quitButton = Button(self,text='quit', command= self.quit)
        self.quitButton.pack()

app =  application()
app.master.title('hello world')
app.mainloop()




