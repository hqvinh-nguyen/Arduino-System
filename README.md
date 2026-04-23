<img width="1028" height="574" alt="Onmyway" src="https://github.com/user-attachments/assets/5cc2bdfa-776a-4e49-84f6-7e36abf940ec" />

# Arduino-System
Self-study project
Here, I'll show you how I organize the code and data for each objects in the Arduino component.



The data flow of the project: Arduino master(send request) -> i2c(the communication of arduinos) -> Arduino slave(get received) -> Motor run based on the request -> Arduino slave (send request) -> i2c -> Arduino master (get received) -> Show RGB led light



*NOTE: The project hasn't finished yet, i'm improving it!
