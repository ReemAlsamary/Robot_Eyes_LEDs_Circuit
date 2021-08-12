# Robot_Eyes_LEDs_Circuit
The required circuit design for control Two LEDs of the Robot Eyes, using Transistor and  Microcontroller board.

## Component List:
- One Arduino Uno R3
- Breadboard
- One NPN Transistor (BJT)
- Two LED
- Two Resistor
-  Wires

## **STEPS:**

### 1. Creating a new Circuit:
- At TINKERCAD(https://www.tinkercad.com/dashboard).


### 2. Connecting the circuit diagram:
- Connect power and ground to the circuit.
- Connect the LEDs in parallel so they get the same voltage.
- Connect the base of the transistor with Arduino digital pin(3).


### 3. Programing the circuit using C++ code to control the LEDs of the Robot eyes, by using the following code:
```
// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(15); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(15); // Wait for 1000 millisecond(s)
}
```

## Output circuit design:
<img width="1280" alt="Robot_Eyes_LEDs_Circuit" src="https://user-images.githubusercontent.com/86277104/129228368-c5dd1b17-86dc-4c2f-818a-4425e6b82505.png">

---

https://user-images.githubusercontent.com/86277104/129228813-04a4a4d0-55f9-4aba-b8c7-de201f1d0bd4.mov


## Simulation:
https://www.tinkercad.com/things/9hMgr9eby0Y-exquisite-bigery-densor/editel?tenant=circuits
