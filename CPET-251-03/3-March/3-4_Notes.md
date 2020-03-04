# Exam Review

## PWM

### Timer0/2

Modes 3 and 7 are FastPWM. 

Mode 3: 8 bit timer. 2 possible independent triggers, on `OCRxA` and `OCRxB`

Mode 7: reset on `OCRxA`. trigger on `OCRxB`

### Timer1

Mode 5: 8 bit timer. 2 possible independent triggers, on `OCR1A` and `OCR1B`

Mode 6: 9 bit timer. 2 possible independent triggers, on `OCR1A` and `OCR1B`

Mode 7: 10 bit timer. 2 possible independent triggers, on `OCR1A` and `OCR1B`

Mode 14: reset on `ICR1`. 2 possible independent triggers, on `OCR1A` and `OCR1B`

Mode 15: reset on `OCR1A`. Trigger on `OCR1B`

