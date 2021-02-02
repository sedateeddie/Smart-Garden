# Smart-Garden
An Arduino / Pi powered Smart Garden

The Ardunio sketch is designed to run four v1.2 or v2.0 capacative soil sensors and one DHT11 temp and humidity sensor.
The Node-Red flow connects to the arduino in serial (9600 baud).
I could not work out how to send data from the Arduino to the pi as a number, therefore function nodes are used to parse strings into numbers so it can be read by Influx DB
Influx DB and Grafana are installed locally on the same Pi, there are many tutorials on the internet showing how these can be installed.
There are nodes to run exec commands, so you can run Python scripts on the Pi, these are triggered via Alexa or on the basis of a set soil moisture content. 
