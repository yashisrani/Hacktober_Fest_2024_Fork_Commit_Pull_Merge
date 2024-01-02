import tkinter as tk

class calculatorGUI:
    def __init__(self):
        self.mw = tk.Tk()
        #style
        self.mw.geometry("200x200")
        self.mw.resizable(0,0)
        self.mw.title("Calculator")
        self.mw.configure(bg="#67bad1")
        #Frames
        self.topFrame = tk.Frame(self.mw)
        self.midFrame = tk.Frame(self.mw)
        self.botFrame = tk.Frame(self.mw)
        self.botFrame2 = tk.Frame(self.mw)
        self.topFrame.pack(side="top")
        self.midFrame.pack(side="top")
        self.botFrame.pack(side="top")
        self.botFrame2.pack(side="top")
        #intialise
        self.result = 0
        self.resultDisp = tk.StringVar()
        self.resultDisp.set(0)
        #Top Frame
        self.totalLabel = tk.Label(self.topFrame, text="Value: ", bg="#69bad1")
        self.totalNumb = tk.Label(self.topFrame, textvariable=self.resultDisp, bg="#69bad1")
        self.totalLabel.pack(side="left")
        self.totalNumb.pack(side="right")
        #Middle Frame
        self.enterBox = tk.Entry(self.midFrame, width=12, bg="#84cce0")
        self.enterBox.pack(side="top")
        #Bottom Frames
        self.addButton = tk.Button(self.botFrame, text="+", command=self.addition, bg="#4f8b9c")
        self.subButton = tk.Button(self.botFrame, text="-", command=self.subtraction, bg="#4f8b9c")
        self.multButton = tk.Button(self.botFrame2, text="*", command=self.multiplication, bg="#4f8b9c")
        self.divButton = tk.Button(self.botFrame2, text="/", command=self.division, bg="#4f8b9c")
        self.resetButton = tk.Button(self.botFrame, text="Reset", command=self.reset, bg="#4f8b9c")
        self.exitButton = tk.Button(self.botFrame2, text="Quit", command=self.quitProgram, bg="#ff2121")
        self.addButton.pack(side="left")
        self.subButton.pack(side="left")
        self.multButton.pack(side="left")
        self.divButton.pack(side="left")
        self.resetButton.pack(side="right")
        self.exitButton.pack(side="right")

        tk.mainloop()

    def addition(self):
        self.result += float(self.enterBox.get())
        self.resultDisp.set(round(self.result, 4))

    def subtraction(self):
        self.result -= float(self.enterBox.get())
        self.resultDisp.set(round(self.result, 4))

    def multiplication(self):
        self.result *= float(self.enterBox.get())
        self.resultDisp.set(round(self.result, 4))

    def division(self):
        self.result /= float(self.enterBox.get())
        self.resultDisp.set(round(self.result, 4))

    def reset(self):
        self.result = 0
        self.resultDisp.set(self.result)

    def quitProgram(self):
        self.mw.destroy()
    
def main():
    gui = calculatorGUI()

if __name__ == "__main__":
    main()