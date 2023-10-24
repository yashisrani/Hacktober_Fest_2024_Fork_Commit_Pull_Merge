# -*- coding: utf-8 -*-
"""
Created on Sun Oct 15 14:18:39 2023

@author: SHAHBAZ
"""

percept=['Dirty','Dirty'] 

actions=['Move Right','Move Left','Clean Dirt'] 
class Agent: 
    def __init__(self): 
       self.position=0 
       self.currAction=0 
       self.run_agent() 
    def run_agent(self):
        if(self.position==0): 
            pos="Left Room" 
        if(self.position==1):
            pos="Right Room"
        print("Current Room: ",pos) 
        self.a=percept[self.position]
        print("Room Status: ",self.a)
        self.getAction()
        self.updateRoom()
        print(" ")
        print(" ")
        
        if(self.position == 0):
            pos= "Left Room"
        if(self.position == 1):
            pos = "Right Room"
        print("Current Room: ", pos)
        self.a = percept[self.position]
        self.getAction()
        self.updateRoom()
        
    def getAction(self):
        print("Cleaning Room")
        if(self.position == 0):
            print(actions[self.position])
        elif(self.position == 1):
            print(actions[self.position])
            
    def updateRoom(self):
        if(self.position == 0):
            self.position = 1
            percept[self.position] = 'Clean'
        elif(self.position == 1):
            self.position = 0
            percept[self.position] = 'Clean'
                
print("INITIAL STATUIS")
print("Room Left A Status : ", percept[0])
print("Room Right B Status : ", percept[1])
vagent = Agent()
print("FINAL STATUIS")
print("Room Left A Status : ", percept[0])
print("Room Right B Status : ", percept[1])
                
        
            
            