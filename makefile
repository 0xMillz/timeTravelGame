#Author: Mills McIlroy
#Date: 12/07/2015
#Description: This is my makefile for my CS 162 final project  

all: 
	g++ main.cpp Player.cpp Present.cpp Time.cpp Year400BC.cpp Year1510AD.cpp Year2018AD.cpp Year30AD.cpp  -o play
clean:
	rm *o play

