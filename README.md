# Arduino-System
Self-study project
Here, I'll show you how I organize the code and data for each objects in the Arduino component.



The data flow of the project: Arduino master(send request) -> i2c(the communication of arduinos) -> Arduino slave(get received) -> Motor run based on the request -> Arduino slave (send request) -> i2c -> Arduino master (get received) -> Show RGB led light



*NOTE: The project hasn't finished yet, i'm improving it!
