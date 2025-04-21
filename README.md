# 🌙 Automatic Light-Sensitive Lamp using Arduino & SPDT Relay

This project is a smart lighting system that mimics human behavior — it switches on a lamp automatically when it gets dark and turns it off when it's bright. Ideal for porches, hallways, or night-lamps, this system brings automation into everyday life in a simple, reliable way.

Whether you're away or just want to stop flipping switches, this setup has your back.

---

## 🚀 Features

- Fully automatic switching based on ambient light
- Uses a photoresistor (LDR) to detect light levels
- Arduino processes sensor input and controls a relay
- SPDT relay safely switches a high-voltage lamp
- Simple, efficient, and beginner-friendly project

---

## 🧰 Key Components

- Arduino Uno / Nano
- LDR (Light Dependent Resistor)
- Resistor (10kΩ or similar, for voltage divider)
- SPDT Relay Module (5V)
- AC Lamp (bulb or appliance)
- Independent high-voltage power supply (for the lamp)
- Jumper wires, breadboard/PCB

> *No transistor or flyback diode was used in this setup.*

---

## 🧠 How It Works (Detailed)

1. The **LDR** is connected in a voltage divider configuration to provide varying analog values based on ambient light.
2. The **Arduino** reads this analog signal using one of its analog pins (e.g., `A0`).
3. A **threshold value** is set in the code — when the LDR value drops below this level (indicating darkness), it triggers the output.
4. The Arduino sends a **HIGH signal to the relay module's input pin**, energizing the SPDT relay.
5. The **relay switches from its NC (Normally Closed) contact to the NO (Normally Open) contact**, completing the external AC circuit and powering the lamp.
6. When light is restored (LDR value goes above the threshold), the Arduino sends a **LOW signal**, de-energizing the relay and turning off the lamp.
7. The Arduino and the relay circuit are powered via USB or a 5V source, while the high-voltage bulb is safely controlled through the relay’s contacts.

This ensures automatic light control based on environmental lighting — no manual intervention needed.

---

## 💻 Code

The full Arduino sketch is provided here: [`code.ino`](./code.ino)

> Upload the code using the Arduino IDE.  
> You can adjust the `threshold` value based on ambient lighting conditions.

---

## 📐 Circuit & Schematic

- 📄 **Schematic Diagram**: [`schematic_diagram.pdf`](./schematic_diagram.pdf)
- 🖼️ **Circuit View**: [`circuit_view.png`](./circuit_view.png)

The relay is powered by the Arduino, and it controls an external AC lamp connected through a different power source, safely isolated from the Arduino side.

---

## ⚠️ Safety Warning

This project involves **AC mains voltage**, which can be dangerous.  
Please take proper precautions:

- Use insulated wires and a relay module with opto-isolation (if possible)
- Use a protective casing/enclosure

---

## 🪪 License

This project is licensed under the [MIT License](https://choosealicense.com/licenses/mit/).  
Feel free to use, modify, and distribute this project for personal or educational use.

---

## ✍️ Author

Made with ❤️ by **Subhrodip Roy**  
📍 Kolkata, India  
🔧 Hobbyist | Tinkerer | Automation Enthusiast

