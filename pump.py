import RPi.GPIO as GPIO
import time

channel = 21 # gpio pin

# GPIO setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(channel, GPIO.OUT, initial=GPIO.HIGH)

def motor_on(pin):
    GPIO.output(pin, GPIO.LOW)  # Turn motor on

def motor_off(pin):
    GPIO.output(pin, GPIO.HIGH)  # Turn motor off

if __name__ == '__main__':
    try:
        motor_on(channel)
        print("ON")
        time.sleep(2) # Will run pump for two seconds
        motor_off(channel)
        print("OFF")
        GPIO.cleanup()
    except KeyboardInterrupt:
        GPIO.cleanup()
