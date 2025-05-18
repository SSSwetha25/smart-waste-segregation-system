# Smart Waste Classification System

A smart waste segregation system using Arduino and ESP32-CAM. The setup combines sensor-based automation and Edge Impulse-powered image classification to sort biodegradable and non-biodegradable waste, providing real-time feedback via LCD and serial interface.

## Features

-  **Waste Detection**: Uses ultrasonic sensors to detect the presence of waste near each bin.
-  **AI Integration**: ESP32-CAM captures images, classified using an Edge Impulse model to detect waste type.
-  **Automated Sorting**: Servo motors open respective compartments for bio and non-bio waste.
-  **Status Display**: LCD shows bin fill levels and biogas indication (via MQ135).
-  **Serial Monitoring**: Real-time input and status updates through the Serial Monitor.

## Technologies Used

- Arduino UNO + ESP32-CAM  
- Edge Impulse (for model training and deployment)  
- Ultrasonic sensors (HC-SR04)  
- MQ135 air quality sensor  
- Servo motors  
- I2C LCD 16x2  

## How It Works

1. **Image Classification**: ESP32-CAM captures and classifies an image using a pre-trained Edge Impulse model.
2. **Serial Communication**: Classification result ("biowaste" or "non") is sent to Arduino via serial.
3. **Automated Response**: Arduino controls the appropriate servo based on input and updates the LCD.
4. **Sensor Feedback**: Distance sensors measure bin fill levels; MQ135 gives a rough gas emission estimate.


